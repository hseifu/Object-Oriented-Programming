/*
    CH08-320143
    a5_p6.cpp
    Henok Seifu
    hseifu@jacobs-university.de
*/
#include "Deck.h"

Deck::Deck()
{ 
    m_Cards.reserve(52);
    Populate();
}

Deck::~Deck()
{}

void Deck::Populate()
{
    Clear();
    //create standard deck
    for (int s = Card::CLUBS; s <= Card::SPADES; ++s)
    {
        for (int r = Card::ACE; r <= Card::KING; ++r)
        {
            Add(new Card(static_cast<Card::rank>(r),
                         static_cast<Card::suit>(s)));
        }
    }
}

void Deck::Shuffle()
{
    random_shuffle(m_Cards.begin(), m_Cards.end());
}

void Deck::Deal(Hand& aHand)
{
    //add the last element in the cards to the hand
    //note that this passes a reference to the adress of the element
    aHand.Add(m_Cards.back());
    //now resize the cards vector so that the last element will not be accessed
    //by the vector. If pop is used, the element will be deleted thereby we are 
    //unable to access that element even in aHand because aHand has the pointer only
    m_Cards.resize(m_Cards.size()-1);
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{
    std::cout << std::endl;
    //continue to deal a card as long as generic player isn't busted and
    //wants another hit
    while ( !(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting() )
    {
        Deal(aGenericPlayer);
        std::cout << aGenericPlayer << std::endl;
        
        if (aGenericPlayer.IsBusted())
		{
            aGenericPlayer.Bust();
		}
    }
} 
