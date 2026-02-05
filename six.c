#include<stdio.h>
int main(){
int Total_students,count=0;
printf("Enter The Number Of Students:\n");
scanf("%d",&Total_students);
int Marks[Total_students];
printf("Enter Marks Roll Numbar wise :\n");
for(int i=0;i<Total_students;i++){
    scanf("%d",&Marks[i]);
}
for (int i = 0; i < Total_students; i++)
{
    if(Marks[i]>=80 && Marks[i]<=100){
        count++;
    }
}
printf("Total Number Of Students who Got 80 Or more Marks Is :%d\n",count);
for (int i = 0; i < Total_students; i++)
{
    if(Marks[i]>=80 && Marks[i]<=100){
        printf("Roll No %d Got %d \n",i+1,Marks[i]);
    }
}




    return 0;
}


