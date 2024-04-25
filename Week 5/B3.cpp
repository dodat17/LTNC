#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,ele;
    vector<int>v;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ele;
        v.push_back(ele);
    } 
    int p,s,e;
    cin>>p;
    cin>>s>>e;
    v.erase(v.begin()+p-1);
    v.erase(v.begin()+s-1,v.begin()+e-1);
    cout<<v.size()<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
    return 0;
} // 2
