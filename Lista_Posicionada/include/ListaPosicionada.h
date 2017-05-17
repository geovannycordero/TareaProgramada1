#ifndef LISTAPOSICIONADA_H
#define LISTAPOSICIONADA_H

//#include <sstream>
#include <iostream>

//using namespace std;

typedef int post;


class ListaPosicionada
{
    public:
        ListaPosicionada();
        virtual ~ListaPosicionada();

        //void post();
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


        post primero;
        post ultimo_lleno;
        int nElementos;

    protected:


    private:
        post lista[30];
};

#endif // LISTAPOSICIONADA_H
