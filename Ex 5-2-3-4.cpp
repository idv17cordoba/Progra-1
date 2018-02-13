#include "Libreria.h"

double ctok(double c)
{
    double k=c+273.15;
    return k;
}
int main()
{
    double c=0;
    cin>>c;
    if (c<-273.15)
    {
        cout<<"No existe tal temperatura\n";
    }
    else
    {double k=ctok(c);
    cout<<k<<"\n";}

    keep_window_open();
    return 0;
}
