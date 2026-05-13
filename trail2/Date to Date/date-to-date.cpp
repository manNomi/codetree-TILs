#include <iostream>
#include <vector>

using namespace std;

vector<int> monthly = {31,28,31,30,31,30,31,31,30,31,30,31};
int main() {
    // Please write your code here.
    int m1 , d1, m2, d2 ; 
    cin >>m1>>d1>>m2>>d2;
    int result = 0;

    if(m1==m2){
        int date = d2 - d1 ; 
        cout << date+1 ; 
        return 0 ; 
    }

    result = result + monthly[m1-1]- d1 + d2;
    for (int i = m1+1 ; i < m2 ; i++){
        result+= monthly[i-1];
    }
    cout <<result+1 ; 
    
    return 0;
}