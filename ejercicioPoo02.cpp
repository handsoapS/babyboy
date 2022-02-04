#include"iostream";
using namespace std;

class claseVehiculo{
        private:
            string tipoVehiculo;
            string nroPlaca;
            string color;
            string nombrePropietario;
        public:
            claseVehiculo(string,string,string,string);
            void mostrarVehiculo();
};

int main(){
    claseVehiculo toyota("Camioneta","F5U-597","Rojo","Sebastian");
    toyota.mostrarVehiculo();
}

claseVehiculo::claseVehiculo(string _tipoVehiculo,string _nroPlaca,string _color,string _nombrePropietario){
    tipoVehiculo=_tipoVehiculo;
    nroPlaca=_nroPlaca;
    color=_color;
    nombrePropietario=_nombrePropietario;
}

void claseVehiculo::mostrarVehiculo(){
    cout<<"Tipo de vehiculo: "<<tipoVehiculo<<endl;
    cout<<"Numero de placa: "<<nroPlaca<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Nombre del propietario: "<<nombrePropietario<<endl;
}