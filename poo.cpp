#include"iostream"
using namespace std;

class persona{
    private:
        string nombre;
        int edad;
    public:
        persona(string,int);
        void mostrar();
};

class docente: public persona{
    private:
        string cod_docente;
        string asignatura;  
        string especialidad;
    public:
        docente(string,string,string,string,int);
        void mostrar_docente();
};

class estudiante: public persona{
    private:
        string cod_estudiante;
        string carrera;
        int notas[4];
    public:
        estudiante(string,string,int,int,int,int,string,int);
        void mostrar_estudiante();
};

int main(){
    persona obj1("Sebastian",18);
    obj1.mostrar();

    cout<<"-----------------------------"<<endl;

    docente obj2("cd001","Programacion","Sistemas","Juan",40);
    obj2.mostrar();
    obj2.mostrar_docente();

    cout<<"-----------------------------"<<endl;

    estudiante obj3("000123","Informatica y sistemas",14,15,16,18,"Sebastian",18);
    obj3.mostrar();
    obj3.mostrar_estudiante();
}

persona::persona(string _nombre,int _edad){
    nombre=_nombre;
    edad=_edad;
}

docente::docente(string _cod,string _curso,string _especialidad,string _nombre,int _edad):persona(_nombre,_edad){
    cod_docente=_cod;
    asignatura=_curso;
    especialidad=_especialidad;
}

estudiante::estudiante(string _cod_estudiante,string _carrera,int _nota1,int _nota2,int _nota3,int _nota4,string _nombre,int _edad):persona(_nombre,_edad){
    cod_estudiante=_cod_estudiante;
    carrera=_carrera;
    notas[0]=_nota1;
    notas[1]=_nota2;
    notas[2]=_nota3;
    notas[3]=_nota4;
}

void estudiante::mostrar_estudiante(){
    cout<<"Codigo Estudiante: "<<cod_estudiante<<endl;
    cout<<"Carrera de estudiante: "<<carrera<<endl;
    for(int i=0;i<4;i++){
        cout<<"Nota "<<"("<<i+1<<"): "<<notas[i]<<endl;
    }
}

void docente::mostrar_docente(){
    cout<<"Codigo Docente: "<<cod_docente<<endl;
    cout<<"Asignatura: "<<asignatura<<endl;
    cout<<"Especialidad: "<<especialidad<<endl;
}

void persona::mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}