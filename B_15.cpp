#include <iostream>
using namespace std;
bool out;
int rev(int x,int y,int* f[],int h,int w)
{
	if (x == h) out = true;
	if (out == true) return 1;
	if(y - 1 >= 1 && f[x + 1][y - 1] == 0 && f[x][y - 1] == 0)
	 {	 	
	 	rev(x + 1,y - 1,f,h,w);
	 }
	if (out == true) return 1;
	if (y + 1 <= w && f[x + 1][y + 1] == 0 && f[x][y + 1] == 0) 
	 {
	 	rev(x + 1,y + 1,f,h,w);
	 }
	if (out == true) return 1;
	if (f[x + 1][y] == 0)
	 {
	 	rev(x + 1,y,f,h,w);
	 }
	if (out == true) return 1;
	return 1;
}
int main()
{
	out = false;
	int w,h,x,y;
	cin >> w >> h;
	int* f[h + 1];
	for (int i = 1;i <= h + 1;i++) f[i] = new int;
	char c;
	for (int i = 1;i <= h;i++)
	 for (int j = 1;j <= w;j++)
	  {
	  	cin >> c;
	  	if (c == 'E') f[i][j] = 0;
	  	else if (c == 'R') f[i][j] = 2;
	  	else if (c == 'Y')
		  	{
		  		f[i][j] = 1;
		  		x = i;
		  		y = j;
		  	}
	  }  
	rev(x,y,f,h,w);
	if (out == true) cout << "YES";
	else cout << "NO";
	return 0;  
}
