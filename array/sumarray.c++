#include<iostream>
using namespace std;

int main(){
    int arr[5] = {11,
                  22,
                  21,
                  -13,
                  43};
    int sum = 0;
    for (int i = 0; i<5; i++)
    {
        cout << arr[i]<<endl;
        sum = sum + arr[i];
    }
    cout << sum<<endl;
    return sum;
}