#include<iostream>
using namespace std;

class Distance{
    int meters;

    public:
        Distance(){//constructor
            meters = 0;
        }

        void display(){
            cout<<"meters value: "<<meters<<endl;
        }
        
        friend void add_value(Distance d);
        //friend 'function name' ('class name' &'class object')
};

void add_value(Distance d){
    d.meters = d.meters + 5;
}

int main()
{
    Distance d1; //meters = 0;
    d1.display(); //0;

    //friend function call;
    add_value(d1);//call by reference;

    d1.display();// 5;


    return 0;
}