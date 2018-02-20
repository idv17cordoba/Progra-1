#include<iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"Da 2 numeros enteros, pon '|' para terminar'\n";
    while (cin>>a>>b)
    {
        cout<<"Tus numeros son:"<<a<<","<<b;
        if (a<b)
        {
            cout<<"\nEl numero mayor es:"<<b<<"\nEl menor es:"<<a;
        }
        else if (b<a)
        {
            cout<<"\nEl numero mayor es:"<<a<<"\nEl menor es:"<<b;
        }

    }
    return 0;
    cin.ignore();
    cin.get();


}
