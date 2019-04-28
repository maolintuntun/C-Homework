#include <stdio.h>
int main(void)
{
    int i, n,d;
    int repeat, ri;
    double sum,item;

    scanf("%d", &repeat);
	
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        d=1,sum=0;
		for(i=1;i<=n;i++){
			item=1.0/d;
			sum=sum+item;
			d=d+2;
		}
        
        printf("sum = %.6f\n", sum);
    }
}
