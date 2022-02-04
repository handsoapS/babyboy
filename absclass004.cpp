#include"iostream"
using namespace std;

class Personaje{
    private:
        int ataque,defensa;
    public:
        Personaje(int,int);
        void Imprimir();
        Personaje &setAtaque(int);
        Personaje &setDefensa(int);
        void imprimirdatos();
};

int main(){
    Personaje Scooby(100,80);
    Scooby.Imprimir();
    Scooby.imprimirdatos();
    cout<<"\n***************************************\n\n";
    Personaje Shaggy(150,100);
    Shaggy.imprimirdatos();
    Shaggy.setAtaque(10).setDefensa(1000);
    Shaggy.imprimirdatos();
}

Personaje::Personaje(int ataque,int defensa){
    this->ataque=ataque;
    this->defensa=defensa;
}

void Personaje::Imprimir(){
    cout<<"Ataque = "<<ataque<<endl;
    cout<<"this->ataque = "<<this->ataque<<endl;
    cout<<"(*this).ataque"<<(*this).ataque<<endl;
}

Personaje & Personaje::setAtaque(int ataque){
    this->ataque=ataque;
    return *this;
}

Personaje & Personaje::setDefensa(int defensa){
    this->defensa=defensa;
    return *this;
}

void Personaje::imprimirdatos(){
    cout<<"Ataque = "<<this->ataque<<endl;
    cout<<"Defensa = "<<this->defensa<<endl;
}