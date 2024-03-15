#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int b;vector<int>xa;
    cin >> b;
    for (int u = 0 ; u < b ; u++){int x; cin >> x;xa.push_back(x);}
    for ( int k = b-1 ; k >= 0 ; k--) cout << xa[k] << " ";
    return 0;
}
