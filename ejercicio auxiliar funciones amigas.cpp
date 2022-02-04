#include"iostream"
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona();
        void setPersona();
        void getPersona();
        friend int mayor_edad(Persona);
};

class Estudiante: public Persona{
    private:
        string carrera;
        float promedio;
    public:
        Estudiante();
        void setEstudiante(); //INSERTAR
        void getEstudiante(); //MOSTRAR
        friend float mejor_prom(Estudiante *,int);
};

int main(){
    Persona obj1;
    int mayor;
    obj1.setPersona();
    obj1.getPersona();

    mayor =  mayor_edad(obj1);
    cout<<mayor<<endl;

    Estudiante obj2[10];
    int n;
    cout<<"\nIngrese la cantidad de estudiantes: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Estudiante Nro "<<i+1<<endl;
        obj2[i].setEstudiante();
    }
    for(int i=0;i<n;i++){
        cout<<endl<<"Estudiante Nro "<<i+1<<endl;
        obj2[i].getEstudiante();
    }
    float prom=mejor_prom(obj2,n);
    cout<<endl<<prom;

}

Persona::Persona(){}

void Persona::setPersona(){
    cout<<"Nombre: ";cin>>nombre;
    cout<<"Edad: ";cin>>edad;
}

void Persona::getPersona(){
    cout<<"Datos personales: "<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

int mayor_edad(Persona x){
    if(x.edad >= 18)
        return 1;
    else
        return 0;
}

Estudiante::Estudiante(){}

void Estudiante::setEstudiante(){
    setPersona();
    cout<<"Carrera: ";cin>>carrera;
    cout<<"Promedio: ";cin>>promedio;
}

void Estudiante::getEstudiante(){
    getPersona();
    cout<<"Datos academicos"<<endl;
    cout<<"Carrera: "<<carrera<<endl;
    cout<<"Promedio: "<<promedio<<endl;
}

float mejor_prom(Estudiante *x,int n){
    float mayor=x[0].promedio;
    for(int i=0;i<n;i++){
        if(x[i].promedio > mayor)
            mayor=x[i].promedio;
    }
    return mayor;
}