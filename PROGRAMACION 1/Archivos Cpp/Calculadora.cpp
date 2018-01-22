#include <iostream>
#include <math.h>
using namespace std;
float suma(float a, float b)
{
    float r;
    r = a+b;
    return r;
}

float multiplicacion(float a, float b)
{
    float r;
    r=a*b;
    return r;
}
float division(float a, float b)
{
    float r;
    r=a/b;
    return r;
}
int modulo(int a, int b)
{
    float r;
    r=a%b;
    return r;
}
float potencia(float a,float b)
{
    float r;
    r=pow(a,b);
    return r;
}

int main()
{
    float x,y;
    cout<<"\nDa un numero:";
    cin>>x;
    cout<<"\nOtro:";
    cin>>y;
    cout<<"\nTu resultado de suma es:"<<suma(x,y);
    cout<<"\nTu resultado de multiplicacion es:"<<multiplicacion(x,y);
    cout<<"\nLa division es:"<<division(x,y);
    cout<<"\nEl modulo es:"<<modulo(x,y);
    cout<<"\nLa potencia es:"<<potencia(x,y);

    cin.ignore();
    cin.get();

    return 0;
}

