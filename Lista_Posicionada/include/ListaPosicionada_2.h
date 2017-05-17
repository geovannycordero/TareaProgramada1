#ifndef LISTAPOSICIONADA_2_H
#define LISTAPOSICIONADA_2_H


#include "Posn.h"

#include <iostream>


typedef Posn *post;

class ListaPosicionada_2
{
    public:
        ListaPosicionada_2();
        virtual ~ListaPosicionada_2();

        void Iniciar();
        void Destruir();
        bool Vacia();
        void Vaciar();
        void Insertar(int,post);
        void AgregarAlFinal(int);
        void Borrar(post);
        void Modificar(post,int);
        post Primera();
        post Ultima();
        post Siguente(post);
        post Anterior(post);
        int Recuperar(post);
        int NumElem();
        void Intercambiar(post,post);
        void Listar();

        post posicion;
        post primero;
        post ultimo;
        int nElementos;

    protected:


    private:
        post lista[30];
};

#endif // LISTAPOSICIONADA_2_H
