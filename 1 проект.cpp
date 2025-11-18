#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double x, y;

	ifstream fin("in3.dat");
	fin >> x >> y;
	fin.close();

	cout << "Вычисление выражения." << endl;
	cout << "Входные данные из файла: x = " << x << " y = " << y << endl;

	double x2 = x * x;
	double y2 = y * y;
	double xy = x * y;
	double term1 = 3 * x2 * y2;
	double term2 = 2 * xy * y;
	double term3 = 7 * x2 * y;
	double term4 = 15 * xy;
	double term5 = 2 * x2;

	double result = term1;
	double result = term1 - term2;
	double result = result - term3;
	double result = result - 4*y2;
	double result = result + term4;
	double result = result + term5;
	double result = result - 3 * x;
	double result = result + 10 * y;
	double result = result + 6;

	ofstream fout ("out3.dat");
	fout << result;
	fout.close();

	cout << "Результат будет записан в файл out3.dat" << endl;
	
	return 0;

}
