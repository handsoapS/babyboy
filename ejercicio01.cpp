#include"iostream"

class Mamifero
{
public:
    Mamifero():edad(1) { std::cout << "Constructor Mamifero ...\n"; }
    ~Mamifero() { std::cout << "Destructor Mamifero ...\n"; }
    void mover() const { std::cout << "Mamifero se mueve un paso\n"; }
    virtual void hablar() const { std::cout <<"Mamifero habla\n"; }
protected:
    int edad;
};

class Perro : public Mamifero 
{
public:
    Perro() { std::cout <<"Constructor Perro ...\n"; }
    ~Perro() { std::cout <<"Destructor Perro ...\n"; }
    void moverColar() { std::cout <<"Moviendo cola ...\n"; }
    void hablar() const { std::cout << "¡Guauuu!\n"; }
    void mover() const { std::cout << "Perro se mueve 5 pasos ...\n"; }
};

int main()
{
    Mamifero *pPerro=new Perro;
    pPerro->mover();
    pPerro->hablar();
    return 0;
}