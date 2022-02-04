// POO: Herencia
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class persona
{
	private:
   	char nombre[20];
      int edad;
	public:
     void leerpersona();
     void mostrarpersona();
};

void persona::leerpersona()
{
	cout<<"\n\nNOMBRE : ";cin>>nombre;
   cout<<"\nEDAD   : ";cin>>edad;
}
void persona::mostrarpersona()
{
	cout<<"\n\nNOMBRE : "<<nombre;
   cout<<"\n\nEDAD   : "<<edad;
}
/*********************************/
class estudiante : public persona
{
	private:
      float notafinal;
   public:
   	void leerestudiante();
      void mostrarestudiante();
};
void estudiante::leerestudiante()
{
   leerpersona();
   cout<<"\nNOTA FINAL : ";cin>>notafinal;
}
void estudiante::mostrarestudiante()
{
	mostrarpersona();
   cout<<"\n\nNOTA   : "<<notafinal;
}
/**************************************************/
class docente : public persona
{
	private:
   	float sueldo;
   public:
   	//docente(char *,int,float);
      float getsueldo();
      void leerdocente();
      void mostrardocente();
};
float docente::getsueldo()
{
	return(sueldo);
}

void docente::leerdocente()
{
   leerpersona();
	cout<<"\nSUELDO : ";cin>>sueldo;
}
void docente::mostrardocente()
{
	mostrarpersona();
   cout<<"\n\nSUELDO : "<<sueldo;
}
/******************************************************/
class pregrado : public estudiante
{
	private:
   	char carrera[30];
   public:
      void leerpregrado();
      void mostrarpregrado();
};

void pregrado::leerpregrado()
{
	leerestudiante();
   cout<<"\nCARRERA: ";cin>>carrera;
}
void pregrado::mostrarpregrado()
{
	mostrarestudiante();
   cout<<"\n\nCARRERA: "<<carrera;
}
/*********************************/
void promedio(docente *D,int m)
{
   float promedio=0;
	for(int i=0;i<m;i++)
   {
      promedio=promedio+D[i].getsueldo();
   }
   promedio=promedio/m;
   cout<<"\n\n\tSUELDO PROMEDIO :  "<<promedio;
}

int main()
{
	docente x[20]; //20 0bjetos de la clase docente
   int m,i;
   cout<<"NUMERO DE DOCENTES : ";cin>>m;
   for(i=0;i<m;i++)
   {
   	x[i].leerdocente();
   }
   promedio(x,m);
   getch();
   for(i=0;i<m;i++)
   {
   	x[i].mostrardocente();
   }
   getch();
}





