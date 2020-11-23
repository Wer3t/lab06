//Заповнити масив із заданої кількості елеметів простими числами, що не повторюються.
#include<stdio.h>

int main(){
	#define N 10
	int stop =0, i=0, ch=2;
	int mas[N];
	while(stop<1){
		for(int j=2; j<=ch; j++){  //цикл для перебора всех возможных делителей
			if(ch%j==0){
				if(ch==j){
					mas[i]=ch;
					i++;
					//prostoe ch
					break;
				} else {
					break;
					//slozhnoe ch
				}
			}
		}
		ch++;
		if (i==N){
			stop++;
		}
	}
	for(int j = 0;j<N;j++){
	printf("%d, ", mas[j] );} 
	return 0;
}
