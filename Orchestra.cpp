#include <string>

#include "Orchestra.h"

// default constructor
Orchestra::Orchestra()
    :
    maxSize(0)
{
    musicians = new Musician[maxSize];
}

// constructor for an orchestra of given size
Orchestra::Orchestra(int size)
    :
    maxSize(size)
{
    musicians = new Musician[size];
}

Orchestra::~Orchestra()
{
    delete[] musicians;
}

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members()
{
    return curSize;
}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument)
{
    for (int i = 0; i < curSize; i++)
    {
        if (musicians[i].get_instrument() == instrument)
        {
            return true;
        }
    }

    return false;
}

// returns the array of members of the orchestra
Musician* Orchestra::get_members()
{
    return musicians;
}

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician)
{
    if (curSize >= maxSize)
    {
        return false;
    }

    musicians[curSize] = new_musician;
    curSize++;

    return true;
}