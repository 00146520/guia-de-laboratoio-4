#include "iostream"
#include "string.h"
#include "conio.h"
using namespace std; 
int main()
{
    char palabra[ 30 ];
    int total = 0;
    cout<<endl<< " Cuantas letras tiene su palabra "<<endl;
    cout<< " Ingrese su palabra: "<<endl; cin>>palabra;
    total = strlen(palabra);
    
    if (total == 10)
    {
        cout<< " Su numero de letras son: "<<total<<endl;
        cout<< " El numero de letras es par"<<endl;
    }
    else if (total<10 && total%2==0)
    {
        cout<< " Su numero de letras es menor a diez "<<endl;
        cout<< " El numero de letras es: "<<total<<endl;
        cout<< " La cantidad de letras es par"<<endl;
    }
    else if (total<10 && total%2!=0)
    {
        cout<< " Su numero de letras es menor a diez "<<endl;
        cout<< " El numero de letras es: "<<total<<endl;
        cout<< " La cantidad de letras es impar"<<endl;
    }
    else if (total>10 && total%2==0)
    {
        cout<<" El numero de letras es mayor que diez "<<endl;
        cout<<" El numero de letras es: "<<total<<endl;
          cout<< " La cantidad de letras es par"<<endl;
    }
    else if(total>10 && total%2 !=0)
    {
        cout<< " Su numero de letras es mayor a diez "<<endl;
        cout<< " El numero de letras es: "<<total<<endl;
        cout<< " La cantidad de letras es impar"<<endl;
    }
   
    return 0;
    
}