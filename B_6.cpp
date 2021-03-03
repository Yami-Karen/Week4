#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int f[n];
	for (int i = 0;i < n;i++) cin >> f[i];
	for (int i = 0;i < n - 3;i++)
	 for (int j = i + 1;j < n - 2;j++)
	  for (int k = j + 1;k < n - 1;k++)
	   if (f[i] + f[j] + f[k] == 0) cout << f[i] << "  " << f[j] << "  " << f[k] << endl;
	return 0;   
}
