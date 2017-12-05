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


#pragma once
class Item
{
private:
	std::string itemName_;
	int itemValue_;
	float weight_;

public:
	Item();
	Item(std::string itemName, int itemValue, float weight);
	~Item();

	void SetItemName(std::string itemName);
	std::string GetItemName() const;

	void SetItemValue(int itemValue);
	int GetItemValue() const;

	void SetWeight(float weight);
	int GetWeight() const;
};