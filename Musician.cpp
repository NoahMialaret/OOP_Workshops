#include "Musician.h"

Musician::Musician()
    :
    experience(0),
    instrument("null")
{}

Musician::Musician(std::string instrument, int experience)
    :
    experience(experience),
    instrument(instrument)
{}

std::string Musician::get_instrument()
{
    return instrument;
}

int Musician::get_experience()
{
    return experience;
}