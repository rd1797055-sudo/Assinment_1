#include<stdio.h>

int main(){
int m1,n1,m2,n2;
printf("Enter The Number Of Rows And Column In First Array :\n");
scanf("%d %d",&m1,&n1);
printf("Enter The Number Of Rows And Column In Second Array :\n");
scanf("%d %d",&m2,&n2);

if(m1!=m2||n1!=n2){
    printf("Sum Is Not Possible:\n");
    return 0;
}
int arr1[m1][n1],arr2[m2][n2],sum[m1][n1];

printf("Give The Data Of First Array:\n");
for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        scanf(" %d",&arr1[i][j]);
    }
}
printf("The First Array Is :\n");
for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        printf(" %d",arr1[i][j]);
    }
    printf("\n");
}
printf("Give The Data Of Second Array: \n");
for(int i=0;i<m2;i++){
    for(int j=0;j<n2;j++){
        scanf(" %d",&arr2[i][j]);
    }
}
printf("The Second Array Is : \n");
for(int i=0;i<m2;i++){
    for(int j=0;j<n2;j++){
        printf(" %d",arr2[i][j]);
    }
    printf("\n");
}

for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
         sum[i][j]=arr1[i][j]+arr2[i][j];
    }
}
printf("The Sum Matrix Is :\n");
for (int i = 0; i < m1; i++)
{
    for (int j = 0; j < n1; j++)
    {
        printf(" %d",sum[i][j]);
    }
    printf("\n");
    
}


    return 0;
}