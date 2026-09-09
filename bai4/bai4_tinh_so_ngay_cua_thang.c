#include <stdio.h>

int isLeapYear(int nam)
{
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int main()
{
    int thang, nam;

    printf("Nhap thang: ");
    if (scanf("%d", &thang) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    printf("Nhap nam: ");
    if (scanf("%d", &nam) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    if (thang < 1 || thang > 12 || nam <= 0)
    {
        printf("Thang (1-12) va nam (>0) khong hop le.\n");
        return 0;
    }

    int soNgay;
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        soNgay = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        soNgay = 30;
        break;
    case 2:
        if (isLeapYear(nam))
            soNgay = 29;
        else
            soNgay = 28;
        break;
    }

    printf("Thang %d nam %d co %d ngay.\n", thang, nam, soNgay);

    return 0;
}