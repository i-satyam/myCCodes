/*Code Title: location of co-ordinate.
Written by:Satyam Verma.
Date and time:31 Dec ,11:30A.M.
*/

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
     else
     printf("it is in quadrant");}	
return 7;
}
	
	
