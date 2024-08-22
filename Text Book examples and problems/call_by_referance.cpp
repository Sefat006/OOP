
// call by reference;

#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Value of a and b in swap function "<<endl;

}
int main()
{
    int a = 5 , b = 7; 
    //we just transferred the address of a and b in the swap function;
    //in that way , it will swap with the addresses of a and b; 

    cout<<"value of a and b in main function before swap: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"value of a and b after swap: "<<a <<" and "<<b<<endl;

    return 0;
}