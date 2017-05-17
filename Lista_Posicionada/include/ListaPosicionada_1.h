#ifndef ListaPosicionada_1_1_H
#define ListaPosicionada_1_1_H

#include "Pos.h"

#include <iostream>


typedef Pos *post;

class ListaPosicionada_1
{
    public:
        ListaPosicionada_1();
        virtual ~ListaPosicionada_1();

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


#endif // ListaPosicionada_1_1_H
