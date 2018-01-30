#include <iostream>

using namespace std;

int main()
{
	int aray[10];
cout<<"\tPon tus 10 numeros\n"<<endl;
	for(int i=0; i<10; i++)
	{
		cin>> aray[i];

	}
	cout<<"\n---ORDEN EN QUE LOS PUSISTE---\n\n";
for(int i=0;i<10;i++)
{
    cout<<i+1<<") "<<aray[i]<<endl;
}

	for (int i =0 ;  i <10 ; i++)
	{
		for (int  x = 9 ; x>=0; x--)
		{
			if(aray[x]>aray[x+1])
			{

				int temp=aray[x+1];

				aray[x+1]=aray[x];

				aray[x]=temp;

			}
		}
	}


	cout<<"\n---MENOR A MAYOR---\n\n";

	for(int i=0; i<10; i++)
	{
		cout<<i+1<<") "<<aray[i]<<endl;
	}

	cin.ignore();
	cin.get();
	return 0;

}
