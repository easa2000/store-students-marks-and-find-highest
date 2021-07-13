/ read 2D array marks which stores 5 students in 3 subjects find highest mark

#include<stdio.h>
void main()
{
    int i,j,max_marks;
    int marks[i][j];
    for(i=0;i<5;i++)
    {
        printf("\n Enter the marks obtained by student %d", i);
        for(j=0;j<3;j++)
        {
            printf("\n marks[%d][%d] = ",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        max_marks  = marks[0][i];
        for(j=1;j<5;j++)
        {
            if(marks[i][j] > max_marks)
            max_marks = marks[i][j];
        }
        
    }
    printf("\n The highest marks obtained in the subject %d = %d",i,max_marks);
}
