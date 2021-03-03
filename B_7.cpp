#include <iostream>
#include <string>
using namespace std;
void rev(string print,char f[],int length,int n)
{
	for (int i = 0;i < n;i++)
	 {
	 	print += f[i];
	 	if (length == 2 || length == 3) cout << print << " ";
	 	if (length <= 2) rev(print,f,length + 1,n);
	 	print.erase(print.length() - 1);
	 }
}
using namespace std;
int main()
{
	string s;
	cin >> s;
	char f[s.length()];
	for (int i = 0;i < s.length();i++) f[i] = s[i];
	string print;
	rev(print,f,1,s.length());
	return 0;
}
