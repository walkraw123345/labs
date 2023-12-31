﻿//С начала суток прошло N секунд (N — целое). Найти количество секунд, прошедших с начала последней минуты.
#include <stdio.h>
#include <cmath>

int task_9_1()
{
	int N = 623; // Задаем исходную секунду
	int s = (N % 60); // Вычисляем остаток от целочисленного деления на 60.
	printf_s("%i", s); // Выводим результат на экран
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Дни недели пронумерованы следующим образом: 0 — воскресенье, 1 — понедельник, 2 — вторник, . . . , 6 — суббота. Дано целое число K, лежащее в диапазоне 1–365. Определить номер дня недели для K-го дня года, если известно, что в этом году 1 января было понедельником.

int task_9_2()
{
	int K = 269; // Задаем день
	while (K >= 6) // До тех пор, пока значение больше 7, вычитаем по одной неделе.
		K -= 6;
	printf_s("%i", K); // Выводим результат на экран
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Дни недели пронумерованы следующим образом: 1 — понедельник, 2 — вторник, . . . , 6 — суббота, 7 — воскресенье. Дано целое число K, лежащее в диапазоне 1–365, и целое число N, лежащее в диапазоне 1–7. Определить номер дня недели для K-го дня года, если известно, что в этом году 1 января было днем недели с номером N


int task_9_3()
{
	int K = 53; // Задаем день
	int N = 2; // Задаем первый день недели в году
	while (K > 7) // До тех пор, пока значение больше 7, вычитаем по одной неделе.
		K -= 7;
	K = K + 2; // Также учитываем, что год начался с 3 дня недели.
	printf_s("%i", K); // Выводим результат на экран
	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Даны целые положительные числа A, B, C. На прямоугольнике размера A × B размещено максимально возможное количество квадратов со стороной C (без наложений). Найти количество квадратов, размещенных на прямоугольнике, а также площадь незанятой части прямоугольника. 


int task_9_4() {
	int A = 7; // Задаем стороны прямоугольника и квадрата.
	int B = 10;
	int C = 3;
	int N = ((A / C) * (B / C)); // Рассчитываем кол-во квадратов в прямоугольнике.
	int S = (A * B - N * C * C); // Рассчитываем оставшуюся площадь.
	printf_s("%i\n", N); // Выводим результаты
	printf_s("%i", S);
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Дан номер некоторого года (целое положительное число). Определить соответствующий ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год


int task_9_5() {
	int N = 1801;
	int Y = (N - 1) / 100; // Вычисляем век, с учетом того, что начало 18 века - 1801 год.
	printf_s("%i\n", Y); // Выводим результаты
	return 0;
}
