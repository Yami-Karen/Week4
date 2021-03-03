#include <iostream>
using namespace std;
int main()
{
	int k,n;
	cin >> k >> n;
	int read;
	for (int i = 0;i < n;i++) 
	{
		cin >> read;
		if (k == read) cout << i + 1 << " ";
	}
	return 0;	
}
