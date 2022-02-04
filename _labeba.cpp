#include"iostream"
using namespace std;

class CHOCOLATADA{
    public:
        int INGRESO();
};

int main(){
    CHOCOLATADA opcion;
    opcion.INGRESO();
}

int CHOCOLATADA::INGRESO(){
    string nombre;
    cout<<"Ingrese su nombre: ";cin>>nombre;
    if(nombre=="Sideral"){
        cout<<"Ingresas mi king";
    }
    else{
        if(nombre=="Samir"){
            cout<<"Vete, no vuelvas"<<endl;
            return main();
        }
        else{
            cout<<"Lo lamento mi king, no puedes entrar"<<endl;
            return main();
        }
    }
}

