/* HDU2015 偶数求和 */
#include <stdio.h>
int main(void)
{
    int n, m;
 
    while(scanf("%d%d", &n, &m) != EOF) {
        int sum=0, ai=2, count=0, i;
 
        for(i=1; i<=n; i++) {
            sum += ai;
            ai += 2;            // 第１项为2，公差为2
 
            // 求和项达到m项，则计算平均值并输出
            if( i % m == 0) {
                count++;
                if(count != 1)
                    printf(" ");
                printf("%d", sum / m);
 
                // 和清零
                sum = 0;
            }
        }
 
        // 最后一个平均值：如果n是m的倍数则最后一项已经输出，否则输出最后一项。换行。
        if(n % m == 0)
            printf("\n");
        else
            printf(" %d\n", sum / (n % m));
    }
 
    return 0;
}
