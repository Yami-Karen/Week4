#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned)time(0));
	int k = rand()%100 + 1;
	int n = rand()%3000 + 1;
	int f[n];
	for (int i = 0;i < n;i++) f[i] = rand()%100 + 1;
	cout << k << " " << n << endl;
	for (int i = 0;i < n;i++) cout << f[i] << " ";
	return 0;
}
