#include<iostream>

using namespace std;

int main()
{
    int var1,var2, mayor,menor,suma,resta,mult;
    cout<<"Da un numero entero:";
    cin>> var1;
    cout<<"\nOtro:";
    cin>> var2;

    if (var1<var2)
    {
        mayor=var2;
        menor=var1;
    }
    else{
        mayor=var1;
        menor=var2;
    }
    suma=var1+var2;
    resta=var1-var2;
    mult=var1*var2;
    double rat=((double)mayor/menor);


    cout<<"\nEl mayor es: "<<mayor
        <<"\nEl menor es: "<<menor
        <<"\nLa suma es: "<< suma
        <<"\nLa resta es: "<< resta
        <<"\nLa multiplicaion es: "<< mult
        <<"\nLa division (ratio): "<<rat;

    cin.ignore();
    cin.get();

    return 0;
}
