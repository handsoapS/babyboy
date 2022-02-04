#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    bool matrix = true;
    int num;
    srand(time(NULL));
    system ("color 0A"); 
    while(matrix = true)
    {
     num=0+rand()%(1+1-0);
        
     cout<<num<<" ";
            }
     
     return 0;
}