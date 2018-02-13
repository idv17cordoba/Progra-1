#include<iostream>

using namespace std;

int main()
{
    double a,b;

    cout<<"Da 2 numeros, pon '|' para terminar'\n";
    while (cin>>a>>b)
    {
        cout<<"Tus numeros son:"<<a<<","<<b<<"\n";
        if (a<b)
        {
            cout<<"\nEl numero mayor es:"<<b<<"\nEl menor es:"<<a;
        }
        else if (b<a)
        {
            cout<<"\nEl numero mayor es:"<<a<<"\nEl menor es:"<<b<<"\n";
        }
        else if(a-b<=.001 || b-a==.001)
        {
            cout<<"\nTus numeros son casi iguales, tienen una diferencia de .001 o menos";
        }
        else if (a==b)
        {
            cout<<a<<" y "<<b<<"son iguales";
        }

    }
    return 0;
    cin.ignore();
    cin.get();


}
