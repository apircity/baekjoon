#include <stdio.h>
int main() 
{
    int n=0;
    scanf("%d", &n);
    long long fb[91] = { 0, 1 };
    for (int i = 2; i <= n; i++)
        fb[i] = fb[i - 1] + fb[i - 2];
    printf("%lld", fb[n]);
    return 0;
}