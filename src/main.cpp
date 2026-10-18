#include "Card.h"
#include <algorithm>
#include <iostream>
#include <memory>
#include <random>
#include <vector>

int main()
{
    // Build a starter pool of cards using unique_ptr for ownership
    std::vector<std::unique_ptr<Card>> cards;
    cards.push_back(std::make_unique<Card>("Strike", CardType::Attack, 1, 6));
    cards.push_back(std::make_unique<Card>("Heavy Blow", CardType::Attack, 2, 12));
    cards.push_back(std::make_unique<Card>("Shield", CardType::Defense, 1, 5));
    cards.push_back(std::make_unique<Card>("Fortify", CardType::Defense, 2, 10));
    cards.push_back(std::make_unique<Card>("Focus", CardType::Skill, 0, 2));

    // Seeded random number generator (use std::random_device for a truly random seed)
    std::random_device rd;
    std::mt19937 rng(rd());

    std::cout << "=== Before shuffle ===\n";
    for (const auto &card : cards)
    {
        card->print();
    }

    std::shuffle(cards.begin(), cards.end(), rng);

    std::cout << "\n=== After shuffle ===\n";
    for (const auto &card : cards)
    {
        card->print();
    }

    return 0;
}