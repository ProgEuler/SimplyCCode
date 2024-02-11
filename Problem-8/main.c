#include <stdio.h>

int main() {
    int Test, n1, n2, n3, temp, temp2, cases;

    printf("Enter test case : ");
    scanf("%d", &Test);

    for(cases = 1; cases <= Test; cases++){

    	printf("enter numbers : ");
    	scanf("%d %d %d", &n1, &n2, &n3);

    	if(n1 > n2){
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if(n1 > n3){
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
        if(n2 > n3){
            temp = n2;
            n2 = n3;
            n3 = temp;
    	}
    	printf("Case %d: %d %d %d\n", cases, n1, n2, n3);
    }
    return 0;
}