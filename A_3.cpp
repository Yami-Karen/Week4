#include <iostream>
using namespace std;
int main()
{
	int k,n;
	cin >> k >> n;
	int f[n];
	for (int i = 0;i < n;i++) cin >> f[i];
	if (k < f[0] || k > f[n - 1]) 
	{
		cout << "Not found";
		return 1;
	}
	else 
	{
		int begin = 0,end = n - 1;
		int pos = -1;
		while (true)
		{
			
			if (pos == (begin + end)/2) break;
			pos = (begin + end)/2;
			if (k == f[pos]) break;
			else if (k < f[pos]) end = pos;
			else if (k > f[pos]) begin = pos;
		}
		if (k == f[pos]) 
		{
			begin = pos;
			end = pos;
			while (f[begin - 1] == k) begin--;
			while (f[end + 1] == k) end++;
			for (int i = begin;i <= end;i++) cout << i << " ";
				
		}
		else cout << "Not found";
	}
	return 0;
}
