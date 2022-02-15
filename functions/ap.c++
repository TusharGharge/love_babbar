#include<iostream>
using namespace std;

int ap(int n){
    int ans = 0;
    ans = ((3 * n) + 3);
    cout << ans;
    return ans;
}

int main(){
    int n;
    cin >> n;
    ap(n);
}