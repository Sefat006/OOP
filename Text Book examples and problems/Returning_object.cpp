#include<iostream>
using namespace std;


class Rectangle{
    int l;
    int w;
    public:
    Rectangle(int length, int width){
        l = length;
        w = width;
    }

    int getLength(){
        return l;
    }
    int getWidth(){
        return w;
    }

    
    void displayDimentions(){
        cout<<"length "<<l<<endl<<"width "<<w<<endl;
    }


    int area(){
        return l*w;
    }

    Rectangle calculateLargerArea(){
        return Rectangle(l*2, w*2);
    }
};

int main(){
    Rectangle smallRec(5,10);
    cout<<"original rectangle dimentions "<<endl;
    smallRec.displayDimentions();

    Rectangle largeRect = smallRec.calculateLargerArea();
    cout<<"larger ractangle dimentions "<<endl;
    largeRect.displayDimentions();

    cout<<"area of larger rectangle "<<largeRect.area()<<endl;

    return 0;
}

