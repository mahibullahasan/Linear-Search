#include<stdio.h>
int main(){

    int i,n=0,sc=10,arr[100];
    for (i = 0; i < 6; i++){
    scanf("%d", &arr[i]);
    }
    for(i=0;i<10;i++){

        if(sc==arr[i]){
                printf("Found");
            n=1;
            break;
        }
    }
    if(n==0){
        printf("NotFound");
    }







}
