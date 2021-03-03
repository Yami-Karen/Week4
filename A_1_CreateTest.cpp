#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	srand((unsigned)time(0));
	int n = rand()&100 + 1;
	cout << n << endl;
	int f[n];
	for (int i = 0; i < n; i++) f[i] = rand() % 100 + 1;
	for (int i = 0; i < n; i++) cout << f[i] << " ";
	cout << endl;
	sort(f,f + n);
	for (int i = 0; i < n; i++) cout << f[i] << " ";
	return 0;
}
