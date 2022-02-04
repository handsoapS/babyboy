#include<iostream>
#include<conio.h>

using namespace std;

void cuadrante(float,float);

int main(){
    float coo1,coo2;
    
    cout<<"Digite la coordenada (x)";
    cin>>coo1;
    cout<<"Digite la coordenada (y)";
    cin>>coo2;
    
    cuadrante(coo1,coo2);

    getch();
    return 0;
}
void cuadrante(float x,float y){

    if(x>=0 && y>=0){
        cout<<"--> 1";
    }
    else{
        if(x<0 && y>=0){
        cout<<"--> 2";
        }
        else{
            if(x<0 && y<0){
            cout<<"--> 3";
            }
            else{
                cout<<"--> 4";
            }
        }
    }
    }