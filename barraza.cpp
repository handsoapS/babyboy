#include <iostream>
using namespace std;
 
class Figuras{  //Definición de la clase base Figuras
    protected:
        string denominacion;
        float area;
    public:
        // Definiendo las funciones virtuales en la clase base
        virtual void calcularArea();
        virtual void dibujarFigura();
        virtual void identificar();
};
 
// Cuando se definen las funciones no es necesario utilizar modificador "virtual"
void Figuras :: calcularArea( ){
}
 
void Figuras :: dibujarFigura( ){  
    cout << "No hay dibujo disponible..." << endl;
}
void Figuras :: identificar( ){  
    cout << endl << "Nombre Figura: " << denominacion << endl;
    cout << "El Area es: "<<area<<endl;
}
 
class Rectangulo : public Figuras{  // Definición de la clase derivada Rectángulo
    protected:
        float base;
        float altura;
    public:
        Rectangulo(float b, float a);
        void calcularArea();
        void dibujarFigura();
        void identificar();
};
 
Rectangulo :: Rectangulo(float b, float a){  
    base = b;
    altura = a;
    denominacion = "Rectangulo";
}
 
void Rectangulo :: calcularArea(){  
    area = (base * altura);
}
 
void Rectangulo :: dibujarFigura(){  
    cout << endl;
    cout << "**** " << endl;
    cout << "*        * " << endl;
    cout << "*        * altura = " << altura << endl;
    cout << "*        * " << endl;
    cout << "**** " << endl;
    cout << "Base = " << base << endl;
}
 
void Rectangulo :: identificar(){  
    Figuras::identificar();
    cout << endl << "Sus datos son: " << endl;
}
 
class Triangulo : public Figuras{  // Definición de la clase derivada Triángulo
    protected:
        float base;
        float altura;
    public:
        Triangulo(float b, float a);
        void calcularArea();
        void dibujarFigura();
        void identificar();
};
 
Triangulo :: Triangulo(float b, float a){      
    base = b;
    altura = a;
    denominacion = "Triangulo";
}
 
void Triangulo :: calcularArea(){  
    area = ((base * altura) / 2);
}
void Triangulo :: dibujarFigura(){      
    cout << "     *    " << endl;
    cout << "    * *   " << endl;
    cout << "   *   *  " << endl;
    cout << "  *     *  altura = " << altura << endl;
    cout << " *       * " << endl;
    cout << "***** " << endl;
    cout << " Base = " << base << endl;
}
 
void Triangulo :: identificar(){  
    Figuras::identificar();
    cout << endl << "Sus datos son: " << endl << endl;
}
 
int main(){  
    system("cls");
    Rectangulo Rec(10,10);
    Triangulo Tri(5,5);
 
    // Implementando objeto de la clase rectángulo
    Rec.calcularArea();
    Rec.identificar();
    Rec.dibujarFigura();
 
    //Implementando objeto de la clase Triangulo
    Tri.calcularArea();
    Tri.identificar();
    Tri.dibujarFigura();
    
    Figuras *arreglObj[5]; // Se crea un arreglo de objetos de la clase Figuras
 
    // Ahora se crearán 5 objetos para luego ser utilizados por el arreglo de objetos
    Rectangulo Rec1(15,15);
    Rectangulo Rec2(20,20);
    Triangulo Tri1(3,5);
    Triangulo Tri2(2,6);
    Triangulo Tri3(5,5);
 
    /* Cada objeto definido anteriormente será un elemento del arreglo donde cada elemento es un puntero a un objeto Figuras, aquí se utiliza el concepto de polimorfismo. Se hace referencia a cada objeto creado */
    arreglObj[0] = &Rec1;
    arreglObj[1] = &Rec2;
    arreglObj[2] = &Tri1;
    arreglObj[3] = &Tri2;
    arreglObj[4] = &Tri3;
 
    /* Se calcularán las áreas, se identificará cada objeto y se visualizará su información */
    for(int i = 0; i < 5; i++){  
        arreglObj[i] -> calcularArea();
        arreglObj[i] -> identificar();
        arreglObj[i] -> dibujarFigura();
        cout << "----------------------------"<<endl;
        system("PAUSE");
    }
    cout << endl << "FIN DE LA DEMOSTRACION " << endl;

    return 0;
}