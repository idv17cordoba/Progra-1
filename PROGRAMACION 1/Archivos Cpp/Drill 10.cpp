#include "Libreria.h"

struct Point
    {
        double x;
        double y;
        Point() :x(0), y(0) { };
        Point(int xx, int yy) :x(xx), y(yy) { }

    };

ostream& operator<<(ostream& os, const Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}
bool operator==(const Point& p1, const Point& p2)
{
    return p1.x==p2.x && p1.y==p2.y;
}

bool operator!=(const Point& p1, const Point& p2)
{
    return !(p1==p2);
}
void print_vector(const vector<Point>& points)
{
    for (int i = 0; i<points.size(); ++i)
        cout << points[i] << endl;
}

istream& operator >>(istream& is, Point& p)
{
    double p1,p2;
    is>>p1>>p2;
    p = Point(p1,p2);
    return is;
}
void compare_vectors( vector<Point>& points1, vector<Point>& points2)
{
    if (points1.size() != points2.size())
        error("Something's wrong!");
    for (int i = 0; i<points1.size(); ++i) {
        if (points1[i] != points2[i])
            error("Something's wrong!");
    }
}

int main()
{
    vector<Point> original_points;
    vector<Point> p_points;

     for (int i = 0; i<7; ++i) {
        Point p;
        cin >> p;
        original_points.push_back(p);
    }

    cout << "\nOriginal points:\n";
    print_vector(original_points);


 cout<<"Archivo al cual desea escribir:";
 string oname;
 cin>>oname;
 ofstream ost {oname};
 if(!ost)error("No se pudo abrir el archivo ",oname);
    for (int i = 0; i<original_points.size(); ++i)
 {
     ost << original_points[i] << endl;
 }

 cout<<"Archivo al cual quiere copiar:";
 string iname;
 cin>>iname;
 ifstream is{iname};
 if(!is)error("No se pudo abrir el archivo",iname);

 Point p;

 while(is>>p)
 {

     p_points.push_back(p);
 }

 cout << "\nData from ifstream:\n";
    print_vector(p_points);
    cout << "\nOriginal data:\n";
    print_vector(original_points);


compare_vectors(original_points,p_points);


    keep_window_open();

    return 0;


}
