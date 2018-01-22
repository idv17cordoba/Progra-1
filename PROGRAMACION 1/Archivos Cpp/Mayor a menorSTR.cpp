#include<iostream>
#include<string>

using namespace std;

int main()
{
    string var1,var2,var3,mayor,menor,medio;
    cout<<"Da una palabra:";
    cin>> var1;
    cout<<"\nOtro:";
    cin>> var2;
    cout<<"\nOtro mas:";
    cin>>var3;


    if (var1>var2 && var1>var3)
    {
      mayor=var1;

      if (var2>var3)
      {
          menor=var3;
          medio=var2;
      }
      else
      {
          menor=var2;
          medio=var3;

      }
    }
    if (var2>var3 && var2>var1 )
    {
        mayor=var2;
        if (var3>var1)
        {
            menor=var1;
            medio=var3;
        }
        else
        {
            menor=var3;
            medio=var1;
        }

    }
    if (var3>var1 && var3>var2)
    {
        mayor=var3;
        if (var2>var1)
        {
            menor=var1;
            medio=var2;

        }
        else{
            menor=var2;
            medio=var1;
        }
    }



    cout<<menor+","+medio+","+mayor;
    cin.ignore();
    cin.get();

    return 0;
}
