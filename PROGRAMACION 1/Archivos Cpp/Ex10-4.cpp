#include "Libreria.h"

const int max_temp = 108;
const int min_temp = -44;
const char fahr = 'f';
const char cels = 'c';

struct Reading{
int hour;
double temperature;
};
double c_to_f(double t)
{
    return t*9/5 + 32;
}

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
    char ch;
    while(ist>>hour>>temperature>>ch){
        if(hour<0 || 23<hour)error("hour out of range");
        if (temperature<min_temp || temperature>max_temp)
            error("temperature out of range");

        switch (ch) {
        case cels:
            temperature = c_to_f(temperature);
        case fahr:
            break;
        default:
            error("illegal temperature scale ",ch);
        }
        temps.push_back(Reading{hour,temperature});
    }

    for (int i=0;i<temps.size();++i)
        ost<<'('<<temps[i].hour<<','<<temps[i].temperature<<")\n";



}
