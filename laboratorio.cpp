#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

class Alumno{
    private:
        string codigo,nombre;
        float promedio;
    public:
        void leer();
        void escribir();
        string getCodigo();
        void readCode();
};

void seleccionsort(Alumno *, int);

void insercionDirecta(Alumno *,int);

void insercionBinaria(Alumno *,int);

void ordenShell(Alumno *,int);

void quicksort(Alumno *,int,int);

void heapSort(Alumno *,int);

void heapify(Alumno *,int,int);

void intercambiodirecto(Alumno *,int); 

void busquedaBinaria(Alumno *,int);

void busquedaSecuencialDesordenado(Alumno *,int);

int main(){
    Alumno x[20];
    int i,opc,opc2,opc3;
    int count=0;

    do{
        cout<<"\n     Cantidad de alumnos: "<<count<<endl;
        cout<<"      ___________________________\n";
        cout<<"     |                           |\n";
        cout<<"     |          M E N U          |\n";
        cout<<"     |                           |\n";
        cout<<"     |   1.   Leer alumnos       |\n";
        cout<<"     |   2.   Mostrar alumnos    |\n";
        cout<<"     |   3.   Ordenar alumnos    |\n";
        cout<<"     |   4.   Buscar alumnos     |\n";
        cout<<"     |   0.   Salir              |\n";
        cout<<"     |___________________________|\n";
        cout<<"\n     Digite una opcion: ";cin>>opc;
        switch(opc){
            case 1:
                system("CLS");
                cout<<"      ___________________________\n";
                cout<<"     |                           |\n";
                cout<<"     |   1.   Leer alumnos       |\n";
                cout<<"     |___________________________|\n\n";
                x[count].leer();
                count++;
                system("CLS");
                break;
            case 2:
                system("CLS");
                cout<<"      ___________________________\n";
                cout<<"     |                           |\n";
                cout<<"     |   2.   Mostrar alumnos    |\n";
                cout<<"     |___________________________|\n\n";
                for(i=0;i<count;i++){
                    x[i].escribir();
                    cout<<"\n";
                }
                cout<<endl;
                system("PAUSE");
                system("CLS");
                break;
            case 3:
                do{
                    system("CLS");
                    cout<<"      _______________________________\n";
                    cout<<"     |                               |\n";
                    cout<<"     |      3.   Ordenar alumnos     |\n";
                    cout<<"     |_______________________________|\n";
                    cout<<"     |                               |\n";
                    cout<<"     |   1.  Intercambio directo     |\n";
                    cout<<"     |   2.  Seleccion sort          |\n";   
                    cout<<"     |   3.  Insercion directa       |\n";
                    cout<<"     |   4.  Insercion binaria       |\n";
                    cout<<"     |   5.  Metodo Shell            |\n";
                    cout<<"     |   6.  Quick sort              |\n";
                    cout<<"     |   7.  Heap sort               |\n";
                    cout<<"     |   0.  Regresar                |\n";
                    cout<<"     |_______________________________|\n";
                    cout<<"\n     Digite una opcion: ";cin>>opc2;
                    switch(opc2){
                        case 1:
                            system("CLS");
                            cout<<" Intercambio directo...\n\n";
                            intercambiodirecto(x,count);
                            for(int i=0;i<count;i++){
                                x[i].escribir();
                                cout<<"\n";
                            }
                            system("PAUSE");
                            break;
                        case 2:
                            system("CLS");
                            cout<<" Seleccion sort...\n\n";
                            seleccionsort(x,count);
                            for(int i=0;i<count;i++){
                                x[i].escribir();
                                cout<<"\n";
                            }
                            system("PAUSE");
                            break;
                        case 3:
                            system("CLS");
                            cout<<" Insercion directa...\n\n";
                            insercionDirecta(x,count);
                            for(int i=0;i<count;i++){
                                x[i].escribir();
                                cout<<"\n";
                            }
                            system("PAUSE");
                            break;
                        case 4:
                            system("CLS");
                            cout<<" Insercion binaria...\n\n";
                            insercionBinaria(x,count);
                            for(int i=0;i<count;i++){
                                x[i].escribir();
                                cout<<"\n";
                            }
                            system("PAUSE");
                            break;
                        case 5:
                            system("CLS");
                            cout<<" Metodo Shell...\n\n";
                            ordenShell(x,count);
                            for(int i=0;i<count;i++){
                                x[i].escribir();
                                cout<<"\n";
                            }
                            system("PAUSE");
                            break;
                        case 6:
                            system("CLS");
                            cout<<" Quick sort...\n\n";
                            quicksort(x,0,count-1);
                            for(int i=0;i<count;i++){
                                x[i].escribir();
                                cout<<"\n";
                            }
                            system("PAUSE");
                            break;
                        case 7:
                            system("CLS");
                            cout<<" Heap sort...\n\n";
                            heapSort(x,count);
                            for(int i=0;i<count;i++){
                                x[i].escribir();
                                cout<<"\n";
                            }
                            system("PAUSE");
                            break;
                    }
                    if(opc2==0) system("CLS");
                }while(opc2!=0);
                break;
            case 4:
                do{
                    system("CLS");
                    cout<<"      _____________________________\n";
                    cout<<"     |                             |\n";
                    cout<<"     |    4.   Buscar alumnos      |\n";
                    cout<<"     |_____________________________|\n";
                    cout<<"     |                             |\n";
                    cout<<"     |   1.  Busqueda Secuencial   |\n";
                    cout<<"     |   2.  Busqueda Binaria      |\n";
                    cout<<"     |   3.  Busqueda Hashing      |\n";
                    cout<<"     |   0.  Regresar              |\n";
                    cout<<"     |_____________________________|\n";
                    cout<<"\n     Digite una opcion: ";cin>>opc3;
                    switch(opc3){
                        case 1:
                            system("CLS");
                            cout<<" Busqueda Secuencial...\n\n";
                            busquedaSecuencialDesordenado(x,count);
                            cout<<endl;
                            system("PAUSE");
                            system("CLS");
                            break;
                        case 2:
                            system("CLS");
                            cout<<" Busqueda Binaria...\n\n";
                            busquedaSecuencialDesordenado(x,count);
                            cout<<endl;
                            system("PAUSE");
                            system("CLS");
                            break;
                    }if(opc3==0) system("CLS");
                }while(opc3!=0);
                break;
        }
    }while(opc!=0);
}
void Alumno::leer(){
    cout<<"         Codigo   : ";cin>>codigo;
    cout<<"         Nombre   : ";cin>>nombre;
    cout<<"         Promedio : ";cin>>promedio;
}

void Alumno::escribir(){
    cout<<"         Codigo   : "<<codigo<<endl;
    cout<<"         Nombre   : "<<nombre<<endl;
    cout<<"         Promedio : "<<promedio<<endl;
}

string Alumno::getCodigo(){
    return codigo;
}

void Alumno::readCode(){
    cout<<"\nIntroduzca el codigo: ";cin>>codigo;
}

void intercambiodirecto(Alumno *x, int n){
    int i,j;
    Alumno aux;
    for(i=1;i<n;i++){
        for(j=n-1;j>=i;j--){
            if(x[j-1].getCodigo()>x[j].getCodigo()){
                aux=x[j-1];
                x[j-1]=x[j];
                x[j]=aux;
            }
        }
    }
}

void seleccionsort(Alumno *x, int n){
    int min,i,j;
    Alumno aux;
    for (i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++)
        if(x[min].getCodigo() > x[j].getCodigo())
        min=j;
        aux=x[min];
        x[min]=x[i];
        x[i]=aux;
    }
}

void insercionDirecta(Alumno *x,int n){
    int i,j;
    Alumno v;
    for (i = 1; i < n; i++){
        v = x[i];
        j = i - 1;
        while (j >= 0 && x[j].getCodigo() > v.getCodigo()){
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = v;
    }
}

void insercionBinaria(Alumno *x,int n){
    int i,j,izq,der,m;
    Alumno aux;
    for(i=1;i<n;i++){
        aux = x[i];
        izq=0;
        der=i-1;
        while(izq<=der){
            m=((izq+der)/2);
            if (aux.getCodigo()<x[m].getCodigo()) der=m-1;
            else izq=m+1;
        }
        j=i-1;
        while(j>=izq){
            x[j+1]=x[j];
            j=j-1;
        }
        x[izq]=aux;
    }
}

void ordenShell(Alumno *x,int n){
    int i, j, inc;
    Alumno temp;
    for(inc = 1 ; inc<n;inc=inc*3+1);
    while (inc > 0){
        for (i=inc; i < n; i++){
            j = i;
            temp = x[i];
            while ((j >= inc) && (x[j-inc].getCodigo() > temp.getCodigo())){
                x[j] = x[j - inc];
                j = j - inc;
            }
            x[j] = temp;
        }
    inc/= 2;
    }
}

void quicksort(Alumno *xx,int izq,int der){
    int i, j;
    Alumno x,aux;
    i = izq;
    j = der;
    x = xx[ (izq + der) /2 ];
    do{
        while( (xx[i].getCodigo() < x.getCodigo()) && (j <= der) ){
            i++;
        }
        while( (x.getCodigo() < xx[j].getCodigo()) && (j > izq) ){
            j--;
        }
        if( i <= j ){
            aux = xx[i]; 
            xx[i] = xx[j]; 
            xx[j] = aux;
            i++;
            j--;
        }
    }while( i <= j );
    if( izq < j ) quicksort( xx, izq, j );
    if( i < der ) quicksort( xx, i, der );
}

void heapify(Alumno *x, int n, int root){
    int largest = root;
    int l = 2*root + 1;
    int r = 2*root + 2; 
  
    if (l < n && x[l].getCodigo() > x[largest].getCodigo()) largest = l;

    if (r < n && x[r].getCodigo() > x[largest].getCodigo()) largest = r;

    if (largest != root){
        swap(x[root], x[largest]);  // Puedes utilizar el metodo tradicional (usando un auxiliar)
        heapify(x,n,largest);
    }
}

void heapSort(Alumno *x, int n){
    for (int i = n / 2 - 1; i >= 0; i--) heapify(x,n,i);
  
    for (int i=n-1; i>=0; i--){
        swap(x[0], x[i]);   // Puedes utilizar el metodo tradicional (usando un auxiliar)
        heapify(x, i, 0);
    }
}

void busquedaBinaria(Alumno *x, int n){
    int izq,der,cen;
    Alumno code;
    der=n-1;izq=0;cen=int((izq+der)/2);
    code.readCode();
    while(izq<=der && code.getCodigo()!=x[cen].getCodigo()){
        if(code.getCodigo()>x[cen].getCodigo()) izq=cen+1;
        else der=cen-1;
        cen=int((izq+der)/2);
    }
    if(izq>der){
        cout<<"El alumno no se encuentra en la lista\n";
    }
    else{
        cout<<"\nEl alumno es: \n";
        x[cen].escribir();
    }
}

void busquedaSecuencialDesordenado(Alumno *x, int n){
    int u=1;
    Alumno code;
    code.readCode();
    while(u<=n && x[u-1].getCodigo()!=code.getCodigo()){
        u++;
    }
    if(u>n){
        cout<<"El alumno no se encuentra en la lista\n"; 
    }
    else{
        cout<<"\nEl alumno es: \n";
        x[u-1].escribir();
    }
}