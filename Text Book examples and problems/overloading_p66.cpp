#include<iostream>
using namespace std;

int volume(int s){
    return s*s*s;
}

double volume(double r, int h){
    return (3.1416 * r*r*h );
}

long volume(long l, int b, int height){
    return l*height*b;

}


int main()
{
    cout<<volume(10)<<endl;
    cout<<volume(2,3,4)<<endl;
    cout<<volume(101,75,15)<<endl;
    

    return 0;
}