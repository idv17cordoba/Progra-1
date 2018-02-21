#include "Libreria.h"

int main()
{
    int birth_year=19041996;
    cout<<showbase<<dec;
    cout<<birth_year<<" Decimal\t"<<hex<<birth_year<<" Hexadecimal\t"<<oct<<birth_year<<" Octal\n";

    int a,b,c,d;

    cin.unsetf(ios::dec);
    cin.unsetf(ios::oct);
    cin.unsetf(ios::hex);

    cin>>a>>oct>>b>>hex>>c>>d;

    cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\n";

    double e=1234567.89;

    cout<<defaultfloat<<e<<"\t"<<fixed<<e<<"\t"<<scientific<<e<<"\n"; //Marcca error con defaultfloat


    keep_window_open();
}
