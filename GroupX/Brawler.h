#pragma once
#include <iostream>
#include <vector>
#include "Item.h"
#include "GameCharacter.h"

class Brawler :  public GameCharacter
{
private:
	int punchDamage_;
	int strength_;
	


public:
	Brawler();
	Brawler(int punchDamage, int strength);
	~Brawler();

	void SetPunchDamage(int punchDamage);
	int GetPunchDamage() const;

	void SetStrength(int strength);
	int GetStrength() const;

	virtual bool Attack(GameCharacter &character);


};
