#include <stdio.h>

int main() {
    
    int test,i;
    char n[101];

    scanf("%d", &test);

    for(i = 1; i <= test; i++){
    	scanf("%s", &n);

    	int length = strlen(n);
    	int lastDigit = n[length-1]-48;	//the ASCII code 48 represents the character 0. So lasDigit turned into a intiger

    	if(lastDigit%2 == 0){
    		printf("even\n");
    	}else{
    		printf("odd\n");
    	}
    }

    return 0;
}