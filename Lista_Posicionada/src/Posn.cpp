#include "Posn.h"

Posn::Posn()
{
    //ctor
    elemento = 0;
    siguiente = 0;
    anterior = 0;
}

Posn::~Posn()
{
    //dtor
}
Posn::Posn(int x)
{
    elemento = x;
    siguiente = 0;
    anterior = 0;
}

int Posn::Obtenga(Posn p)
{
    return p.elemento;
}

void Posn::Ponga(int x)
{
    elemento = x;
}

