#include "Libreria.h"


int main () {
  string line;

    vector<string>palabras;
    vector<string>sujeto;
    vector<string>adjetivo;
    vector<string>verbo;
    vector<string>adverbio;
    vector<string>pre;
    vector<string>sust;

  ifstream myfile ("oraciones.txt");
  ofstream orac ("orac.txt");

  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
        palabras.push_back(line);
    }
    myfile.close();
  }

for (int i= 0; i<palabras.size();i++)
{
    if(palabras [i] == "El tren" || palabras [i] == "Andres"||palabras [i] == "Sergio"||palabras [i] == "El titere")
    {
        sujeto.push_back(palabras[i]);
    }
    if(palabras [i] == "rojo" || palabras [i] == "avergonzado"||palabras [i] == "grande"||palabras [i] == "antiguo")
    {
        adjetivo.push_back(palabras[i]);
    }
    if(palabras [i] == "avanza" || palabras [i] == "cae"||palabras [i] == "limpia"||palabras [i] == "salta")
    {
        verbo.push_back(palabras[i]);
    }
    if(palabras [i] == "silenciosamente " || palabras [i] == "precipitadamente "||palabras [i] == "lentamente"||palabras [i] == "felizmente")
    {
        adverbio.push_back(palabras[i]);
    }
    if(palabras [i] == "sobre" || palabras [i] == "entre"||palabras [i] == "por "||palabras [i] == "para")
    {
        pre.push_back(palabras[i]);
    }
     if(palabras [i] == "las vias" || palabras [i] == "los tablones"||palabras [i] == "el techo"||palabras [i] == "la audiencia")
    {
        sust.push_back(palabras[i]);
    }
}

int i = 0;
while(i<9)
{
    orac<< sujeto[randint(0,sujeto.size()-1)]<<" "<< adjetivo[randint(0,adjetivo.size()-1)]
    <<" "<< verbo[randint(0,verbo.size()-1)]<<" "<< adverbio[randint(0,adverbio.size()-1)]
    <<" "<< pre[randint(0,pre.size()-1)]<<" "<< sust[randint(0,sust.size()-1)]<<endl;

    i++;
}




  return 0;
}

