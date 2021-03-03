#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int f[n];
	for (int i = 0;i < n;i++) cin >> f[i];
	for (int i = 0;i < n - 2;i++)
	 for (int j = i + 1;j < n - 1;j++)
	  if (f[i] + f[j] == 0) cout << f[i] << "  " << f[j] << endl;
	return 0;  
} 
