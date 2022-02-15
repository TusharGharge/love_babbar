#include<iostream>
using namespace std;
bool update(int arr[], int n , int key){

    for (int i = 0; i < n;i++){
        if (key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {12, 23, 1, 45, 32};
    int key;
    cin >> key;

    bool ans = update(arr, 5, key);
    if (ans){
        cout << "number is present";
    }
    else{
        cout << "number is absent";
    }
    return 0;
}