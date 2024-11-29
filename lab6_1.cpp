#include<iostream>
using namespace std;

int main(){
    int x = 1;
    int y;
    int n = 0;
    int m = 0;
    while(x != 0){
        cout << "Enter an integer: ";
        cin >> y;
        x = y;
        if(y%2==0 and y != 0){
            n++;
        } else{m++;}
    }
    cout << "#Even numbers = " << n << endl;
    cout << "#Odd numbers = " << m-1;
    return 0;
}