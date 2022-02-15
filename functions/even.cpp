#include<iostream>
using namespace std;

int eveodd(int no){
    if (no%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    return 0;
}

int main(){
    int no = 0;
    cin >> no;
    eveodd(no);
}