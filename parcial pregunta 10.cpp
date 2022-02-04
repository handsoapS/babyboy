#include<iostream> //Pone a su disposición los objetos cin, cout (Flujo in/out) //

using namespace std; //Frase reservada std:: //

int main(){ //Funcion principal //

    int variable=10; //Se declara un variable tipo entero con un valor almacenado de 10 //
    int *apuntador; //Declaramos un apuntador que se apuntara a un numero entero //

    cout<<"La variable contiene un "<<variable<<endl; //Imprimimos un enunciado indicando el valor de nuestra variable anteriormente declarada //
    apuntador=&variable; // Almacenamos la direccion de nuestra varible llamada "variable" en "apuntador" //

    cout<<"Variable esta en la direccion "<<apuntador<<endl; //Imprimos un enunciado con "apuntador" almacenando una direccion previamente asignada //
    *apuntador=15; // Reemplazamos el valor al que esté apuntando nuestro puntero por un nuevo valor (15)//

    cout<<"La variable ahora tiene un "<<variable<<endl; //Imprimimos un enunciado con el nuevo valor de nuestra "variable" //

    cout<<"Ahora teclee un numero"<<endl; //Imprimimos un enunciado que nos indique que digitemos un nuevo numero//
    cin>>*apuntador; //El nuevo valor se almacenará en la dirección que apunte nuestro puntero//
    cout<<"y ahora contiene un "<<*apuntador<<endl; //Imprimimos un enunciado con el nuevo valor que apunta nuestro puntero//

    cin.ignore(); //Utilizamos esta funcion para ignorar o lo que tenemos en nuestro buffer //
    cin.get(); //Utilizamos esta funcion para leer lee un carácter que se introduce desde el teclado //
    return 0; //Indica a nuestra funcion principal (int) que tiene que retornar un valor "0" //

}