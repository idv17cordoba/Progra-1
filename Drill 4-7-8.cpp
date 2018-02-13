#include<iostream>
#include <string>
using namespace std;

int main()
{
    double a;

    char c;

    cout<<"Da un valor (m,c,i,f) metro,centimetro,pulgadas y pies\n";
    while (cin>>a>>c)
    {
        switch(c){
        case 'c':case ' c':
            cout<<"Tu valor en cm es: "<<a<<" ,en m: "<< a*0.01<<" ,en in: "<<a*0.39<<" ,en ft: "<<a*0.032<<"\n";
            break;
        case 'm':case ' m':
            cout<<"Tu valor en m es: "<<a<<" ,en cm: "<< a*100<<" ,en in: "<<a*39.3<<" ,en ft: "<<a*3.2<<"\n";
            break;
        case 'i':case ' i':
            cout<<"Tu valor en in es: "<<a<<" ,en m: "<< a*0.0254<<" ,en cm: "<<a*2.54<<" ,en ft: "<<a*0.0833<<"\n";
            break;
        case 'f':case ' f':
            cout<<"Tu valor en ft es: "<<a<<" ,en m: "<< a*0.3048<<" ,en in: "<<a*12<<" ,en cm: "<<a*30.48<<"\n";
            break;
        default:
            cout<<"No conzco esa medida";
            break;
        }



    }

    return 0;
    cin.ignore();
    cin.get();


}
