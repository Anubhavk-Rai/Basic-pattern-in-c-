#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int ascii=ch;
    if (97 <=ascii<=122 )
    {
       cout<<"This is lowercase letter";
    }
    else if(65<=ascii<=90){
        cout<<"This is uppercase letter";
    }
    else{
        cout<<"It is numeric";
    }
}