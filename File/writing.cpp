#include<iostream>
#include<fstream>
using namespace std;

int main(){

    // ofstream: This class helps create and write the data to the file obtained from the program’s output. It is also known as the input stream.

    ofstream file("anil.txt"); //passing the file name which was already exist;

    if(!file.is_open()){
        cout<< "unable to open the file";
    }
    else{
        // writing on the file;
        file << "Learning Lad Rocks"<<endl;
        file<<"We have more than 200 videos";
        file.close();

        cout<<"successfully written to the file, open it and check it out";
    }
}