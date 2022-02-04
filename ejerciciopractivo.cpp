#include"iostream"
using namespace std;
class ClassCarro{
    private:
        int ruedas;
        int ventanas;
        int puertas;
        string color;
        string modelo;
    public:
        ClassCarro(int,int,int,string,string);
        void Imprimir();
};
int main(){
    int r,v,p;
    string co,mo;
    cout<<"Digite las caracteristicas de su automovil: "<<endl;
    cout<<"Cantidad de ruedas: ",cin>>r;
    cout<<"Cantidad de ventanas: ",cin>>v;
    cout<<"Cantidad de puertas: ",cin>>p;
    cout<<"El color: ",cin>>co;
    cout<<"El modelo: ",cin>>mo;
    ClassCarro micarrito(r,v,p,co,mo);
    micarrito.Imprimir();
}
ClassCarro::ClassCarro(int _ruedas,int _ventanas,int _puertas,string _color,string _modelo){
    ruedas = _ruedas;
    ventanas = _ventanas;
    puertas = _puertas;
    color = _color;
    modelo = _modelo;
}
void ClassCarro::Imprimir(){
    cout<<"********************************************"<<endl;
    cout<<"Las caracteristicas de su carro son: \n\n";
    cout<<"\t*Cantidad de ruedas: \t"<<ruedas<<endl;
    cout<<"\t*Cantidad de ventanas: \t"<<ventanas<<endl;
    cout<<"\t*Cantidad de puertas: \t"<<puertas<<endl;
    cout<<"\t*Color: \t\t"<<color<<endl;
    cout<<"\t*Modelo: \t\t"<<modelo<<endl;
}