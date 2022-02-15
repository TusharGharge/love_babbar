#include<iostream>
using namespace std;

int power(int a,int b){
    int ans;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main(){
    int a, b;
    cin >> a >> b;
    power(2,3);

    return 0;
}