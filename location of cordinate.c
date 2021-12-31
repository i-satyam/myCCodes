#include<stdio.h>
int main() 
{
 int x,y;
   printf("enter the x and y cordinate");
   scanf("%d%d",&x,&y);
   printf("(%d,%d)\n",x,y);
if(x==0){
	if(y==0)
	printf("it is on origin");
	if(y!=0)
	printf("it is on y axis");}
if(x!=0){
	if(y==0)
     {
	 printf("it is on x axis");}
     if(y!=0)
     printf("it is in quadrant");}	
return 7;
}
	
	
