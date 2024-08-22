#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Value of a and b in swap function: "<<a<<" "<<b<<endl;
}

int main()
{
    int a = 5, b=7;
    cout<<"value of a and in main function before swap: "<<a<<" "<<b<<endl;
    swap(a , b);
    cout<<"value of a and in main function after swap: "<<a<<" "<<b<<endl;

    return 0;
}