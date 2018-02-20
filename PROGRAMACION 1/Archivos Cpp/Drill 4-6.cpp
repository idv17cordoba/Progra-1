#include<iostream>

using namespace std;

int main()
{
    double a,b=0;

    cout<<"Da 1 numero, pon '|' para terminar'\n";
    while (cin>>a)
    {
        cout<<"Tu numero es:"<<a<<"\n";
        if (b==0)
        {
            cout<<"El mayor hasta ahorita es: "<<a<<"\n";
        }
        else if (a<b)
        {
            cout<<"\nEl numero mayor hasta ahorita es:"<<b<<"\nEl menor es:"<<a<<"\n";
        }
        else if (b<a)
        {
            cout<<"\nEl numero mayor hasta ahorita es:"<<a<<"\nEl menor es:"<<b<<"\n";
        }
        b=a;


    }

    return 0;
    cin.ignore();
    cin.get();


}
