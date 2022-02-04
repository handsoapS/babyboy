#include"iostream"
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string,int);
        void presentar();
};

class Empleado: public Persona{
    private:
        int sueldo;
        string turnoDeTrabajo;
    public: 
        Empleado(int,string,string,int);
        void presentarEmpleado();
};

class Estudiante: public Persona{
    private:
        string gradoEscolar;
        char seccionEscolar;
        string condicionAcademica;
    public:
        Estudiante(string,string,int);
        void presentarEstudiante();
};

class Universitario: public Estudiante{
    private:
        string carreraUniversitaria;
        string anioDeEstudio;
        string cicloDeEstudio;
    public:
        Universitario(string,string,string,string,int);
        void presentarUniversitario();
};

class Pasante: public Universitario, public Empleado{
    public:
        Pasante(string,string,string,string,int,int,string);
};

int main(){
    system("cls");
    Pasante persona1("Informatica y Sistemas","Primer","Muy buena","Sebastian",18,1400,"Maniana");

    persona1.Pasante::Empleado::presentar();
    persona1.presentarUniversitario();
    persona1.presentarEstudiante();
    persona1.presentarEmpleado();
    
}

Persona::Persona(string _nombre,int _edad){
    nombre=_nombre;
    edad=_edad;
}

Empleado::Empleado(int _sueldo,string _turno,string _nombre,int _edad):Persona(_nombre,_edad){
    sueldo=_sueldo;
    turnoDeTrabajo=_turno;
}

Estudiante::Estudiante(string _condicion,string _nombre,int _edad):Persona(_nombre,_edad){
    condicionAcademica=_condicion;
}

Universitario::Universitario(string _carrera,string _anio,string _condicion,string _nombre,int _edad):Estudiante(_condicion,_nombre,_edad){
    carreraUniversitaria=_carrera;
    anioDeEstudio=_anio;
}

Pasante::Pasante(string _carrera,string _anio,string _condicion,string _nombre,int _edad,int _sueldo,string _turno)
    :Universitario(_carrera,_anio,_condicion,_nombre,_edad),Empleado(_sueldo,_turno,_nombre,_edad){}


void Persona::presentar(){
    cout<<"Mi nombre es: "<<nombre<<endl;
    cout<<"Tengo "<<edad<<" anios"<<endl;
}

void Empleado::presentarEmpleado(){
    cout<<"Tengo un sueldo de: "<<sueldo<<" S/."<<endl;
    cout<<"Trabajo en el turno: "<<turnoDeTrabajo<<endl;
}

void Estudiante::presentarEstudiante(){
    cout<<"En el colegio siempre he tenido una condicion academica: "<<condicionAcademica<<endl;
}

void Universitario::presentarUniversitario(){
    cout<<"Estoy estudiando la carrera de: "<<carreraUniversitaria<<endl;
    cout<<"Y estoy en el: "<<anioDeEstudio<<" anio de estudio."<<endl;
}