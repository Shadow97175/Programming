Programming
===========
/*
	Есть матрица 5 x 5, нужно сделать так, что бы значение каждой ячейки заменялось
	на среднее арифметическое этой ячейки и всех ячеек вокруг. При этом каждая следующая ячейка 
	принимает во внимание изменения предыдущей.
*/

#include "stdafx.h"
#include <iostream>
#define N	5
using namespace std;

int main()
{
	setlocale(0, "Russian");
	int A[N][N];
	cout<<"Введите матрицу A 5x5: "<<endl;
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			cin>>A[i][j];
		}
	}

	for (int i=0; i<N; i++)
	{
		for (int j=0, summ=0, count=1; j<N; j++)
		{
			if (i-1>0 && j-1>0)
			{
				summ+=A[i-1][j-1];
				count++;
			}
			if (i-1>0)
			{
				summ+=A[i-1][j];
				count++;
			}
			if (i+1<N && j-1>0)
			{
				summ+=A[i+1][j-1];
				count++;
			}
			if (j-1>0)
			{
				summ+=A[i][j-1];
				count++;
			}
			if (j+1<N)
			{
				summ+=A[i][j+1];
				count++;
			}
			if (i+1<N && j-1>0)
			{
				summ+=A[i+1][j-1];
				count++;
			}
			if (i+1<N)
			{
				summ+=A[i+1][j];
				count++;
			}
			if (i+1<N && j+1<N)
			{
				summ+=A[i+1][j+1];
				count++;
			}
			summ+=A[i][j];
			A[i][j]=summ/count;
		}
	}

	cout<<"Матрица после преобразования: "<<endl;
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}

	system("pause");
	return false;
}
