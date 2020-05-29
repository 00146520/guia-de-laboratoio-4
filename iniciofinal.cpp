#include "iostream"
#include "string.h"
using namespace std; 
int main()
{
    string frase;
    cout<<endl<< " Verifique si su palabra inicie y finalice con la misma letra. "<<endl;
    cout<< " Ingrese su palabra: "<<endl; cin>>frase;
    if (frase.front()== frase.back())
    {
        cout<< "La letra del inicio y la letra del final es la misma "<<endl;
    }
    else
    {
        cout<< "La letra del inicio y la letra del final no es la misma "<<endl;
    }
    
    return 0;
}