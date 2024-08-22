
//write a c++ program to find the largest number between two private members of two different classes using friend function;

#include<iostream>
using namespace std;

class B;  // Forward declaration of class B to be used in the friend function.

class A {
    int a;  // Private member variable
    public:
    void x() {  // Method to take input and assign to 'a'
        cout << "Enter the 1st value: ";
        cin >> a;
    }

    friend int largest(A a, B b);  // Friend function declaration
};

class B {
    int b;  // Private member variable
    public:
    void y() {  // Method to take input and assign to 'b'
        cout << "Enter the 2nd value: ";
        cin >> b;
    }

    friend int largest(A a, B b);  // Friend function declaration
};

// Friend function definition to find the largest value
int largest(A a, B b) {
    if (a.a > b.b) {
        cout << "a is largest" << endl;
    } else {
        cout << "b is the largest" << endl;
    }
    return (a.a > b.b) ? a.a : b.b;  // Returning the largest value (optional)
}

int main() {
    A x1;
    B y1;

    x1.x();  // Call method to take input for A
    y1.y();  // Call method to take input for B

    largest(x1, y1);  // Call the friend function to determine the largest value
    return 0;
}
