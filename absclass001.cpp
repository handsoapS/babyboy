#include"iostream"
using namespace std;

class Impresora{
    protected:
        string marca;
        string serie;
    public:
        virtual int arrancar()=0;
};

class ChorroTinta : public Impresora{
    protected:
        float chorro;
    public:
        int arrancar(){return 100;}
};

class Matricial : public Impresora{
    protected:
        int agujas;
    public:
        int arrancar(){return 10;}
};

int main(){
    Matricial m;
    ChorroTinta ch;
    cout<<ch.arrancar()<<endl;
    cout<<m.arrancar()<<endl;

    return 0;
}