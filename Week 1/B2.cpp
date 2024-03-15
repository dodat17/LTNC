#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n = 3, sum = 0 ;
    while(n--){
        int x ; cin >> x;
        sum+= x;
    }
    cout << sum;
    return 0;
}
