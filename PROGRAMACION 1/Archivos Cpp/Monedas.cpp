#include<iostream>
#include<string>

using namespace std;

int main()
{
    double cent10,cent20,cent50,peso;
    cout<< "Cuantas mondedas tienes de 10 centavos: ";
    cin>> cent10;
    cout<< "Cuantas mondedas tienes de 20 centavos: ";
    cin>> cent20;
    cout<< "Cuantas mondedas tienes de 50 centavos: ";
    cin>> cent50;
    cout<< "Cuantas mondedas tienes de peso: ";
    cin>> peso;

        double suma=(cent10*.10)+(cent20*.20)+(cent50*.50)+peso;
        if (cent10>1 )
        {
        cout<<"\nTienes "<< cent10 << " monedas de 10 centavos";
        }
        else
        {
        cout<<"\nTienes "<< cent10 << " moneda de 10 centavos";
        }
        if (cent20>1 )
        {
        cout<<"\nTienes "<< cent20 << " monedas de 10 centavos";
        }
        else
        {
        cout<<"\nTienes "<< cent20 << " moneda de 10 centavos";
        }
         if (cent50>1 )
        {
        cout<<"\nTienes "<< cent50 << " monedas de 50 centavos";
        }
        else
        {
        cout<<"\nTienes "<< cent50 << " moneda de 50 centavos";
        }
        if (peso>1 )
        {
        cout<<"\nTienes "<< peso << " monedas de peso";
        }
        else
        {
        cout<<"\nTienes "<< peso << " moneda de peso";
        }

        cout<<"\nJuntas $"<< suma <<" pesos mexicanos";


    cin.ignore();
    cin.get();

    return 0;
}
