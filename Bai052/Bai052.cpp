#include <iostream>
#include <cmath>
using namespace std;

float Tong(int, int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int i = 1;

	cout << "So luong cac uoc so la: ";
	cout << Tong(n, i, dem);
	return 0;
}
float Tong(int nn, int ii, int demdem)
{
	while (ii <= nn)
	{
		if (nn % ii == 0)
			demdem++;
		ii = ii + 1;
	}
	return demdem;
}