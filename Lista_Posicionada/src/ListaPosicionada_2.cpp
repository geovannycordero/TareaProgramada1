#include "ListaPosicionada_2.h"

ListaPosicionada_2::ListaPosicionada_2()
{
    //ctor
    primero = new Posn();
    ultimo = 0;
}

ListaPosicionada_2::~ListaPosicionada_2()
{
    //dtor
}

void ListaPosicionada_2::Iniciar()
{
    primero = new Posn();
    ultimo = 0;
}

void ListaPosicionada_2::Destruir()
{
    if(ultimo == 0){
        delete (primero);
    }
    else{
        //elliminar todas las posiciones de la lista
        post p = primero;
        while(p != 0){
            post p = primero;
            primero = primero->siguiente;
            delete(p);
        }
    }
    nElementos = 0;
}

bool ListaPosicionada_2::Vacia()
{
    return nElementos == 0 ? true : false;
}

void ListaPosicionada_2::Vaciar()
{
    if(ultimo != 0){
        post p = primero;
        while(p != 0){
            post p = primero;
            primero = primero->siguiente;
            delete(p);
        }
    }
    primero = new Posn();
    nElementos = 0;
}

void ListaPosicionada_2::Insertar(int x, post p)
{
        bool continuar = true;
        post cnt = primero;
        while (cnt != 0 && continuar)
        {
            if (x == cnt->elemento)
            {
                continuar = false;
            }
            else
            {
                cnt = cnt->siguiente;
            }
        }
        if (continuar)
        {
            post nuevo = new Posn(x);
            nuevo->siguiente = p->siguiente;
            (p->siguiente)->anterior = p;
            nuevo->anterior = p;
            p->siguiente = nuevo;

        }
}

void ListaPosicionada_2::AgregarAlFinal(int x)
{
    if (ultimo == 0)
    {
        primero->elemento = x;
        ++nElementos;
        ultimo = primero;
    }
    else
    {
        bool continuar = true;
        post cnt = primero;
        while (cnt != 0 && continuar)
        {
            if (x == cnt->elemento)
            {
                continuar = false;
            }
            else
            {
                cnt = cnt->siguiente;
            }
        }
        if (continuar)
        {
            post nuevo = new Posn(x);
            nuevo->anterior = ultimo;
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
        }
    }
}

void ListaPosicionada_2::Borrar(post p)
{
    (p->siguiente)->anterior = p->anterior;
    (p->anterior)->siguiente = p->siguiente;
}

void ListaPosicionada_2::Modificar(post p, int x)
{
    p->elemento = x;
}

post ListaPosicionada_2::Primera()
{
    return primero;
}

post ListaPosicionada_2::Ultima()
{
    return ultimo;
}

post ListaPosicionada_2::Siguente(post p)
{
    return p->siguiente;
}

post ListaPosicionada_2::Anterior(post p)
{
    return p->anterior;
}

int ListaPosicionada_2::Recuperar(post p)
{
    return p->elemento;
}

int ListaPosicionada_2::NumElem()
{
    return nElementos;
}

void ListaPosicionada_2::Intercambiar(post p1, post p2)
{
    /* */
    post temp = p1;

    (p1->anterior)->siguiente = (p2->anterior)->siguiente;
    p1->anterior = p2->anterior;
    (p1->siguiente)->anterior = (p2->siguiente)->anterior;
    p1->siguiente = p2->siguiente;

    (p2->anterior)->siguiente = (temp->anterior)->siguiente;
    p2->anterior = temp->anterior;
    (p2->siguiente)->anterior = (temp->siguiente)->anterior;
    p2->siguiente = temp->siguiente;
}

void ListaPosicionada_2::Listar()
{
    post p = primero;
    while(p < ultimo){
        std::cout << p->elemento << std::endl;
        p = p->siguiente;
    }
    std::cout << p->elemento << std::endl;
}
