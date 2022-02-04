#include"iostream"
using namespace std;

class npcheros{
    private:
        int damage;
        int movespeed;
        string name;
        int strenght;
        int agility;
        int intelligence;
        string mainatribute;
    public:
        npcheros(int,int,string,int,int,int,string);
        void showinfo();
};

class meleehero: public npcheros{
    public:
        void hitting();
        float dealtdamage();
        meleehero(int,int,string,int,int,int,string);
};

class rangehero: public npcheros{
    public:
        void attacking();
        float damageavoided();
        rangehero(int,int,string,int,int,int,string);
};

int main(){

}

meleehero::meleehero(int _damage,int _movespeed,string _name,int _strenght,int _agility,int _intelligence,string _mainatribute):npcheros(_damage,_movespeed,_name,_strenght,_agility,_intelligence,_mainatribute){
    damage = _damage;
    
}