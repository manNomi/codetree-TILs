#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A , B ,C ;
    cin >>A >> B >>C ;

    if(A<=10 ){
        cout << -1;
        return 0;
    }
    if ( A ==11 && B<11){
        cout << -1;
        return 0;
    }
    if( A==11 && B==11 && C<11){
        cout << -1;
        return 0;
    }

    int date = A -11 ; 
    int hour = B - 11 ;
    int min = C -11 ;

    date = date * 24 * 60;
    hour = hour *60;

    int result = date + hour + min ; 
    cout << result ;


    return 0;
}