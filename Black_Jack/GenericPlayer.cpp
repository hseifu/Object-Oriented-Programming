/*
    CH08-320143
    a5_p6.cpp
    Henok Seifu
    hseifu@jacobs-university.de
*/
#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(const std::string& name): 
    m_Name(name)
{}

GenericPlayer::~GenericPlayer()  
{}

bool GenericPlayer::IsBusted() const
{ 
    return (GetTotal() > 21);
}

void GenericPlayer::Bust() const
{
    std::cout << m_Name << " busts.\n";
}