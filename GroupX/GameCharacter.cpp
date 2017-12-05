/*
* GameCharacter.cpp
*
* Version information v0.1
* Authors: <Insert group member names and IDs> of student(s) who write each class
* Date: 24/11/2017
* Description: Implementation for GameCharacter class
* Copyright notice
*/

#include "GameCharacter.h"



GameCharacter::GameCharacter(){
}

GameCharacter::GameCharacter(std::string characterName, float health, float weightLimit, int equippedWeapon, int equippedArmour, int food)
	: characterName_{ characterName }, health_{ health }, weightLimit_{ weightLimit }, equippedWeapon_{ equippedWeapon }, equippedArmour_{ equippedArmour }, food_{ food } {}

GameCharacter::~GameCharacter(){
}

void GameCharacter::SetCharacterName(std::string characterName) {
	characterName_ = characterName;
}
std::string GameCharacter::GetCharacterName() const {
	return characterName_;
}

void GameCharacter::SetHealth(float health) {
	health_ = health;
}
float GameCharacter::GetHealth() const {
	return health_;
}

void GameCharacter::SetWeightLimit(float weightLimit) {
	weightLimit_ = weightLimit;
}
float GameCharacter::GetWeightLimit() const {
	return weightLimit_;
}

void GameCharacter::SetEquippedWeapon(int equippedWeapon) {
	equippedWeapon_ = equippedWeapon;
}
int GameCharacter::GetEquippedWeapon() const {
	return equippedWeapon_;
}

void GameCharacter::SetEquippedArmour(int equippedArmour) {
	equippedArmour_ = equippedArmour;
}
int GameCharacter::GetEquippedArmour() const {
	return equippedArmour_;
}

//void GameCharacter::SetWeapons(std::vector<Weapon> weapons){
//std::vector<Weapon> GameCharacter::GetWeapons() const;

//void GameCharacter::SetArmour(std::vector<Armour> armour);
//std::vector<Armour> GameCharacter::GetArmour() const;

void GameCharacter::SetFood(int food) {
	food_ = food;
}
int GameCharacter::GetFood() const {
	return food_;
}

bool GameCharacter::Attack(GameCharacter & character)
{
	return false;
}

void GameCharacter::Defend(int armour)
{
}

void GameCharacter::Walk()
{
}

void GameCharacter::Run()
{
}

void GameCharacter::Sleep()
{
}

Weapon GameCharacter::GetWeapon(int index)
{
	return Weapon();
}

Armour GameCharacter::GetArmour(int index)
{
	return Armour();
}

bool GameCharacter::PickUpWeapon(Weapon & weapon)
{
	return false;
}

bool GameCharacter::PickUpArmour(Armour & armour)
{
	return false;
}

void GameCharacter::DropItem(Armour & item)
{
}

void GameCharacter::DropItem(Weapon & item)
{
}

bool GameCharacter::EquipWeapon(int weapon)
{
	return false;
}

CharacterState GameCharacter::GetState()
{
	return CharacterState();
}

void GameCharacter::AddFood(int amount)
{
}

void GameCharacter::Eat()
{
}

//void GetState(CharacterState state);
//CharacterState GetState() const;