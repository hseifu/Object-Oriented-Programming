/*
    CH08-320143
    a5_p6.cpp
    Henok Seifu
    hseifu@jacobs-university.de
*/
#include "Card.h"
Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{} 

int Card::GetValue() const
{
	int value;
    if(!m_IsFaceUp){
        value = 0;
    }
    else{
        if(m_Rank == JACK || m_Rank == QUEEN || m_Rank == KING){
            value = 10;
        }
        else{
            value = rank(m_Rank);
        }
    }
    //only if face is up
    //and also add value for jack queens and kings

	// to be filled with content

	return value;
}

void Card::Flip()
{
    m_IsFaceUp = !(m_IsFaceUp);
}