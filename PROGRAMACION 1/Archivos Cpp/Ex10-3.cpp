#include "Libreria.h"

struct Reading{
int hour;
double temperature;
Reading() :hour(0), temperature(0) { }
 Reading(int h, double t) :hour(h), temperature(t) { }
};

bool operator<(const Reading& r1, const Reading& r2)
{
    return r1.temperature < r2.temperature;
}

ostream& operator<<(ostream& os, const Reading& r)
{
    return os << r.hour << ' ' << r.temperature;
}

istream& operator>>(istream& is, Reading& r)
{
    int hour;
    double temperature;
    is >> hour >> temperature;
    if (!is) return is;
    r = Reading(hour,temperature);
    return is;
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
    while(ist>>hour>>temperature){
        if(hour<0 || 23<hour)error("hour out of range");
        temps.push_back(Reading{hour,temperature});
    }

    for (int i=0;i<temps.size();++i)
        ost<<'('<<temps[i].hour<<','<<temps[i].temperature<<")\n";

      sort(temps.begin(),temps.end());
    double median = temps[temps.size()/2].temperature;


    double sum = 0;
    for (int i = 0; i<temps.size(); ++i) {
        sum += temps[i].temperature;
    }
    double avg = sum / temps.size();

    cout << "median temperature: " << median << " F" << endl;
    cout << "average temperature: " << avg << " F" << endl;

}
