#include "Card.h"
#include <iostream>

Card::Card(std::string name, CardType type, int cost, int value)
    : name_(std::move(name)), type_(type), cost_(cost), value_(value) {}

const std::string &Card::getName() const { return name_; }
CardType Card::getType() const { return type_; }
int Card::getCost() const { return cost_; }
int Card::getValue() const { return value_; }

void Card::print() const
{
    std::string typeStr;
    switch (type_)
    {
    case CardType::Attack:
        typeStr = "Attack";
        break;
    case CardType::Defense:
        typeStr = "Defense";
        break;
    case CardType::Skill:
        typeStr = "Skill";
        break;
    }

    std::cout << "[" << cost_ << "] " << name_
              << " (" << typeStr << ") - Value: " << value_ << '\n';
}