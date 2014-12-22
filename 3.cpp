Programming
===========
/*
	Åñòü ìàòðèöà 5 x 5, íóæíî ñäåëàòü òàê, ÷òî áû çíà÷åíèå êàæäîé ÿ÷åéêè çàìåíÿëîñü íà ñðåäíåå àðèôìåòè÷åñêîå ýòîé ÿ÷åéêè è âñåõ ÿ÷ååê âîêðóã. 
	Ïðè ýòîì, êàæäàÿ ñëåäóþùàÿ ÿ÷åéêà ïðèíèìàåò âî âíèìàíèå èçìåíåíèÿ ïðåäûäóùèõ
*/

#include "stdafx.h"

#define N	5

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int A[N][N];
	cout << "Ââåäèòå ìàòðèöó A 5x5:" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0, summ = 0, count = 1; j < N; j++)
		{
			if (i - 1 > 0 && j - 1 > 0)
			{
				summ += A[i - 1][j - 1];
				count++;
			}
			if (i - 1 > 0)
			{
				summ += A[i - 1][j];
				count++;
			}
			if (i + 1 < N && j - 1 > 0)
			{
				summ += A[i + 1][j - 1];
				count++;
			}
			if (j - 1 > 0)
			{
				summ += A[i][j - 1];
				count++;
			}
			if (j + 1 < N)
			{
				summ += A[i][j + 1];
				count++;
			}
			if (i + 1 < N && j - 1 > 0)
			{
				summ += A[i + 1][j - 1];
				count++;
			}
			if (i + 1 < N)
			{
				summ += A[i + 1][j];
				count++;
			}
			if (i + 1 < N && j + 1 < N)
			{
				summ += A[i + 1][j + 1];
				count++;
			}
			summ += A[i][j];
			A[i][j] = summ / count;
		}
	}

	cout << "Ìàòðèöà ïîñëå ïðåîáðàçîâàíèÿ:" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return false;
}
