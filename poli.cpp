#include<iostream>

using namespace std;

class persona{
    private:    // atributos
        string nombre;
        int edad;
        void rastrearID();
    public:     // metodos
        void buscar_persona_ubicacion();
        persona(string,int);
        virtual void mostrar();
};

class estudiante: public persona{
    private:
        float promedio;
    public:
        estudiante(string,int,float);
        void mostrar();
};

int main(){
    estudiante obj01("Maria",16,18.5);
    obj01.mostrar();
}

persona::persona(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}

void persona::mostrar(){
    cout<<"Nombre:  "<<nombre<<endl;
    cout<<"Edad:    "<<edad<<endl;
}

estudiante::estudiante(string _nombre,int _edad,float _promedio):persona(_nombre,_edad){
    promedio=_promedio;
}

void estudiante::mostrar(){
    persona::mostrar();
    cout<<"Promedio: "<<promedio<<endl;
}