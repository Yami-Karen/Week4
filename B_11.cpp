#include <iostream>
#include <string>
using namespace std;
string rev(string s)
{
	string m = s;
	for (int i = 0;i < s.length();i++)
	 m[i] = s[s.length() - i - 1];
	return m; 
}
int main()
{
	int n,m = 0;
	cin >> n;
	string f[n],read;
	for (int i = 0;i < n;i++)
	 {
	 	cin >> read;
	 	if (read.length()%2 == 1)
	 	 {
	 	 	f[m] = read;
	 	 	m++;
		 } 
	 }
	for (int i = 0;i < m - 1;i++) 
	 for (int j = i + 1;j < m;j++)
	  if (f[i].length() == f[j].length())
	   {
	   	 if (f[i] == rev(f[j]))
	   	  {
	   	 	cout << f[i].length() << " " << f[i][(f[i].length() - 1)/2];
	   	 	return 1;
		  }
	   }
	cout << "Not found";
	return 0;
}
