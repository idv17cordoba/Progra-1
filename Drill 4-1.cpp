#include <iostream>

using namespace std;
int main()
{

int a,b;

    cout<<"Da 2 numeros enteros, pon '|' para terminar'\n";
    while (cin>>a>>b)
    {
        cout<<"Tus numeros son:"<<a<<","<<b;

    }
    return 0;
    cin.ignore();
    cin.get();

}
