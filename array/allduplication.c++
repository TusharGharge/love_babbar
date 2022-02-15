#include<iostream>
using namespace std;

int allduplications(int arr[], int n){
    int list[3] = {};
    for (int i = 0; i < n;i++){
        if (arr[i]==i){
            list[i] = arr[i];
        }
    }
    for (int j = 0; j < n;j++){
        cout << arr[j]<<endl;
    }
    return 0;
}

int main()
{
    int arr[8] = {4, 3, 2, 7, 8, 2, 3, 1};

    int ans = allduplications(arr, 8);
    cout << ans << endl;
    return 0;
}