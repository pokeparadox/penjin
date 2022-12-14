/*
	Penjin is Copyright (c)2005, 2006, 2007, 2008, 2009, 2010 Kevin Winfield-Pantoja

	This file is part of Penjin.

	Penjin is free software: you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Penjin is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with Penjin.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "Random.h"

namespace Random
{
    int min = 0;
    int max = 1;
    int seed = randSeed();
}

int Random::randSeed()	//	seed the random number generator
{
    int seed = static_cast<int>(time(0));
    srand(seed);
    return seed;
}

int Random::getSeed()
{
    return seed;
}

bool Random::nextBool()
{
    if(rand()%2 == 0)
        return true;
    return false;
}

Fixed Random::nextFixed()
{
    int range = max-min;
    return (min + Fixed(range * rand() /(RAND_MAX + 1.0f)));
}
float Random::nextFloat()
{
	float range = max - min;
	return (min + float(range * rand() / (RAND_MAX + 1.0f )));
}

double Random::nextDouble()
{
	double range = max - min;
	return (min + double(range * rand() / (RAND_MAX + 1.0)));
}

int Random::nextInt(){return (min + rand() % (max - min +1));}

float Random::nextFloat(CRint min, CRint max)
{
	float range = max - min;
	return (min + float(range * rand() / (RAND_MAX + 1.0f )));
}

Fixed Random::nextFixed(CRint min, CRint max)
{
    int range = max-min;
    return (min + Fixed(range * rand() /(RAND_MAX + 1.0f)));
}

double Random::nextDouble(CRint min, CRint max)
{
	double range = max - min;
	return (min + double(range * rand() / (RAND_MAX + 1.0)));
}

int Random::nextInt(CRint min, CRint max){return (min + rand() % (max - min +1));}

void Random::setSeed(CRint s){srand(s);seed=s;}
void Random::setLimits(CRint min,CRint max){setMin(min);setMax(max);}
void Random::setMax(CRint m){max = m;}
void Random::setMin(CRint m){min = m;}

/// random class
RandomClass::RandomClass(CRint min, CRint max){this->min = min;this->max = max;}
void RandomClass::setMax(CRint max){this->max = max;}
void RandomClass::setMin(CRint min){this->min = min;}
void RandomClass::setLimits(CRint min,CRint max){this->min = min;this->max = max;}

int RandomClass::nextInt(){return Random::nextInt(min,max);}		//	get the next random int
float RandomClass::nextFloat(){return Random::nextFloat(min,max);}	//	get the next float
double RandomClass::nextDouble(){return Random::nextDouble(min,max);}//	get the next double
Fixed RandomClass::nextFixed(){return Random::nextFixed(min,max);}
