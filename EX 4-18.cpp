#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, d;
    cout << "Pon a, b y c: ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;

    if(a==0)
    {
        cout<<"No se puede dividir entre 0";
    }
    else if(d<0)
    {
        cout<<"No se puden dar valores imaginarios";
    }
    else{
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        cout<<"Valor 1: "<<x1<<"\nValor 2: "<<x2;
    }

    cin.ignore();
    cin.get();

    return  0;

}
