#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <double>temps;
    double x,n=0;

    cout<<"Da valores (|para terminar): ";
    while(cin>>x)
    {
        temps.push_back(x);

    }

    int i, sum = 0;
    for (i=0; i<temps.size(); i++)
    {
    sum += temps[i];
    }
    sort(temps.begin(),temps.end());

    cout<<"El menor es: "<< temps.front() <<"\tEl mayor es: "<<temps.back()<<"\n";
    cout<<"La suma de tus valores es: "<<sum<<"\n";
    cin.ignore();
    cin.get();

    return 0;
}
