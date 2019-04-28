#include <stdio.h>
int main(void)
{
    int i, m, sum,a;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &m);
        sum=0,a=m;
		for(i=0;a<=100;i++){
			a=m+i;
			sum=sum+a;
		}
        printf("sum = %d\n", sum);
    }
}