#include <iostream>

using namespace std;

int main() {

    float cuota,inicial,costo;
    int opc,opc2;

    cout << "Inserte el Costo del Curso en Bsf Aqui:  ";
    cin >> costo;
    
    cout<<"Presione (1) si desea pagar cuotas iguales desde el primer mes. Esto esta sujeto a un interes (30%)"<<endl;
    cout<<"Presione (2) si desea pagar un cuota inicial(20%), y pagar la diferencia en cuotas n"<<endl;
    cin>>opc;

    if(opc==1){
        costo=costo*130/100;
        cuota=costo/24;
        cout<<"El monto de las cuotas para los 24 meses es de: "<<cuota<<endl;
    }
    else{
        cout<<"¿En cuantos meses desea pagar el curso? Max:24 meses "<<endl;cin>>opc2;
        inicial=costo*20/100;
        cuota=(costo-inicial)/opc2;
        cout << "La inicial a pagar es de Bsf " << inicial << endl;
        cout << "El monto de las cuotas es de Bsf para los " <<opc2<<" meses es de: "<<cuota << endl;
    }
   
    return 0;

}
