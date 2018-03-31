/*
    CH08-320143
    a5_p6.cpp
    Henok Seifu
    hseifu@jacobs-university.de
*/
#ifndef _HOUSE_
#define _HOUSE_
#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
    House(const std::string& name = "House");

    virtual ~House();

    //indicates whether house is hitting - will always hit on 16 or less
    virtual bool IsHitting() const;

    //flips over first card
    void FlipFirstCard();
};
#endif