#include<iostream>
using namespace std;

class Sample{
    int a, b;
    public:
    void set_value()
    {
        a = 25;
        b = 40;
    }

    friend float mean(Sample s); //friend function
};

float mean(Sample s){
    return (s.a+s.b)/2;
}

int main()
{
    Sample x;
    x.set_value();
    
    cout<<"mean value: "<<mean(x)<<endl;

    return 0;
}