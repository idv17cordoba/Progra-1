#include<string>
#include<iostream>

using namespace std;

int main()
{
    string nombre;
    double edad,meses;
    cout <<"Da tu primer nombre y tu edad: ";
    cin>>nombre;
    cin>>edad;
    meses=edad*12;
    cout<< "\nHola "<<nombre<<" tu edad en meses es: "<<meses;

    cin.ignore();
    cin.get();

    return 0 ;
}
