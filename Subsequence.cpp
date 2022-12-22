#include <iostream> 
#include <math.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, min, n;
	n = 0;
	cout << "\nÂâåäèòå ÷èñëî: ";
	cin >> a;
	while ((a == 0) && (n != 4))
	{
		cout << "\nÂû âåëè 0, ââåäèòå ÷èñëî ñíîâà: ";
		cin >> a;
		n++;
	}
	min = a;
	while (a != 0)
	{
		cout << "\nÂâåäèòå ÷èñëî: ";
		cin >> a;
		if (a < min && a != 0)
			min = a;
	}
	if (min == 0)
	{
		cout << "íóëåâàÿ ïîñëåäîâàòåëüíîñòü";
	}
	else {
		cout << "min = " << min << endl;
	}
	return 0;
}