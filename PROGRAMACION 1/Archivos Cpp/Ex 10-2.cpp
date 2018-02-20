#include "Libreria.h"

struct Reading{
int hour;
double temperature;
};

int main()
{
    cout <<" Input File:";

    string iname;
    cin>>iname;
    ifstream ist{iname};
    if (!ist)error("Cant open input",iname);

    string oname;
    cout<<" Output file:";
    cin>>oname;
    ofstream ost{oname};
    if(!ost) error("Cant open output",oname);

    vector<Reading>temps;
    int hour;
    double temperature;
    while(ist>>hour>>temperature){
        if(hour<0 || 23<hour)error("hour out of range");
        temps.push_back(Reading{hour,temperature});
    }

    for (int i=0;i<temps.size();++i)
        ost<<'('<<temps[i].hour<<','<<temps[i].temperature<<")\n";



}
