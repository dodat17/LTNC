#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    size_t Q, y, x;
    cin >> Q;
    set<size_t> numbers;
    
    for(; Q > 0; Q--)
    {
        cin >> y >> x;
        
        switch (y)
        {
            case 1:
                numbers.insert(x);
                break;
                
            case 2:
                numbers.erase(x);
                break;
                
            case 3:
                {
                    auto it = numbers.find(x);
                    cout << (it == numbers.end() ? "No" : "Yes") << endl;
                }
                
                break;
        }
    }
    return 0;
} //4