
//write a c++ program that finds the volume of different shapes box (like rectangle, cylinder, cube) using function overloading.

#include<iostream>
using namespace std;

int volume(int);
long volume(long,int, int);
double volume (double, int);

int main(){
    cout<< volume(10)<<endl;
    cout<<volume(3,8)<<endl;
    cout<<volume(10,70,10)<<endl;
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


