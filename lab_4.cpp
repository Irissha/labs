#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int mas[200], k = 0;
	int s_mas[200];
	int t_mas[200];
	for (int i = 0; i < 150; i++) {
		mas[i] = rand() % 10; //от 0 до 9
	}

	for (int i = 0; i < 100; i++) {
		cout << mas[i] << " ";
	}

	cout << "\n";
	cout << "\n";


	for (int i = 0; i < 100; i++)
	{
		s_mas[i] = mas[i];
		if (mas[i] == 0)
		{
			for (int p = i; p < 100; p++) {
				s_mas[p] = mas[p + 1];

			}
			goto next_l;     //флаг перемещения
		}

	}


next_l:
	int p = 0;
	for (int i = 0; i < 100; i++) {
		p++;
		t_mas[p] = s_mas[i];
		if (s_mas[i] != 0) {
			if (s_mas[i] % 2 == 0) {
				p++;
				t_mas[p] = int(s_mas[(i - 1)]) + 2;

			}
		}

	}
	for (int i = 1; i < p; i++) {
		cout << t_mas[i] << " ";
	}

	return 0;
}