
// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include<iostream>
#include<string.h>
using namespace std;

class Person{
    private:
        int a;
        char n, c;

    public:
        char name[20], country[20];
        int age;
        void function(){
            char name[20] = n;
            age = a;
            char country[20] = c;
            cout<<"input age=";
            cin>>age;
            cout<<endl;
            cout<<"input name : ";
            gets(name);
            cout<<endl;
            cout<<"input country name : ";
            gets(country);
            cout<<endl;
        }

};

int main(){
    Person obj;
    obj.function();
    cout<< obj.name<<endl<< obj.age<<endl<<obj.country;
    return 0;
}
