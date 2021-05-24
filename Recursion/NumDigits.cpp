#include<iostream>
#include "Solution.h"
using namespace std;

int count(int n){
    if(n>-1 && n<10){
        return 1;
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}


int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}


