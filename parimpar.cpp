#include"iostream"
#include<conio.h>

using namespace std;

void paroimpar(int);

int main(){
	int x;
	cout<<"Digite un numero: "<<endl;
	cout<<"-->";cin>>x;
	paroimpar(x);
	
	getch();
	return 0;
}

void paroimpar(int num){
	if(num%2==0){
		cout<<"->Su numero es par";
	}
	else{
		cout<<"->Su numero es impar";
	}
}
