#include<stdio.h>
#include<stdlib.h>

int main(){
     int a[8] = {1,2,3,4,5,6,7,8};
     int roll = 200, location = 5, i;
     a[location-1] = 200;
     for(i=0; i < 8; i++){
        printf("%d ", a[i]);
     }
     return 0;
}
