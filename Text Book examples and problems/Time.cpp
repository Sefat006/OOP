#include<iostream>
using namespace std;


class Time{
    int h, m;
    public:
    void get_time(){
        int hour,minute;
        hour = h;
        minute = m;
    }
    void put_time()
    {
        cout<<h<<" hours and "<<m<<" minutes"<<endl;

    }
    
};

int main()
{

    return 0;
}