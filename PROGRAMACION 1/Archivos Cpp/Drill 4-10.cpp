#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    double a,m=0,n=0;

    char c;
    vector <double> d;

    cout<<"Da un valor (m,c,i,f) metro,centimetro,pulgadas y pies\n";
    while (cin>>a>>c)
    {
        switch(c){
        case 'c':case ' c':
            m=a*0.01;
            cout<<"Tu valor en cm es: "<<a<<" ,en m: "<< m<<" ,en in: "<<a*0.39<<" ,en ft: "<<a*0.032<<"\n";
            break;
        case 'm':case ' m':
            m=a;
            cout<<"Tu valor en m es: "<<m<<" ,en cm: "<< a*100<<" ,en in: "<<a*39.3<<" ,en ft: "<<a*3.2<<"\n";
            break;
        case 'i':case ' i':
            m= a*0.0254;
            cout<<"Tu valor en in es: "<<a<<" ,en m: "<< m <<" ,en cm: "<<a*2.54<<" ,en ft: "<<a*0.0833<<"\n";
            break;
        case 'f':case ' f':
            m= a*0.3048;
            cout<<"Tu valor en ft es: "<<a<<" ,en m: "<< m <<" ,en in: "<<a*12<<" ,en cm: "<<a*30.48<<"\n";
            break;
        default:
            cout<<"No conzco esa medida";
            break;

        }
        d.push_back(m);

    }
    cout<<"\nTus valores son: ";
    for(int i=0;i<d.size();i++)
    {
         cout<<"\n"<<d[i];
    }

    return 0;
    cin.ignore();
    cin.get();


}
