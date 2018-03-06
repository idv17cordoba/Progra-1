#include "Libreria.h"


int main () {
  string line;

  vector<string>words;
  vector<string>anagram;

  ifstream myfile ("Anagrama.txt");
  ofstream anag ("Anag.txt");

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
    cout<<i+1<<") "<<words[i]<<endl;
    anagram.push_back(words[i]);
    sort(anagram[i].begin(),anagram[i].end());

  }
for (int i=0; i<anagram.size(); i++)
	{
		for (int x=0; x<anagram.size()-1; x++)
		{
			if(anagram[x]<anagram[x+1])
			{

				string temp=anagram[x+1];

				anagram[x+1]=anagram[x];

				anagram[x]=temp;

			}
		}
	}
anag<<"\n---Sorted---\n\n";

	for(int i=0; i<anagram.size(); i++)
	{
		anag<<i+1<<") "<<anagram[i]<<endl;
	}


  return 0;
}
