#include "iostream"
using namespace std;
int main()
{
    float num;
    cout<<endl<< " Verifique si su numero es positivo, negativo o igual a 0 "<<endl;
    cout<< " Ingrese su numero: "<<endl; cin>>num;
    if (num>0)
    {
        cout<< " Su numero es positivo "<<endl;
    }
   
    else if (num<0)
    {
        cout<< " Su numero es negativo "<<endl;
    }
     else
    {
        cout<< " su numero es cero "<<endl;
    }
    return 0;
}