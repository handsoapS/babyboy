#include"iostream"
using namespace std;

class Ejemplo{
    private:
        int Atrib1,Atrib2;
    public:
        Ejemplo(int,int);
        void Imprime();
        friend int Suma(Ejemplo);
};

int main(){
    Ejemplo obj1(5,9);
    int suma=5;
    obj1.Imprime();
    suma=Suma(obj1);
    cout<<endl<<"La suma de los atributos es: "<<suma<<endl;
}

Ejemplo::Ejemplo(int a,int b){
    Atrib1=a;
    Atrib2=b;
}

void Ejemplo::Imprime(){
    cout<<"Atributo 01: "<<Atrib1<<endl;
    cout<<"Atributo 02: "<<Atrib2<<endl;
}

int Suma(Ejemplo valor){
    return valor.Atrib1+valor.Atrib2;
}