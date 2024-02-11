#include <stdio.h>
#include <math.h>

int main() {

    int Test, num;

    printf("Enter test case : ");
    scanf("%d", &Test);

    for(int i=1; i<=Test; i++){

    	printf("Enter the number : ");
    	scanf("%d", &num);

    	if (num < 0) {
    		
            printf("Cannot calculate square root of negative number\n");
            continue;
        }

    	double sq_root = sqrt(num);

    	if(ceil(sq_root) == floor(sq_root)){
    		printf("YES\n");
    	}else{
    		printf("NO\n");
    	}
    }
    return 0;
}