#include <stdio.h>

int main() {
    int t, n;

    printf("Enter the number of lines : ");
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
    	printf("Input number : ");
    	scanf("%d", &n);

    	if(n%2 == 0){
    		printf("even\n");
    	}else{
    		printf("odd\n");
   		}
   	}

    return 0;
}