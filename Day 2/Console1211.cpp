#include<stdio.h>
#include<conio.h>

int main(){

	//Bài 4
    // int i, n;
	// float S;
	// S = 0; i = 1;

	// while(n < 1)
	// {
	// 	printf("\nNhap n: ");
	// 	scanf("%d", &n);
	// 	if (i <= n)
	// 	{
	// 		i++;
	// 		S = S + 1.0 / (2*i);  
	// 	}
	// }
	// printf("i = %d", i);
	// printf("\nS = %f", S);
	// printf("\nTong 1 + 1/2n + ... + 1/%d la %.2f: ",n, S);

	// int i, n;
	// float S;
	// S = 0;
	// do
	// {
	// 	printf("\n Nhap n: ");
	// 	scanf("%d", &n);
	// 	if(n < 1)
	// 	{
	// 		printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
	// 	}
	// }while(n < 1);

	// for(i = 1; i <= n; i++)
	// {
	// 	S = S + 1.0 / (2 * i);
	// }
	// printf("\nTong la: %f", S);

	// getch();
	// return 0;
    
	//Bài 10
	// int n,x;
	// float S;
	// S = 1;

	// printf("\n nhap x: ");
	// scanf("%2d" , &x);

	// printf("\n nhap n: ");
	// scanf("%2d" , &n);

	// for(int i = 1; i <=n; i++){

	// 	S = S + (x*n);

	// 	printf("\n Tong : %f", S);
	// }


	//Bài 12
	// int n,x,i;
	// float S, a;
	// S = 0;
	// a = 1;
	// i = 1;

	// printf("\n nhap x: ");
	// scanf("%2d" , &x);

	// printf("\n nhap n: ");
	// scanf("%2d" , &n);

	// while(i <= n)
	// {
	// 	a = a * x;
	// 	S = S + a;
	// 	i++;

	// 	printf("\n Bien : %f", a);
	// }
	// printf("\n ++++++++++++++++++++++++");
	// printf("\n Tong : %f", S);

	//Bài 20
	int n , i;
	i=1;

	printf("\n Nhap n: ");
	scanf("%2d", &n);

	while (i <= n)
	{
		if(n % i ==0){
			printf("%4d", i);
		}
		i++;
	}

}