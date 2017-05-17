#include "ListaPosicionada.h"

ListaPosicionada::ListaPosicionada()
{
    nElementos=0;
    ultimo_lleno=0;
    primero=0;
}

ListaPosicionada::~ListaPosicionada()
{
    nElementos=0;
    ultimo_lleno=0;
    primero=0;
}

void ListaPosicionada::Iniciar()
{
    //lista[30];
    nElementos=0;
    ultimo_lleno=0;
    primero=0;
}

void ListaPosicionada::Destruir()
{
    nElementos=0;
    ultimo_lleno=0;
    primero=0;
}

bool ListaPosicionada::Vacia()
{
    return nElementos == 0 ? true : false;
}

void ListaPosicionada::Vaciar()
{
    nElementos=0;
    ultimo_lleno=0;
    primero=0;
}

void ListaPosicionada::Insertar(int x, post p)
{
//    if (ultimo_lleno == 0)
//    {
//        lista[primero] = x;
//        ++nElementos;
//        ++ultimo_lleno;
//    }
//    else
//    {
    bool continuar = true;
    post cnt = primero;
    while (cnt != ultimo_lleno && continuar)
    {
        if (x == lista[cnt])
        {
            continuar = false;
        }
        else
        {
            ++cnt;
        }
    }
    if (continuar)
    {
        ++nElementos;
        ++ultimo_lleno;
        post cnt = ultimo_lleno;
        while (cnt > p)
        {
            lista[cnt] = lista[cnt - 1];
            --cnt;
        }
        lista[cnt] = x;
    }
//    }
}

void ListaPosicionada::AgregarAlFinal(int x)
{
    if (ultimo_lleno == 0)
    {
        lista[primero] = x;
        ++nElementos;
        ++ultimo_lleno;
    }
    else
    {
        bool continuar = true;
        post cnt = primero;
        while (cnt != ultimo_lleno && continuar)
        {
            if (x == lista[cnt])
            {
                continuar = false;
            }
            else
            {
                ++cnt;
            }
        }
        if (continuar)
        {

            lista[ultimo_lleno] = x;
            ++nElementos;
            ++ultimo_lleno;

        }
    }
}


void ListaPosicionada::Borrar(post p)
{
    while(p != ultimo_lleno)
    {
        lista[p] = lista[p+1];
        ++p;
    }
    --nElementos;
}

void ListaPosicionada::Modificar(post p, int x)
{
    lista[p] = x;
}

post ListaPosicionada::Primera()
{
    return lista[primero];
}

post ListaPosicionada::Ultima()
{
    return lista[ultimo_lleno];
}

post ListaPosicionada::Siguente(post p)
{
    return lista[p+1];
}

post ListaPosicionada::Anterior(post p)
{
    return lista[p-1];
}

int ListaPosicionada::Recuperar(post p)
{
    return lista[p];
}

int ListaPosicionada::NumElem()
{
    return nElementos;
}

void ListaPosicionada::Intercambiar(post p1, post p2)
{
    post t = lista[p1];
    lista[p1] = lista[p2];
    lista[p2] = lista[t];
}

void ListaPosicionada::Listar()
{
    post p = primero;
    while(p < ultimo_lleno){
        std::cout << lista[p] << std::endl;
        ++p;
    }
}
