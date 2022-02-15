//calculator using switch statment

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout <<"Enter the first number";
    cin>> a;

    cout<<"Enter the second number";
    cin>>b;
    char op;
    cout<<"enter the operation";
    cin>>op;

    switch(op){
        case '+':cout<< (a+b)<<endl;
                break;

        case '-':cout<<(a-b)<<endl;
                break;

        case '/':cout<<(a/b)<<end;
                break;
        case '*':cout<<(a*b)<<endl;
                break;

        case '%':cout<<(a%b)<<endl;
                break;

        default "entered operation has been wronged";
    }
}