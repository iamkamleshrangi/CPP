#include<stdio.h>
#include<stdlib.h>

int main(){
     int a[5], i ,sum =0;

     for(i = 0; i<5; i++){
        printf("Enter %d nd number\n",i);
        scanf("%d",&a[i]);
     }
     for(i = 0; i < 5 ; i++){
        sum = sum + a[i];
     }
     printf("data is %d \n",sum);
     return 0;
}
