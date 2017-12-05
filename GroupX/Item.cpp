/*
* GameCharacter.cpp
*
* Version information v0.1
* Authors: <Insert group member names and IDs> of student(s) who write each class
* Date: 24/11/2017
* Description: Implementation for GameCharacter class
* Copyright notice
*/

#include <iostream>
#include "Item.h"



Item::Item() {
}

Item::Item(std::string itemName, int itemValue, float weight) 
	: itemName_{ itemName }, itemValue_{ itemValue }, weight_{ weight } {}


Item::~Item() {
}

void Item::SetItemName(std::string itemName){
	itemName_ = itemName;
}

std::string Item::GetItemName() const {
	return itemName_;
}

void Item::SetItemValue(int itemValue){
	itemValue_ = itemValue;
}

int Item::GetItemValue() const{
	return itemValue_;
}

void Item::SetWeight(float weight){
	weight_ = weight;
}

int Item::GetWeight() const
{
	return weight_;
}
