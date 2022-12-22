#include <cstdlib>                      //библиотека для вычисления модуля                    
#include <iostream>
#include <math.h>
#define E 10e-4
#define PI 3.14159265  //define-обозначение глобальной переменой  
using namespace std;
int main()
{
	double	e = 0.0001;		//погрешность
	double	a = PI / 5;		//начальное Х
	double	b = 9 * PI / 5;		//конечное Х
	int		k = 10;			//количество интервалов по Х
	int		n = 40;			//фиксированное число итераций 
	int		i1, i2, i3;		//переменные для циклов
	double	h = (b - a) / k;	//шаг по Х
	double	x;				//текущий Х
	double	xn;				//накапливаемый Х для очередного сложения в итерациях
	double	sn;				//один элемент ряда
	double	S1;				//сумма ряда из n элементов
	double	S2;				//сумма ряда, пока очередной элемент больше погрешности
	double	f;				//точное значение функции

	for (i1 = 0; i1 <= k; i1++)
	{
		x = a + i1 * h;
		f = -log(fabs(2 * sin(x / 2))); //fabs-модуль

		for (S1 = 0, xn = -1, i2 = 1; i2 <= n; i2++)
		{
			xn *= -x * x;
			S1 += (cos(i2 * x) / i2);
		}
		for (S2 = 0, xn = -1, sn = 1, i3 = 1; fabs(sn) >= e; i3++)
		{
			xn *= -x * x;
			sn = (cos(i3 * x) / i3);
			S2 += sn;
		}
		printf("x=%.2f SN=%f SE=%f Y=%f\n", x, S1, S2, f); // вывод краткий (вместо cout)
	}
