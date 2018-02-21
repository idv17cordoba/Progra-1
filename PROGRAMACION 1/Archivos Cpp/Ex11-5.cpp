#include "Libreria.h"

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

    char c;

    while(ist.get(c))
    {
        if(ispunct(c)) c=' ';
        ost<<c;
    }


}
