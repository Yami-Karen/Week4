#include <iostream>
using namespace std;
bool out;
void fill(int x,int y,int* f[],int n)
{
	for (int i = 1;i <= n;i++)
				{
					f[x][i]++;
					f[i][y]++;
				}
			int row = x - 1;
			int collum = y - 1;
			while (row > 0 && collum > 0)
			 {
			 	f[row][collum]++;
			 	row--;
			 	collum--;
			 }
			row = x + 1;
			collum = y + 1;
			while (row <= n && collum <= n)
			 {
			 	f[row][collum]++;
			 	row++;
			 	collum++;
			 }
			row = x - 1;
			collum = y + 1;
			while (row > 0 && collum <= n)
			 {
			 	f[row][collum]++;
			 	row--;
			 	collum++;
			 } 
			row = x + 1;
			collum = y - 1;
			while (row <= n && collum > 0)
			 {
			 	f[row][collum]++;
			 	row++;
			 	collum--;
			 }
}
void empty(int x,int y,int* f[],int n)
{
	for (int i = 1;i <= n;i++)
				{
					f[x][i]--;
					f[i][y]--;
				}
			int row = x - 1;
			int collum = y - 1;
			while (row > 0 && collum > 0)
			 {
			 	f[row][collum]--;
			 	row--;
			 	collum--;
			 }
			row = x + 1;
			collum = y + 1;
			while (row <= n && collum <= n)
			 {
			 	f[row][collum]--;
			 	row++;
			 	collum++;
			 }
			row = x - 1;
			collum = y + 1;
			while (row > 0 && collum <= n)
			 {
			 	f[row][collum]--;
			 	row--;
			 	collum++;
			 } 
			row = x + 1;
			collum = y - 1;
			while (row <= n && collum > 0)
			 {
			 	f[row][collum]--;
			 	row++;
			 	collum--;
			 }
}
void rev(int* f[],int* p[],int n,int c)
{
	for (int i = 1;i <= n;i++)
	 for (int j = 1;j <= n;j++)
	 {
	 if (out == true) break;
	  if (f[i][j] == 0)
	   {
	   		p[i][j]++;
	   		fill(i,j,f,n);
	   		if (c == n) 
	   			{
	   				out = true;
	   				for (int a = 1;a <= n;a++)
	   				 {
	   				 	for (int b = 1;b <= n;b++) cout << p[a][b] << " ";
	   				 	cout << endl;
					 }
	   				exit;
		    	}
		    else rev(f,p,n,c + 1);
		    empty(i,j,f,n);
		    p[i][j]--;
	   }
	}
}
int main()
{
	out = false;
	int n;
	cin >> n;
	int* f[n + 1];
	int* p[n + 1];
	for (int i = 1;i <= n;i++) 
	{
		f[i] = new int;
		p[i] = new int;
	}
	for (int i = 1;i <= n;i++)
	 for (int j = 1;j <= n;j++)
	 {
		  f[i][j] = 0;
		  p[i][j] = 0;
	 }
	delete(f);
	delete(p);
	rev(f,p,n,1);
	if (out == true) cout << "yes";
	if (out == false) cout << "Not found";
	return 0;  
}
