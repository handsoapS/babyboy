#include"iostream"
using namespace std;

class claseCalculadora{
    private:
        float nro01,nro02;
    public:
        claseCalculadora(float,float);
        bool comprobarDivision();
        void sumar();
        void dividir();
};

int main(){
    float x,y;
    cout<<"Digite los numeros:"<<endl;
    cout<<"Numero 01: ",cin>>x;
    cout<<"Numero 02: ",cin>>y,cout<<endl;
    claseCalculadora Nexus(x,y);
    Nexus.sumar();
    Nexus.dividir();
}

claseCalculadora::claseCalculadora(float _nro01, float _nro02){
    nro01 = _nro01;
    nro02 = _nro02;
}

bool claseCalculadora::comprobarDivision(){
    if(nro02==0) return false;
    else return true;
}
void claseCalculadora::sumar(){
    cout<<" --> La suma de los dos numeros es: "<<nro01+nro02<<endl;
}
void claseCalculadora::dividir(){
    if(claseCalculadora::comprobarDivision()==true) cout<<" --> El resultado de la division es: "<<nro01/nro02<<endl;
    else cout<<" --> No es posible realizar la division."<<endl;
}