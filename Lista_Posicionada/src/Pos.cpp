#include "Pos.h"

Pos::Pos()
{
    elemento = 0;
    siguiente = 0;
}

Pos::~Pos()
{
    //dtor
}
Pos::Pos(int x)
{
    elemento = x;
    siguiente = 0;
}

int Pos::Obtenga(Pos p)
{
    return p.elemento;
}

void Pos::Ponga(int x)
{
    elemento = x;
    siguiente = 0;
}
