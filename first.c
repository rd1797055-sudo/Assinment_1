#include<stdio.h>


int main(){
    int arr[5][2];
    printf("Enter The Array Element Below:");
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The 5x2 array is:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}