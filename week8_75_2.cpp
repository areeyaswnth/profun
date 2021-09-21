#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int a,b;
    ifstream readfile;
    readfile.open ("a.txt");
    readfile>>a>>b;
    ofstream myfile("b.txt");
    myfile<<a+b;
    myfile.close();
    readfile.close();
    return 0;
 }