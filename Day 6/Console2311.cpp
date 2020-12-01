#include<stdio.h>
#include<math.h>

int main(){

    //Bài 47
    int i, n;
    long T;

     printf("Nhap n:");
    scanf("%2n", &n);
    while (n <= 0)
    {
        if (n <= 0)
        {
            printf("Vui long nhap lai n.");
        }
        
    }
    float S;

    i = 0;
    S = n;
    while (n > 0)
        {
            if (T % 2)
            {
                S = S + T % 10;
            }
            T = T / 10;
            
        }
        printf("Chot : %2f", S);
}