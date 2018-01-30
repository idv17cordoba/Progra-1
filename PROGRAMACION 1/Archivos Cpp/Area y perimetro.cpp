#include<iostream>

using namespace std;

void operacion(int a,int b,int &area,int&p)
{
    area=a*b;
    p=2*a+2*b;


}

int main()
{
    int x,y,area,p;
    cout <<"El largo del rectangulo: "<< endl;
    cin>> x;
    cout<<"El ancho:"<<endl;
    cin>>y;
    operacion(x,y,area,p);
    cout<<"\nAREA: "<<area << "\nPERIMETRO: "<<p;



	cin.ignore();
	cin.get();
	return 0;

}

