#include<stdio.h>
#include<stdlib.h>

int main(){
     int a[5], i ,even =0, odd = 0;

     for(i = 0; i<5; i++){
        printf("Enter %d nd number\n",i);
        scanf("%d",&a[i]);
     }
     for(i = 0; i < 5 ; i++){
        if(a[i] % 2 == 0) {
            even = even + a[i];
            }
        else{
            odd = odd + a[i];
            }
     }
     printf("even is %d \n",even);
     printf("odd is %d \n",odd);
     return 0;
}
