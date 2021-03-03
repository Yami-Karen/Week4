#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		int c;
		cin >> c;
		cout << c;
	}
	else if (n > 1)
	{
		int f[n];
		for (int i = 0;i < n;i++) cin >> f[i];
		sort(f,f + n);
		for (int i = 0;i < n;i++) cout << f[i] << " ";
	}
	return 0;
}
