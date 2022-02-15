#include<iostream>
using namespace std;


int duplication(int arr[],int n){

    int ans = 0;
    for ( int i = 0; i < n; i++)

    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < n;i++){
        ans = ans ^ i;
        cout << ans << endl;
    }
    return ans;
}

int main(){

    int arr[6] = {1, 2, 3, 4, 2,3};

    int ans = duplication(arr, 6);
    cout<< ans;
    return 0;
}