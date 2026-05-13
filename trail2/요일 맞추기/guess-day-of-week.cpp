#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> days = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
vector<int> monthly = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    // Please write your code here.

    int dayInt = 1;

    int m1 , d1 , m2 , d2 ; 
    cin >>m1 >>d1>>m2>>d2 ; 

    int date =0 ;
    

    if(m1==m2){
        date = d2-d1;
    }
    else if (m1>m2){
        date += monthly[m2]-d2+d1;
        for (int i = m2+1 ; i<m1;i++){
            date += monthly[i];
        }
        date *= -1;
    }
    else {
        date += monthly[m1]-d1+d2;
        for (int i = m1+1 ; i<m2;i++){
            date += monthly[i];
        }
    }

    date = (dayInt + date % 7 + 7) % 7;
    cout << days[date];

    return 0;
}