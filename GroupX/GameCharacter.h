/*
* GameCharacter.h
*
* Version information v0.1
* Authors: <Insert group member names and IDs> of student(s) who write each class
* Date: 24/11/2017
* Description: header file for GameCharacter class
* Copyright notice
*/

#include <iostream>
#include <vector>
#include "Item.h"


#pragma once
class GameCharacter
{
private:
	std::string characterName_;
	float health_;
	float weightLimit_;
	int equippedWeapon_;
	int equippedArmour_;
	//std::vector<Weapon> weapons_;
	//std::vector<Armour> armour_;
	int food_;
	//CharacterState state_;

public:
	GameCharacter();
	GameCharacter(std::string characterName, float health, float weightLimit, int equippedWeapon, int equippedArmour, int food);

	~GameCharacter();

	void SetCharacterName(std::string characterName);
	std::string GetCharacterName() const;

	void SetHealth(float health);
	float GetHealth() const;

	void SetWeightLimit(float weightLimit);
	float GetWeightLimit() const;

	void SetEquippedWeapon(int equippedWeapon);
	int GetEquippedWeapon() const;

	void SetEquippedArmour(int equippedArmour);
	int GetEquippedArmour() const;

	//void SetWeapons(std::vector<Weapon> weapons);
	//std::vector<Weapon> GetWeapons() const;

	//void SetArmour(std::vector<Armour> armour);
	//std::vector<Armour> GetArmour() const;

	void SetFood(int food);
	int GetFood() const;

	//void GetState(CharacterState state);
	//CharacterState GetState() const;

	virtual bool Attack(GameCharacter &character);

	void Defend(int armour);

	void Walk();

	void Run();

	virtual void Sleep();

	Weapon GetWeapon(int index);

	Armour GetArmour(int index);

	bool PickUpWeapon(Weapon &weapon);

	bool PickUpArmour(Armour &armour);

	void DropItem(Armour &item);

	void DropItem(Weapon &item);

	bool EquipWeapon(int weapon);

	CharacterState GetState();

	void AddFood(int amount);

	void Eat();


};

