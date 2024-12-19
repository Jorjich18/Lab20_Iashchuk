#include <iostream>
using namespace std;

double fun(double a[], int n, int &count)
{
	count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[0]) count++;
	return count;
}

int main()
{
	int n = 0, i, j, kol = 0, count;
	cout << "Input count of elements: ";
	cin >> n;
	double* a = new double[n];
	cout << "Input " << n << " elements:\n";
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n; i++)
		if (a[i] >= 10 && a[i] <= 25) kol++;
	double* b = new double[kol];
	for (j = 0, i = 0; i < n; i++)
		if (a[i] >= 10 && a[i] <= 25) {
			b[j] = a[i];
			j++;
		}
	cout << "Dynamic array:\n";
	for (i = 0; i < kol; i++)
		cout << b[i] << " ";
	cout << endl;
	fun(b, kol, count);
	cout << "Count of elements of dynamic array: " << count << endl;
	delete[]a; delete[]b;
	return 0;
}