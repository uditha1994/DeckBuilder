#pragma once
#include <string>

enum class CardType
{
    Attack,
    Defense,
    Skill
};

class Card
{
public:
    Card(std::string name, CardType type, int cost, int value);

    const std::string &getName() const;
    CardType getType() const;
    int getCost() const;
    int getValue() const;

    void print() const;

private:
    std::string name_;
    CardType type_;
    int cost_;
    int value_;
};