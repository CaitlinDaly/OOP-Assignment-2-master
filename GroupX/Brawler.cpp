
#include "Brawler.h"




Brawler::Brawler() {
}

Brawler::Brawler(int punchDamage, int strength)
	: punchDamage_{ punchDamage }, strength_{ strength } {}


Brawler::~Brawler() {
}

void Brawler::SetPunchDamage(int punchDamage) {
	punchDamage_ = punchDamage;
}

int Brawler::GetPunchDamage() const {
	return punchDamage_;
}

void Brawler::SetStrength(int strength) {
	strength_ = strength;
}

int Brawler::GetStrength() const {
	return strength_;
}

bool Brawler::Attack(GameCharacter &character) {
	if (character.GetHealth <= 10) {

	}
}



