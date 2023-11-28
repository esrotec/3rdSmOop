#include <iostream>
using namespace std;
void volume(int l, int w, int h )
{
     cout<<"Volume of a rectangle: "<<l*w*h<<endl;
}
void volume(double r, int h){
    cout<<"Volume of a cylinder: "<<3.1416*r*r*h<<endl;
}
void volume(int sl)
{
     cout<<"Volume of a cube: "<<sl*sl*sl<<endl;
}
int main()
{
    int l,w,h,a;
    double r;
    cout<<"Enter l rectangle : "<<endl;
    cin>>l;
    cout<<"Enter h rectangle : "<<endl;
    cin>>w;
    cout<<"Enter w rectangle : "<<endl;
    cin>>h;
    volume(l,w,h);
    cout<<"Enter r cylinder  :"<<endl;
    cin>>r;
    cout<<"Enter h cylinder  :"<<endl;
    cin>>h;
    volume(r,h);
    cout<<"Enter a cube:"<<endl;
    cin>>a;
    volume(a);

return 0;
}
