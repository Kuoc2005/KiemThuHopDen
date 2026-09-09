#include <stdio.h>

int main()
{
    int n;

    printf("Nhap n: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    if (n <= 0)
    {
        printf("n phai la so nguyen duong.\n");
        return 0;
    }

    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }

    printf("Tong S = %lld\n", sum);

    return 0;
}