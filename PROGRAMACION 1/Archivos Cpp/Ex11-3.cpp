#include "Libreria.h"

bool vocal(char ch)
{
    ch = tolower(ch);
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}


bool allvowels(const string& s)
{
    for (int i = 0; i<s.size(); ++i)
        if (!vocal(s[i])) return false;
    return true;
}

void disemvowel(string& s)
{
    string s_novow;
    for (int i = 0; i<s.size(); ++i) {
        if (!vocal(s[i])) s_novow.push_back(s[i]);
    }
    s = s_novow;
}


int main()
{

    cout << "Input file : ";
    string iname;
    cin >> iname;
    ifstream ifs{iname};
    if (!ifs) error("can't open input file ",iname);

    cout << "Output file: ";
    string oname;
    cin >> oname;
    ofstream ofs{oname};
    if (!ofs) error("can't open output file ",oname);

    char ch;
    string s;
    while (ifs.get(ch)) {
        if (isgraph(ch)) {
            ifs.unget();
            ifs >> s;
            if (allvowels(s)) ifs.get(ch); // don't print s, skip next space
            else {
                disemvowel(s);
                ofs << s;
            }
        }
        else ofs << ch;
    }
}
