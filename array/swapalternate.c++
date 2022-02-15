#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5;i=i+2){
        if (i+1<5){
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int j = 0; j < 5;j++){
        cout << arr[j] << endl;
    }
        return 0;
}