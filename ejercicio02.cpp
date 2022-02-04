#include"iostream"

class Mamifero
{
public:
    Mamifero():edad(1) { }
    ~Mamifero() { }
    virtual void hablar() const { std::cout <<"Mamifero hablar\n"; }
protected:
    int edad;
};

class Perro : public Mamifero
{
public:
    void hablar() const { std::cout <<"Guauuu\n"; }
};

class Gato : public Mamifero
{
public:
    void hablar() const { std::cout <<"Miauuuu\n"; }
};

class Caballo : public Mamifero
{
public:
    void hablar() const { std::cout <<"Jiiiiii\n"; }
};

class Vaca : public Mamifero
{
    void hablar() const { std::cout <<"Muuuuuuuuuuuuu\n"; }
};

int main()
{
    Mamifero* array[5];
    Mamifero* ptr;
    int elegir, i;
    for(i=0;i<5;i++)
    {
        std::cout <<"(1) Perro (2) Gato (3) caballo (4) vaca:\n ";
        std::cin>>elegir; 
        switch(elegir)
        {
        case 1: 
            ptr = new Perro;
            break;
        case 2: 
            ptr = new Gato;
            break;
        case 3: 
            ptr = new Caballo;
            break;
        case 4: 
            ptr = new Vaca;
            break;
        default: 
            ptr = new Mamifero;
            break;
        }
        array[i]=ptr;
    }
    for(i=0;i<5;i++)
    {
        array[i]->hablar();
    }
    return 0;
}