#include "Libreria.h"

using namespace std;

int main()
{
    vector<int>numeros;
    vector<string>nombres;
    int nu;
    string no;

    cout<<"Da un nombre con su puntaje: (NoName  para terminar): "<<"\n";

    while(cin>>no>>nu && no!="NoName")
    {


        for(int i=0;i<nombres.size();i++)
        {
             if (find(nombres.begin(),nombres.end(),no)!=nombres.end())
                {   cout<<"Duplicado";
                    break;
                    }

        }
        nombres.push_back(no);
        numeros.push_back(nu);
    }

    for (int i=0; i<nombres.size();i++)
        cout<<nombres[i]<<" "<<numeros[i]<<"\n";



    cin.ignore();
    cin.get();

    return  0;

}
