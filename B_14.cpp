#include <iostream>
using namespace std;
int main()
{
	int a[101],b[101];
	for (int i = 1;i <= 100;i++) 
	{	
		  a[i] = 0;
		  b[i] = 0;
	}
	int n,read;
	cin >> n;
	for (int i = 1;i <= n;i++)
	 {
	 	cin >> read;
	 	a[read]++;
	 }
	for (int i = 1;i <= n + 1;i++) 
	 {
	 	cin >> read;
	 	b[read]++;
	 }
	for (int i = 1;i <= 100;i++) 
	 if (a[i] != b[i]) 
	  {
	  		cout << i;
	  		breal;
	  }
	return 0; 
}
