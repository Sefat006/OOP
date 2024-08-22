#include<iostream>
#include<cmath>

using namespace std;
const double pi = 3.1416;


class Circle{
private:
    double radius;

public:
    double red;
    void circle(){
        radius = red;
        cout<<"input radius: ";
        cin>> radius;

    }
    double circleArea(){
     double area= pi*pow(radius, 2);
     return area;
    }

    double circleCir()
    {
        double circumference= 2*pi*radius;
        return circumference;
    }



};

int main()
{
    //double radius;
    Circle ob;
    ob.circle();
//    cin>>radius;
    cout<<"area is : "<<ob.circleArea()<<endl;
    cout<<"circumference is : " <<ob.circleCir()<<endl;

    return 0;
}

