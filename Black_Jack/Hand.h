/*
    CH08-320143
    a5_p6.cpp
    Henok Seifu
    hseifu@jacobs-university.de
*/
#ifndef _HAND_
#define _HAND_

#include "Card.h"
#include <vector>
#include <algorithm>

class Hand
{
public:
    Hand();
    
    virtual ~Hand();

    //adds a card to the hand
    void Add(Card* pCard);
 
    //clears hand of all cards
    void Clear();
 
    //gets hand total value, intelligently treats aces as 1 or 11
    int GetTotal() const;

protected:
    std::vector<Card*> m_Cards;
};

#endif