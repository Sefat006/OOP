

//write a c++ program that finds the volume of different shapes box (like rectangle, cylinder, cube) using function overloading.

#include<iostream>
using namespace std;

int volume(int);
long volume(long,int, int);
double volume (double, int);

int main(){
    int s,b,h,height;
    double r;
    long l;

    cout<<"for cube enter s"<<endl;
    cin>>s;
    cout<<"for rectangle enter r and h"<<endl;
    cin>>r>>h;
    cout<<"for triangle enter l,b,height"<<endl;
    cin>>l>>b>>height;

    cout<<"cube"<< volume(s)<<endl;
    cout<<"rectangle"<<volume(r,h)<<endl;
    cout<<"triangle"<<volume(l,b,height)<<endl;
    return 0;
}

int volume(int s){

    return (s*s*s);
}
double volume(double r, int h)
{

    return (r*h);
}

long volume(long l, int b,int height)
{

    return (l*b*height);
}


