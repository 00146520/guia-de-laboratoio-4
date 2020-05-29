#include "iostream"
using namespace std;
int main()
{
    int denominador, numerador;
    cout<<endl<<"Verifique si el numero es divisible entre otro"<<endl;
    cout<<" Ingrese su numerador "<<endl; cin>>numerador;
    cout<<" Ingrese su denominador "<<endl; cin>>denominador;

    if (numerador%denominador ==0){
        cout<<denominador<< " es divisor de " <<numerador<<endl;
    }
    else{
        cout<<denominador<< " No es divisor de " <<numerador<<endl;
    }
    return 0;
    }