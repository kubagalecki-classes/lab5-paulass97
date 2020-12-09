#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{  
    // Twoja implementacja tutaj
    vector<char> wektor;
   
    for(auto rit = people.rbegin(); rit != people.rend(); rit++)
    {
    rit->birthday();
    if(rit->isMonster())
        {
    wektor.push_back('n');
        }
    else
        {
        wektor.push_back('y');
        }
    } 
    return {wektor};
}
