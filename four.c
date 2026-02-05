#include<stdio.h>


int main(){
    int arr[3][3];
    printf("Enter The 3x3 Array Element Below:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The 3x3 array is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose The 3x3 Matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}