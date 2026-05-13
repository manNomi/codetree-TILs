#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    // Please write your code here.

    int hour = c- a ;
    int min = d -b ;

    int result = hour *60 + min ;
    cout <<result ;

    return 0;
}