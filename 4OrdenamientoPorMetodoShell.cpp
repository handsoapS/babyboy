#include<iostream>
#include"leearreglo.h"
using namespace std;
#define largo 50

void ordenShell(int A[],int n){
    int i, j, inc, temp;
    for(inc = 1 ; inc<n;inc=inc*3+1);
    while (inc > 0){
        for (i=inc; i < n; i++){
            j = i;
            temp = A[i];
            while ((j >= inc) && (A[j-inc] > temp)){
                A[j] = A[j - inc];
                j = j - inc;
            }
            A[j] = temp;
        }
    inc/= 2;
    }
}
int main(){
    int A[largo],n;
    do{
        cout<<"Cantidad de numeros a ingresar: ";cin>>n;
        if(n<=0||n>largo) cout<<"Debe ingresar un valor > a 0 y < a "<<largo<<endl;
    }while(n<=0||n>largo);

    leeCadena(n,A);
    ordenShell(A,n);
    muestraCadena(n,A);
}