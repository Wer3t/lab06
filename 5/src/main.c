#include <iostream>
#include <cstdlib>
#include<stdio.h>
/* Визначити, у скільки разів перша цифра 3х-значного числа більша, 
ніж остання. Результат «обрізати» до другого знака після коми.*/

int main()
{
    srand(time(0));
    #define N 3
    int a;
    int mas[N][N];
    for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) //Заполнение ячеек массива случайными числами
        mas[i][j] = rand()%100;
  }
   for (int i=0;i<N;i++) { //движение по строкам массива
        a=mas[i][0];
        for (int j=0;j<N;j++){ //движение по элементам строки и их перестановка
                mas[i][j]=mas[i][j+1];
       } 
       mas[i][N-1]=a;
  }
   /* for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++)
    {
        printf( "%d ", mas[i][j] );
    }
    printf( "\n" );
  }*/
    return 0;
}
