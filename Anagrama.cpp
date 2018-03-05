#include "Libreria.h"


int main () {
  string line;

  vector<string>words;
  vector<string>anagram;

  ifstream myfile ("Anagrama.txt");
  ofstream es ("Es.txt");
  ofstream noes ("NoEs.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
        words.push_back(line);
    }
    myfile.close();
  }

  else cout << "Unable to open file";

for(int i=0;i<words.size();i++)
  {
    cout<<words[i]<<endl;
    anagram.push_back(words[i]);
    sort(anagram[i].begin(),anagram[i].end());

  }
int i=0;
while(i<words.size()-1)
{
if(anagram[i] == anagram[i+1])
{
        cout<<words[i]<< " es anagrama de "<<words[i+1]<<endl;
        es<<words[i]<< " es anagrama de "<<words[i+1]<<endl;

}
else
    {
        cout<<words[i]<< " no es anagrama de "<<words[i+1]<<endl;
        noes<<words[i]<< " no es anagrama de "<<words[i+1]<<endl;
    }
    i++;
}


  return 0;
}
