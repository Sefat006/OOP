#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream file; //class obj;

    //obj.open('')
    // ios :: in = file opened in reading mode
    // ios::out = file opened in write mode
    file.open("anil.txt", ios :: in | ios :: out | ios :: trunc); //creating a text file

    if(!file.is_open()){
        cout<<"error while opening file";
    }else{
        cout<<"file opened successfully";

        file.close(); // file closed
    }

    return 0;
}