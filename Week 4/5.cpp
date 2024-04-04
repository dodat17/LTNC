#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    multiset<int> st;
    int n; cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x ;  cin >> x;
        st.insert(x);
        
    }
    for(int i = 0 ; i <= n ;i++){
        int x ; cin >> x;
        if(!st.count(x)){
            cout << x;
            return 0;
        }
    }
    return 0;
}
