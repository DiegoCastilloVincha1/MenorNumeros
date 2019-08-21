#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{   int a,b,c;
    cout<<"Ingresa el valor de a: ";cin>>a;
    cout<<"Ingresa el valor de b: ";cin>>b;
    cout<<"Ingresa el valor de c: ";cin>>c;
    if ((a==b)&&(a==c)&&(b==c)){
        cout<<"Los tres numeros son iguales"<<endl;
    }
    else if ((a<b)&&(a<c)){
        cout<<"el numero menor es "<<a<<endl;
    }
    else if ((b<a)&&(b<c)){
        cout<<"el numero menor es "<<b<<endl;
    }
    else {
        cout<<"el numero menor es "<<c<<endl;
    }
    system("pause");
    return 0;
}
