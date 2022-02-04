#include"iostream"
using namespace std;

class Persona{
    protected:
        string nombre;
        int edad;
    public:
        Persona(string,int);
        void presentarse();
};

class Empleado: public Persona{
    private:
        float salario;
        string cargolaboral;
    public:
        Empleado(float,string,string,int);
        void presentarseempleado();
};

int main(){
    Empleado persona1(1400,"Asistente","Sebastian",18);
    persona1.presentarse();
    persona1.presentarseempleado();
}

Persona::Persona(string _nombre,int _edad){
    nombre=_nombre;
    edad=_edad;
}

Empleado::Empleado(float _salario,string _cargo,string _nombre,int _edad):Persona(_nombre,_edad){
    salario=_salario;
    cargolaboral=_cargo;
}

void Persona::presentarse(){
    cout<<"Mi nombre es: "<<nombre<<endl;
    cout<<"Tengo: "<<edad<<" anios"<<endl;
}
void Empleado::presentarseempleado(){
    cout<<"Mi salario es de: "<<salario<<endl;
    cout<<"Y trabajo como: "<<cargolaboral<<endl;
}