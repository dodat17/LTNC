#include <bits/stdc++.h>

using namespace std;

int count(int X, int N, int batdau)
{
	if (X == 0)
	{
		return 1;
	}
	int countWays = 0;
	for (int i = batdau; pow(i, N) <= X; i++)
	{
		countWays += count(X - pow(i, N), N, i + 1);
	}
	return countWays;
}
int main()
{
	int n, m;
	cin >> n >> m;
	cout << count(n, m, 1);
	return 0;
}