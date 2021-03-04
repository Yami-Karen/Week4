#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		bool check = false;
		int k;
		cin >> k;
		int f[k + 1];
		f[0] = 0;
		for (int j = 1;j <= k;j++)
		 {
		 	cin >> f[j];
		 	f[j] += f[j - 1];
		 }
		if (f[k] == 0) {cout << "YES" << endl;check = true;}
		else 
		 {
		 	for (int j = 1;j <= k;j++)
		 	 if (f[j] == f[k] - f[j]) 
			   {
			   		cout << "YES" << endl;
			   		check = true;
			   		break;
			   }
		 }
		if (check == false) cout <<"NO" << endl;
	}
}
//Test tren web sai co oi
