#include<bits/stdc++.h>
using namespace std;

int main(){
	int queries, q;
	int y;
	string x;
	map<string, int> m;
	map<string, int>::iterator itr = m.begin();
	cin >> queries;

	for (int i = 0; i < queries; i++)
	{
	cin >> q;
	if (q==1)
	{
	cin >> x;
	cin >> y;
	m[x] +=y ;
	}
	else if(q==2)	
	{
	cin >> x;
	m.erase(x);
	}
	else if (q==3)
	{
	cin >> x;
	if(m.find(x) != m.end())
	{
	cout << m[x] << endl;
	}
	else
	{
	cout << 0 << endl;
	}
	}
	}
	return 0;
}