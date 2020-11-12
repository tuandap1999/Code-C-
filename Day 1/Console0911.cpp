#include<iostream>
#include<stdio.h>
#include<conio.h>

int main(){
    // int x, n;
    // long S;
    // S = 0;
    // printf("\n Nhap n :");
    // scanf("%d", &n);
    // fflush(stdin);
    // for(x=1;x<=n;x++){
    //     S = x;
    //     x++;
    //     printf("%3d",S);
    // }
    // // while (x <= n)
    // // {
    // //     // S = S + x*x;
    // //     // x ++;
    // //     // printf("\n Tong %d:" ,S ,"\n");
    // //     S = x*x;
    // //     x++;
    // //     printf("%3d",S);
    // // }
    // // getch();
    // return 0;

    // int i, n;
	// long S;
	// S = 0;
	// i = 1;
	// printf("\nNhap n: ");
	// scanf("%d", &n);

	// while(i <= n)
	// {
	// 	S = S + i;
	// 	i++;
	// }
	// printf("\nTong 1 + 2 + ... + %d la %ld: ", n, S);
	// getch();
	// return 0;
    int a,b,c;
    
    printf("\n Nhap so a  ");
    scanf("%d", &a);

    printf("\n Nhap so b  ");
    scanf("%d", &b);

    printf("\n Nhap so c  ");
    scanf("%d", &c);
    
    if(a >= b && a >=c ){
        printf("\n %2d la so lon nhat", a);
    }else if (a <= b && b >= c)
    {
        printf("\n %2d la so lon nhat", b);
    }else if (a <= c && b< c)
    {
        printf("\n %2d la so lon nhat", c);
    }
    
    
}