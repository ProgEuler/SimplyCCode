#include <stdio.h>

int main() {
    int T,N, i, LSD, MSD;

    scanf("%d", &T);

    for(i=1; i<=T; i++){

    	scanf("%d", &N);
    	 LSD = N % 10;
    	 MSD = N / 10000;
    	 printf("Sum = %d\n", LSD + MSD);

    }
}