#include "ListaPosicionada_1.h"

ListaPosicionada_1::ListaPosicionada_1()
{
    //ctor
    primero = new Pos();
    ultimo = 0;
}

ListaPosicionada_1::~ListaPosicionada_1()
{
    //dtor
}

void ListaPosicionada_1::Iniciar()
{
    primero = new Pos();
    ultimo = 0;
}

void ListaPosicionada_1::Destruir()
{
    if(ultimo == 0){
        delete (primero);
    }
    else{
        //elliminar todas las posiciones de la lista
        post p = primero;
        while(p != ultimo){
            post p = primero;
            primero = primero->siguiente;
            delete(p);
        }
    }
    nElementos = 0;
}

bool ListaPosicionada_1::Vacia()
{
    return nElementos == 0 ? true : false;
}

void ListaPosicionada_1::Vaciar()
{
    if(nElementos != 0){
        post p = ultimo;
        while(p != primero){
            delete (p);
        }
    }
    nElementos = 0;
}

void ListaPosicionada_1::Insertar(int x, post p)
{
    bool continuar = true;
    post cnt = primero;
    while (cnt != ultimo && continuar)
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
        ++nElementos;
        post t = primero;
        while(t->siguiente != p){
            t = t->siguiente;
        }
        post nuevo = new Pos(x);
        nuevo->siguiente = p;
        t->siguiente = nuevo;
    }
}

void ListaPosicionada_1::AgregarAlFinal(int x)
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
            post nuevo = new Pos(x);
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
        }
    }
}

void ListaPosicionada_1::Borrar(post p)
{
    post t = primero;
    while(t->siguiente != p)
    {
        t = t->siguiente;
    }
    t->siguiente = p->siguiente;
    delete(p);
}

void ListaPosicionada_1::Modificar(post p, int x)
{
    p->elemento = x;
}

post ListaPosicionada_1::Primera()
{
    return primero;
}

post ListaPosicionada_1::Ultima()
{
    return ultimo;
}

post ListaPosicionada_1::Siguente(post p)
{
    return p->siguiente;
}

post ListaPosicionada_1::Anterior(post p)
{
    post t = primero;
    while(t->siguiente != p)
    {
        t = t->siguiente;
    }
    return t;
}

int ListaPosicionada_1::Recuperar(post p)
{
    return p->elemento;
}

int ListaPosicionada_1::NumElem()
{
    return nElementos;
}

void ListaPosicionada_1::Intercambiar(post p1, post p2)
{
    post tmp = p1->siguiente;
    p1->siguiente = p2->siguiente;
    p2->siguiente = tmp;

    post tmp_uno = primero;
    while(tmp_uno->siguiente != p1)
    {
        tmp_uno = tmp_uno->siguiente;
    }
    post tmp_dos = primero;
    while(tmp_dos->siguiente != p2)
    {
        tmp_dos = tmp_dos->siguiente;
    }

    tmp = tmp_uno;
    tmp_uno->siguiente = p2;
    tmp_dos->siguiente = tmp->siguiente;
}

void ListaPosicionada_1::Listar()
{
    post p = primero;
    while(p < ultimo){
        std::cout << p->elemento << std::endl;
        p = p->siguiente;
    }
    std::cout << p->elemento << std::endl;
}
