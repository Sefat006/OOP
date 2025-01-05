
// call by reference;

#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a; // temp = 5; now a(null)
    a = b;     // a(null) = b(7) so a = 7
    b = temp; // b = temp(5)
    cout<<"Value of a and b in swap function "<<endl;

}
int main()
{
    int a = 5 , b = 7; 
    //we just declared the value of a and b in the swap function;
    //in that way , it will swap with the addresses of a and b; 

    cout<<"value of a and b in main function before swap: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"value of a and b after swap: "<<a <<" and "<<b<<endl;

    return 0;
}