#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int f[n + 1];
	for (int i = 1;i <= n;i++) f[i] = 0;
	f[1] = 1;
	for (int i = 2;i <= n;i++)
	 for (int j = 2;j <= sqrt(i);j++)
	  if (i%j == 0)
	   {
	   		f[i] = 1;
	   		break;
	   }
	for (int i = 1;i <= n;i++)   
	 if (f[i] == 0) cout << i << " ";
	return 0;
}
