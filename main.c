#include <stdio.h>
#include <stdlib.h>
#include "number.h"

int main()
{
   int choice;
   int a,b,c;
   int n;

   do
    {
        printf("\n================================\n");
        printf("       NUMBER ANALYZER\n");
        printf("================================\n");
        printf("1. Kiem tra so nguyen to\n");
        printf("2. Tim UCLN\n");
        printf("3. Tim BCNN\n");
        printf("4. Dao nguoc so\n");
        printf("5. Dem So\n");
        printf("6. Tinh Giai Thua\n");
        printf("7. Tinh fibonacci\n");
        printf("0. Thoat chuong trinh\n");
        printf("================================\n");

        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Nhap n: ");
                scanf("%d", &n);

                if(SoNguyenTo(n))
                    printf("%d la so nguyen to\n", n);
                else
                    printf("%d khong phai so nguyen to\n", n);
                break;

            case 2:
                printf("Nhap a va b: ");
                scanf("%d%d", &a, &b);

                printf("UCLN = %d\n", UCLN(a, b));
                break;

            case 3:
                printf("Nhap a va b: ");
                scanf("%d%d", &a, &b);

                printf("BCNN = %d\n", BCNN(a, b));
                break;

            case 4:
                printf("Nhap n: ");
                scanf("%d", &n);

                printf("So dao nguoc = %d\n",Daonguocso(n));
                break;
            case 5:
                printf("Nhap n: ");
                scanf("%d",&n);

                printf("So cac chu so la: %d\n",DemSo(n));
                break;

            case 6:
                printf("Nhap n: ");
                scanf("%d",&n);

                printf("%d! = %d",n,Giaithua(n));
                break;

            case 7:
                printf("Nhap n (0 - 93): ");
                scanf("%d", &n);

                if(n >= 0 && n <= 93)
                    printf("Fibonacci = %llu\n",
                           fibonacci(n));
                else
                    printf("Gia tri khong hop le\n");
                break;

            case 0:
                printf("Ket thuc chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while(choice != 0);

    return 0;
}
