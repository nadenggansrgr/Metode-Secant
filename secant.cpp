#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float f(float x)
{
	return (pow(x,3) - 6*pow(x, 2)) + 11 * x - 5.9;
}

int main ()
{
	float x1, x2, x3, error, err;
	int i = 1;

	cout << " \t Program Perhitungan Secant " << endl;
	cout << " ================================================== " << endl;
	cout << " F(x) = x^3 - 6x^2 + 11x - 5.9 = 0 " << endl;
	cout << " \n Titik Pertama \t\t: ";
	cin >> x1;
	cout << " Titik Kedua \t\t: ";
	cin >> x2;
	cout << " Toleransi Error \t: ";
	cin >> error;
	cout << endl;

	cout << " Perhitungan Secant " << endl;
	cout << "==========================================================================================================================================" << endl;
	cout << "|     i     |       x1       |         x2         |         x3         |        f(x1)        |        f(x2)        |        f(x3)        | " << endl;
	cout << "==========================================================================================================================================" << endl;

	do
	{
		x3 = x2 - (f(x2) * (x2 - x1) / f(x2) - f(x1));
		err = abs(f(x3));
		cout << "| " << setiosflags(ios::left) << setw(10) << setprecision(3) << i << "|";
		cout << " " << setiosflags(ios::left) << setw(15) << setprecision(3) << x1 << "|";
		cout << " " << setiosflags(ios::left) << setw(19) << setprecision(3) << x2 << "|";
		cout << " " << setiosflags(ios::left) << setw(19) << setprecision(3) << x3 << "|";
		cout << " " << setiosflags(ios::left) << setw(20) << setprecision(3) << f(x1) << "|";
		cout << " " << setiosflags(ios::left) << setw(20) << setprecision(3) << f(x2) << "|";
		cout << " " << setiosflags(ios::left) << setw(20) << setprecision(3) << f(x3) << "|";
		cout << endl;

		x1 = x2;
		x2 = x3;
		i++;
	}
	while (err > error);
		cout << " \n Banyak Iterasi : " << i - 1;
		cout << " \n Titik Temu \t: " << x2 << endl;
}
