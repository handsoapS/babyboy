#include"iostream"
using namespace std;

class Triangulo{
    private:
        double base,altura;
    public:
        double area();
        Triangulo &datosTriangulo(double,double);
        Triangulo &visualizar();
};

int main(){
    Triangulo obj1;
    obj1.datosTriangulo(5,10).visualizar();
}

double Triangulo::area(){
    return (this->base*this->altura)/2.0;
}

Triangulo & Triangulo::datosTriangulo(double base,double altura){
    this->base=base;
    this->altura=altura;
    return *this;
}

Triangulo & Triangulo::visualizar(){
    cout<<"Base = "<<this->base<<endl;
    cout<<"Altura = "<<this->altura<<endl;
    return *this;
}