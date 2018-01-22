#include<iostream>
#include<string>

using namespace std;

int main()
{
    string operation;
    double val1,val2,r;
    cout<<"Que operacion quieres hacer? (+,-,*,/)\n";
    cout<<"Usa espacio para seprar los 2 numeros\n";
    while(cin>>operation)
    {
        if (operation!="+" && operation!="-" && operation!="*" && operation!="/")
        {
            cout<<"No puedo hacer esa operacion\n";
        }
        if (operation=="+")
        {
            cin>>val1;
            cin>>val2;
            r=val1+val2;
            cout<<"\nEl resultado es: "<< r <<"\n";
        }
        if (operation=="-")
        {
            cin>>val1;
            cin>>val2;
            r=val1-val2;
            cout<<"\nEl resultado es: "<<r<<"\n";
        }
        if (operation=="*")
        {
            cin>>val1;
            cin>>val2;
            r=val1*val2;
            cout<<"\nEl resultado es: "<<r<<"\n";
        }
        if (operation=="/")
        {
            cin>>val1;
            cin>>val2;
            r=val1/val2;
            cout<<"\nEl resultado es: "<<r<<"\n";
        }

    }
    cin.ignore();
    cin.get();

    return 0;
}
