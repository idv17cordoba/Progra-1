#include "Libreria.h"
enum num_format {
        decimal, octal, hexadecimal
    };

ostream& operator<<(ostream& os, num_format nf)
{
    switch (nf) {
    case decimal:
        return os << "decimal\t";
    case octal:
        return os << "octal\t";
    case hexadecimal:
        return os << "hexadecimal";
    default:
        error("Valor ilegal");
    }
}

// print one line of the solution
void printnum(int n, num_format nf)
{
    cout << showbase;
    switch (nf) {
    case decimal:
        cout << dec << setw(6) << n;
        break;
    case octal:
        cout << oct << setw(6) << n;
        break;
    case hexadecimal:
        cout << hex << setw(6) << n;
        break;
    }
    cout << ' ' << nf << "\t convierte a  " << dec << setw(6) << n << ' ' << decimal << endl;
}

int main()
{


    cout << "Entra numeros" << endl;
    int n = 0;
    char ch;
    while (cin>>ch) {
        if (ch=='0') {
            cin.get(ch);
            if (ch=='x') {
                cin >> hex >> n;
                printnum(n,hexadecimal);
            }
            else if (isdigit(ch)) {
                cin.unget();
                cin >> oct >> n;
                printnum(n,octal);
            }
            else {
                cin.unget();
                printnum(0,octal);
            }
        }
        else if (isdigit(ch)) {
            cin.unget();
            cin >> dec >> n;
            printnum(n,decimal);
        }
        else break; // not a number
    }

    keep_window_open();
}
