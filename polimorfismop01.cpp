#include"iostream"
using namespace std;

class Insecto{
    protected:
        string Nombre;
        int NumPatas;
        float TamCabeza,TamTorax,TamAbdomen;
    public:
        Insecto(string,int,float,float,float);
        virtual void Imprime();
        virtual void Comiendo();
};

class Mosca: public Insecto{
    private:
        int NumAlas;
    public:
        Mosca(string,int,float,float,float,int);
        void Imprime();
        void Comiendo();
};

int main(){
    
    Insecto obj3("Arania",8,0.3,0.4,0.2);
    Insecto *obj2[5];
    
    obj2[0] = new Mosca("Mosca obrera",6,0.1,0.12,0.11,2);
    obj2[0] -> Imprime();
    obj2[0] -> Comiendo();

    cout<<"\n***********************\n";

    obj3.Imprime();
    obj3.Comiendo();

    //Insecto obj1("Mosca",6,0.1,0.12,0.11);
    //obj1.Imprime();
}

Insecto::Insecto(string _Nombre,int _NumPatas,float _TamCabeza,float _TamTorax,float _TamAbdomen){
    Nombre=_Nombre;
    NumPatas=_NumPatas;
    TamCabeza=_TamCabeza;
    TamTorax=_TamTorax;
    TamAbdomen=_TamAbdomen;
}

void Insecto::Imprime(){
    cout<<"INSECTO"<<endl;
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Numero de patas: "<<NumPatas<<endl;
    cout<<"Tamanio de cabeza: "<<TamCabeza<<endl;
    cout<<"Tamanio de torax: "<<TamTorax<<endl;
    cout<<"Tamanio de abdomen: "<<TamAbdomen<<endl;
}

Mosca::Mosca(string _Nombre,int _NumPatas,float _TamCabeza,float _TamTorax,float _TamAbdomen,int _NumAlas):Insecto(_Nombre,_NumPatas,_TamCabeza,_TamTorax,_TamAbdomen){
    NumAlas=_NumAlas;
}

void Mosca::Imprime(){
    Insecto::Imprime();
    cout<<"Numero de alas: "<<NumAlas<<endl;
}

void Insecto::Comiendo(){
    cout<<"El insecto esta comiendo..."<<endl;
}

void Mosca::Comiendo(){
    cout<<"La mosca esta comiendo basura..."<<endl;
}