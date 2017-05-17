#ifndef POS_H
#define POS_H


class Pos
{
    public:
        Pos();
        Pos(int);
        virtual ~Pos();

        int Obtenga(Pos);
        void Ponga(int);

        int elemento;
        Pos *siguiente;
    protected:

    private:
};

#endif // POS_H
