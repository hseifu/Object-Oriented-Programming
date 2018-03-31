//Done by Henok Seifu
#include "Hand.h"

Hand::Hand()
{
    m_Cards.reserve(7);
}

Hand::~Hand()  
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    m_Cards.push_back(pCard);
}
 
void Hand::Clear()
{
    //iterate through vector, freeing all memory on the heap
    std::vector<Card*>::iterator iter = m_Cards.begin();
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        delete *iter;
        *iter = 0;
    }
    //clear vector of pointers
    m_Cards.clear();
}

int Hand::GetTotal() const
{
	int total = 0;
    std::vector<Card*>::const_iterator it;//constant card* iterator so that value wont be changed
    bool hasace = false;//flag for checking if ace is inside
    for(it = m_Cards.begin(); it != m_Cards.end(); it ++){//iterate through entire vector and add the rank to total
        Card* temp = *it;
        total += temp->GetValue();
        if(temp->GetValue() == 1){
            hasace = true;//activate flag if it has ace
        }
    }
    //if it has ace and adding 10 more wouldn't reach 21, i.e if not busted, add 10
    if(total + 10 <= 21 && hasace){
        total += 10;
    }
    // to be filled with content

    return total;
}