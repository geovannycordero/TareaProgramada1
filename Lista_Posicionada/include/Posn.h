#ifndef POSN_H
#define POSN_H


class Posn
{
    public:
        Posn();
        Posn(int);
        virtual ~Posn();

        int Obtenga(Posn);
        void Ponga(int);

        int elemento;
        Posn *siguiente;
        Posn *anterior;

    protected:

    private:
};

#endif // POSN_H
