#include<iostream>
#include<string>

using namespace std;

int main()
{
    string cero,uno,dos,tres,cuatro,var;
    cero="cero";
    uno="uno";
    dos="dos";
    tres="tres";
    cuatro="cuatro";
    cout<<"Da un numero en letra: ";
    while(cin>>var)
    {


    if (var!=uno && var !=dos && var!=tres && var!=cero && var!=cuatro)
    {
        cout<<"Ese numero no me lo se\n";
    }
    if (var==cero)
    {
        cout<<"0\n";
    }
    if (var==uno)
    {
        cout<<"1\n";
    }
    if (var==dos)
    {
        cout<<"2\n";
    }
    if (var==tres)
    {
        cout<<"3\n";
    }
    if (var==cuatro)
    {
        cout<<"4\n";
    }
    }
    cin.ignore();
    cin.get();

    return 0;
}
