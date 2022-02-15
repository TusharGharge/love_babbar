#include<iostream>
using namespace std;

int findunique(int arr[],int n){
    int ans = 0;
    for (int i = 0; i < n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){

    int arr[5] = {1, 2, 3, 2, 1};
    int ans=findunique(arr ,5);
    cout << ans;
    return 0;
}