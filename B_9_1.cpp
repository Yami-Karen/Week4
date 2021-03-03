#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int f[n + 1][n + 1];
	for (int i = 1;i <= n;i++)
	 for (int j = 1;j <= n;j++)
	  f[i][j] = 0;
	int x,y;
	for (int i = 0;i < n;i++)
	 {
	 	cin >> x >> y;
	 	if (f[x][y] == 1) 
	    	{
	 			cout << "yes";
	 			return 1;
			}
		else 
		 {
		 	for (int i = 1;i <= n;i++)
				{
					f[x][i] = 1;
					f[i][y] = 1;
				}
			int row = x - 1;
			int collum = y - 1;
			while (row > 0 && collum > 0)
			 {
			 	f[row][collum] = 1;
			 	row--;
			 	collum--;
			 }
			row = x + 1;
			collum = y + 1;
			while (row <= n && collum <= n)
			 {
			 	f[row][collum] = 1;
			 	row++;
			 	collum++;
			 }
			row = x - 1;
			collum = y + 1;
			while (row > 0 && collum <= n)
			 {
			 	f[row][collum] = 1;
			 	row--;
			 	collum++;
			 } 
			row = x + 1;
			collum = y - 1;
			while (row <= n && collum > 0)
			 {
			 	f[row][collum] = 1;
			 	row++;
			 	collum--;
			 } 
		 }
		for (int i = 1;i <= n;i++)
		 {
		 	for (int j = 1;j <= n;j++) cout << f[i][j] << " ";
		 	cout << endl;
		 }	 
	 }
	cout << "no";
	return 0;	 
}
