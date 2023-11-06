#include<iostream>
using namespace std;
class Point
{
    public:
        Point();

        int x ;
        int y ;

        void increase(int i);

};

Point::Point()
{
    cout<<"The constructor works"<<endl;
    x = 0;
    y = 0;

}
void Point::increase(int i)
{
    cout<<"Currently X is "<<x<<" and Y is "<<y<<endl;
    x+=i;
    y+=2*i;
    cout<<"Now X is "<<x<<" and Y is "<<y<<endl;
}


int main()
{
    Point a;
    a.increase(10);
    Point *s = &a;
    cout<<"The adress where a starts at "<<s<<endl;
    (*s).increase(10);
    

    Point* sample = new Point;
    cout<<sample<<endl;
    sample->increase(20);

    delete sample;
    sample->increase(5);

    delete s;
    s->increase(5);

    

}