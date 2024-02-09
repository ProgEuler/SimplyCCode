#include <stdio.h>

int main() {
    int T,N, i, LSD, MSD;

    printf("Test count : ");
    scanf("%d", &T);

    printf("-----------------------------\n");

    for(i=1; i<=T; i++){

    	printf("Number %d : ", i);
    	scanf("%d", &N);
    	 LSD = N % 10;
    	 MSD = N / 10000;
    	 printf("Sum of MSD and LSD = %d\n", LSD + MSD);

    	 printf("\n");

    }
}