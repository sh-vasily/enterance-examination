#pragma warning(disable : 4996)

#include "Birdie.h"
#include <cstring>


Birdie::Birdie(double weight, char species[8], char * family) :_weight(weight)
{
	strcpy(_species, species);
	_family = new char[strlen(family)];
	strcpy(_family, family);
}

Birdie::Birdie(Birdie & birdie)
{
	_weight = birdie.GetWeight();
	strcpy(_species,birdie.GetSpecies());
	_family = new char[strlen(birdie.GetFamily())];
	strcpy(_family, birdie.GetFamily());
}

Birdie& Birdie::operator=(Birdie & birdie)
{
	_weight = birdie.GetWeight();
	strcpy(_species, birdie.GetSpecies());
	_family = new char[strlen(birdie.GetFamily())];
	strcpy(_family, birdie.GetFamily());

	return *this;
}

/*
Birdie::~Birdie()
{
	delete [8] _species;
	delete [] _family;
}*/