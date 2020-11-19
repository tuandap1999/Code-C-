#include<stdio.h>
#include<math.h>
 
int main(){

    //Bài 14
    // int x,n,i;
    // float S, a, b;
    // S, i = 0;
    // a = 1;


    // while (n < 1 )
    // {
    //     printf("\n Nhap x:");
    //     scanf("%2d", &x);
        
    //     printf("\n Nhap n:");
    //     scanf("%2d", &n);
    //     if (n < 1)
    //     {
    //         printf("\nN Vui long nhap lai ");
    //     }
        
    // }
    // while (i <= n)
    // {
    //     a = pow(x, (2 * i +1));
    //     S = S + a;
    //     i++;
    //     printf("\n %.2f", S);
    // }
    // printf("\n ================= \n");
    // printf("\n %.2f", S);
    
    //Bài 15
    // int n, i;
    // float S, a;
    // S = 0;
    // i = 1;
    // a = 0;
    
    // while (n < 1)
    // {
    //     printf("\n Nhap n :");
    //     scanf("%2d", &n);
    //     if (n < 1)
    //     {
    //         printf("\n Nhap lai n: ");
    //     }
    // }

    // while (i<=n)
    // {
    //     a = a + i;
    //     S = S + 1.0/a;
    //     i++;

    //     printf("\n %2d", i);
    //     printf("\n %.1f", a);
    //     printf("\n %.2f", S);
    //     printf("\n ++++++++++++");
    // }
    // printf("\n %.2f", S);
    
    //Bài 16
    // int n, x, i;
    // float S ,a, b;
    // i = 1;
    // S,a, b = 0;


    
    // while (n < 1)
    // {
    //     printf("\n Nhap n :");
    //     scanf("%2d", &n);

    //     printf("\n Nhap x : ");
    //     scanf("%2d", &x);
    //     if (n <i)
    //     {
    //         printf("\n nhap lai");
    //     }
    // }
    // for (i=1;i <= n;i++)
    // {       
    //     b = pow(x, i);
        
    //     a = a + i;
    //     S = S + b/a;

    //     printf("\n %2d", i);
    //     printf("\n %.1f", a);
    //     printf("\n %.1f", b);
    //     printf("\n %.2f", S);
    //     printf("\n ++++++++++++");
    // }
    // printf("\n %.2f", S);
    
    //Bài 24
	// int n , i, S;
	// i=1;
    // S = 0;

	// printf("\n Nhap n: ");
	// scanf("%2d", &n);

	// while (i <= n)
	// {
	// 	if(n % i == 0){
	// 		if (i % 2 != 0)
    //         {
    //             printf("%4d", i);
    //         }
	// 	}
    //     i++;
	// }

    //Bài 29
	int n , i, b;
    i =1 ;
    b = 1;
    int solonnhat=1;
    int solonthu2=solonnhat;
	printf("\n Nhap n: ");
	scanf("%d", &n);

	while (i <= n)
	{
		if(n % i == 0){
            if (i > solonnhat)
            {
                solonthu2=solonnhat;
                solonnhat=i;
            }
                
		}
        i++;
	}
    printf("%4d", solonthu2);
        
}