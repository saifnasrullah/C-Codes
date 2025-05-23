#include <stdio.h>
int main() {
    int m, n, sum;
    
    while (1) {
        scanf("%d %d", &m, &n);
        
        if (m <= 0 || n <= 0)
            return 0;
        
        if (n > m) {
            int temp = m;
            m = n;
            n = temp;
        }
        
        sum = 0;
        for (int i = n; i <= m; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }
}
