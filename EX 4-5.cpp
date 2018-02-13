#include<iostream>

using namespace std;

double suma(double a,double b)
{
    return a+b;
}
double resta(double a,double b)
{
    return a-b;
}
double multi(double a,double b)
{
    return a*b;
}
double div( double a, double b)
{
    return a/b;
}
int main()
{
    double a,b;
    char c;

    cout<<"Pon tus dos numeros seguido de tu operacion deseada. \nEj: 7 8 + "<<"\n";
    while(cin>>a>>b>>c)
    {
        switch(c){
    case '+':
        cout<<suma(a,b)<<"\n";
        break;
    case '-':
        cout<<resta(a,b)<<"\n";
        break;
    case '*':
        cout<<multi(a,b)<<"\n";
        break;
    case '/':
        cout<<div(a,b)<<"\n";
        break;
    default:
        cout<<"No tengo esa operacion";
        break;

        }
    }
    cin.ignore();
    cin.get();

    return  0;

}
