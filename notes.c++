#include<iostream>
using namespace std;
int main()
{
    int am, remainder, rs100, rs50, rs20, rs1 = 0;
    cin >> am;
    switch(1){
        case 1:
            rs100=am / 100;
            remainder = am % 100;
            cout << "the notes of hundread " << rs100<<endl;

        case 2:
            rs50 = remainder / 50;
            remainder =remainder % 50;

            cout << "the notes of fifty" << rs50<<endl;
        case 3:
            rs20 = remainder / 20;
            remainder = remainder % 20;
            cout << "the notes of twenty " << rs20<<endl;
        case 4:
            rs1 = remainder / 1;
            remainder = remainder % 1;
            cout << "the notes of one" << rs1<<endl;

        default:
            cout << "notes are" << endl;
        }
}