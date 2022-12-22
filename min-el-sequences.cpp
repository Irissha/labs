#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, min, n = 0, b = 0;
	while (1 && b == 0)
	{
		cout << "\nвведите a" << endl;
		cin >> a;
		if (a == 0)
		{
			cout << "\nпервый элемент должен быть отличен от нуля";
			n++;
		}
		else
		{
			min = a;
			while (a != 0)
			{
				cout << "введите a" << endl;
				cin >> a;
				if (a != 0 && a < min)

					min = a;
			}
			cout << "min =" << min;
			n = 0;
		}
		if (n == 3)
		{
			cout << ",программа остановлена";
			b = 1;
		}
	}
	return 0;
}