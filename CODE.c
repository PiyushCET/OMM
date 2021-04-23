#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
void main() 
{ 
int x,y,n; 
       printf("Enter n"); 
	scanf("%d",&n); 
	for(y=2*n;y>=-3*n;y--) 
	{ 
	 for(x=-2*n;x<=3*n;x++){ 
	 if((3.6*pow(x-y+n,2)+pow(x+y,2)<=pow(2*n,2))&&(81*pow(x-y+n,2)+64*pow(x+y,2)>=pow(9*n,2))&&(x+y>0)||((0.9*pow(2*x+2*y+3*n,2)+pow(x-y,2)<=pow(3*n,2))&&(9*pow(2*x+2*y+3*n,2)+24*pow(x-y,2)>=pow(9*n,2))&&(x-y>0))||(0.75*x>0.73*y&&0.64*x<0.7*y&&x<0.73*n||pow(x-1.1*n,2)+pow(y-1.7*n,2)<=0.025*n*n)||(pow(x-1.5*n,2)+pow(y,2)<=1.2*n*n&&pow(x-1.31*n,2)+pow(y,2)>=0.8*n*n&&(0.64*x<0.7*y||y<0||x>0.7*n)||(pow(x-1.2*n,2)+pow(y-1.8*n,2)<=0.3*n*n&&pow(x-n,2)+pow(y-2*n,2)>=0.3*n*n&& x+y<3.3*n))){ 
	 printf("*"); 
	 } 
	 else{ 
	  printf(" "); 
	 } 
	 } 
	 printf("\n"); 
	} 
getch(); 
} 
