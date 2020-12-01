#include<math.h>
#include<stdio.h>

int main(){

    //Bài 48
    // long i, n;
	// int S;
	// int P = 1;

    // while (n <= 0)
    // {

    //     printf("\n Nhap n:");
    //     scanf("%2d", &n);

    //     if (n <= 0)
    //     {
    //         printf("\n Vui long nhap lai! (n>0)");
    //     }
    // }

    // S = 0;
	// i = n;

	// while(i != 0)
	// {
	// 	if(i % 2 == 1)
	// 	{
	// 	 P = P * (i % 10);
	// 	}
	// 	i = i / 10;
	// }
	// printf("\nTich cac chu so le cua %ld la %d", n, P);

    //Bài 49
    int i, n;
    int S;

    while (n <= 0)
    {
        printf("\n Nhap n:");
        scanf("%2d", &n);

        if (n <= 0)
        {
            printf("Vui long nhap lai! (n>0)");
        }
    }
    i= n;
    do
    {
        S = i % 10 ; 
    } while (i /= 10);
    
    printf("S: %2d", S);
    
    
}