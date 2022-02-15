#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n;i++){
        fact = fact * i;
    }
    return fact;
}

int ncr(int f, int r){
    int n = factorial(f);
    int d = factorial(r) * factorial(f - r);
    int ans = n / d;

    return ans;
}

int main(){
    int n=0, f=3, r = 1,a=0;
    cin >> n;
    int ans=factorial(n);
    cout << ans;
    a=ncr(f, r);
    cout << a;
    return 0;
}