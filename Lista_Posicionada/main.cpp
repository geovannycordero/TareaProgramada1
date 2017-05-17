#include <iostream>
//#include "ListaPosicionada.h"
//#include "ListaPosicionada_1.h"
#include "ListaPosicionada_2.h"

using namespace std;

int main()
{
    ListaPosicionada_2 l;
    post p = new Posn(1);
    l.Iniciar();
    l.AgregarAlFinal(99);
    l.AgregarAlFinal(23);
//    cout << l.Primera()->siguiente->elemento << endl;
    l.AgregarAlFinal(4099);
    l.Insertar(233,p);
//    cout << "Anterior al ultimo:  " << l.Anterior(l.Ultima())->elemento << endl;
    l.Listar();

    cout << "Fin de la prueba!" << endl;
    return 0;
}
