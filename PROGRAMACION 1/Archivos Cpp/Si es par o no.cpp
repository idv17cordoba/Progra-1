#include<iostream>
#include<string>

using namespace std;

int main()
{
    int val1;
cout<<"Da un numero: ";
    while(cin>>val1)
    {

        if(val1%2 != 0)
        {
            cout<< val1 <<" no es un numero par\n";
        }
        else
        {
            cout<<val1<< " es un numero par\n";
        }
    }
    cin.ignore();
    cin.get();

    return 0;
}
