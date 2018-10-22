#pragma once
#include <cstdlib>
#include <time.h>

class Hero
{
private:
	int mHealth;
public:
	Hero();
	int GetHealth();
};

Hero::Hero()
{
	mHealth = rand() % 100 + 1;
}

int Hero::GetHealth()
{
	return mHealth;
}