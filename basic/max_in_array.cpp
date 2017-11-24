#include<stdio.h>
#include<stdlib.h>

int main(){
     int a[8] = {58,2,3,400,5,9,12,70},i ,maximum =0;
     for(i=0; i < 7 ; i++){
        if(a[i] > maximum){
            maximum = a[i];
        }
     }
     printf("%d",maximum);
     return 0;
}
