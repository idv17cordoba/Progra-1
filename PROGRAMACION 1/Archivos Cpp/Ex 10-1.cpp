#include "Libreria.h"

int main()
{
    cout <<" Input File:";

    string iname;
    cin>>iname;
    ifstream ist{iname};
    if (!ist)error("Cant open input",iname);


    vector<int>temps;
    int num;

    while(ist>>num){
        temps.push_back(num);
    }

    int sum=0;

    for (int i=0;i<temps.size();i++)

    {
        cout<<temps[i]<<"\n";
        sum+=temps[i];
    }
    cout << "Sum of integers in " << iname << " is " << sum << ".\n";

}
