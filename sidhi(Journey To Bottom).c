/*
Code Title: Sidhi
Author: satyam verma
Date & Time: 15 Dec 2021, 7:43 PM
Thought at moment: Masti Karte Hue

*/


#include<stdio.h>
int main()
{
    for(int i=0; i<15; i++) {
        for(int j=0; j<=i; j++) {
            if((j==i)&&j%2) {
                printf("👀👀");
            } else {
                if(j==i) {
                    printf("👀");
                } else {
                    printf("🤣");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
