Programming
===========
    /*
            Есть матрица 5 x 5, нужно сделать так, что бы значение каждой ячейки заменялось на среднее арифметическое этой ячейки и всех ячеек вокруг.
            При этом, каждая следующая ячейка не принимает во внимание изменения предыдущих
    */
     
    #include <iostream>
    #define N 5
    using namespace std;
     
    int main()
    {
            setlocale(0, "Russian");
            int A[N][N], safeA[N][N];
            cout<<"Введите матрицу A 5x5: "<<endl;
            for (int i=0; i<N; i++)
            {
                    for (int j=0; j<N; j++)
                    {
                            cin>>A[i][j];
                            safeA[i][j]=A[i][j];
                    }
            }
     
            for (int i=0; i<N; i++)
            {
                    for (int j=0, summ=0, count=1; j<N; j++)
                    {
                            //      верхняя строка
                            if (i-1>0 && j-1>0)
                            {
                                    summ+=safeA[i-1][j-1];
                                    count++;
                            }
                            if (i-1>0)
                            {
                                    summ+=safeA[i-1][j];
                                    count++;
                            }
                            if (i-1>0 && j+1<N)
                            {
                                    summ+=safeA[i-1][j+1];
                                    count++;
                            }
                            //      слева
                            if (j-1 > 0)
                            {
                                    summ+=safeA[i][j-1];
                                    count++;
                            }
                            //      справа
                            if (j+1<N)
                            {
                                    summ+=safeA[i][j+1];
                                    count++;
                            }
                            //      нижняя строка
                            if (i+1<N && j-1>0)
                            {
                                    summ+=safeA[i+1][j-1];
                                    count++;
                            }
                            if (i+1<N)
                            {
                                    summ+=safeA[i+1][j];
                                    count++;
                            }
                            if (i+1<N && j+1<N)
                            {
                                    summ+=safeA[i+1][j+1];
                                    count++;
                            }
     
                            summ+=safeA[i][j];
                            A[i][j]=summ/count;
                    }
            }
     
            cout<<"Матрица после преобразования: "<<endl;
            for (int i=0; i<N; i++)
            {
                    for (int j=0; j<N; j++)
                            cout<<A[i][j]<<" ";
                    cout<<endl;
            }
            return 0;
    }
