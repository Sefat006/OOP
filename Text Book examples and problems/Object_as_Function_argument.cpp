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

    // because l and w are in private
    // public hoile direct kora jaito
    int getLength(){
        return l;
    }
    int getWidth(){
        return w;
    }

    void displayDimentions(){
        cout<<"length: "<<l<<"\t"<<"width: "<<w<<endl;
    }
};

int calculateArea(Rectangle rect) {
    return rect.getLength() * rect.getWidth();
}

int main(){
    Rectangle myRec(10,20);

    myRec.displayDimentions();

    int area = calculateArea(myRec);

    cout<<"the area of rectangle" << area<<endl;

}