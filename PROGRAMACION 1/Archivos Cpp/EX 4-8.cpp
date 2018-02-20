#include<iostream>

using namespace std;

int main()
{
    long long  i=1,j=1;

    while(i<=64)
    {
        cout<<i<<" "<<j<<"\n";
        i++;
        j*=2;
    }
    cin.ignore();
    cin.get();

    return  0;

}
