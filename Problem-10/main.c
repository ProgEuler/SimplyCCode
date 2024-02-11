#include <stdio.h>

int main() {
    
    int T, i, r1, r2, B, ball_played;
    double CRR, RRR;

    scanf("%d", &T);

    while(T--){
    	scanf("%d %d %d", &r1, &r2, &B);
    	ball_played = 300 - 8;
    	CRR = ((r2 * 1.0) / ball_played) * 6;
    	RRR = (((r1 * 1.0) - (r2 * 1.0) + 1) / 8) * 6;

    	printf("%.2lf %.2lf\n", CRR, RRR);
    }
    return 0;
}