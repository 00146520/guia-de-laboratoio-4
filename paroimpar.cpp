#include "iostream"
using namespace std;
int main()
{
    int num;
    cout<<endl<< " Verifique si un numero es par o impar "<<endl;
    cout<<" Ingrese el numero: "<<endl; cin>>num;
    if (num%2==0)
    {
        cout<< " El numero es par "<<endl;
    }
    else
    {
        cout<<" El numero es impar"<<endl;
    }
    return 0;
}