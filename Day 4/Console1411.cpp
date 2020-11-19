#include<stdio.h>
#include<math.h>

int main(){

    //Bài 36
    // int i , n;
    // float S, M;
    // i = 1;
    // M = 1;
    // S = sqrt((float)0);

    // while (n < 1)
    // {
    //     printf("Nhap n: ");
    //     scanf("%2d", &n);
    //     if (n < 1)
    //     {
    //         printf("\n n phai lon hon 1");
    //     }
        
    // }

    // while (i <= n)
    // {
    //     M = M * i;
    //     S = sqrt(M + S);
    //     i++;
    // }
    
    // printf("\n %.2f", S);

    //Bài 41
    // int n, i;
    // float S;
    // i = 0;
    // S = 1;

    // printf("\n Nhap n:");
    // scanf("%d", &n);

    // while (i <=n)
    // {
    //     S = 1 + 1.0/S;
    //     i++;
    // }

    // printf("Tong S: %d", S);
    
    //Bài 34
    int n, i;
    float S;

    i = 1;
    S = 0;

    printf("Nhap n:");
    scanf("%d", &n);

    while (i <= n)
    {
        S= sqrt(i + n);
        i++;
    }

    printf("Tong: %.2f", S);
    

}