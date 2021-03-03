#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n],b[n];
	int count = 0;
	for (int i = 0;i < n;i++) 
	{
		cin >> a[i] >> b[i];
		if (a[i] > b[i]) count++;
	}
	if (count == n) 
	{
		cout << "Yes";
		return 1;
	}
	sort(a,a + n);
	sort(b,b + n);
	for (int i = 0;i < n;i++)
		if (a[i] < b[i]) 
		 {
		 	cout << "No";
		 	return 1;
		 }
	cout << "Yes";
	return 0;
}
//Chac chan la co cach toi uu hon va nhanh hon nhung em chua nghi ra :v
