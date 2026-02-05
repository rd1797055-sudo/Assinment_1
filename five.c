#include<stdio.h>


int main(){
int arr[10],index=0;
printf("Enter The 10 Array Elements :\n");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}
int min=arr[0];
for(int i=0;i<10;i++){
    if(min>arr[i]){
        min=arr[i];
        index=i;
    }
}
printf("The smallest array element at %d is",index);


    return 0;
}