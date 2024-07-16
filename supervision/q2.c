#include<stdio.h>
#include<conio.h>

struct Student 
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

void main() 
{
    struct Student stud[5];
	int i;

    for(i=0;i<5;i++) 
	{
        printf("Enter details for student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &stud[i].roll_no);
        printf("Name: ");
        scanf("%s", stud[i].name);
        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &stud[i].chem_marks);
        printf("Mathematics Marks (out of 100): ");
        scanf("%d", &stud[i].maths_marks);
        printf("Physics Marks (out of 100): ");
        scanf("%d", &stud[i].phy_marks);
    }

    printf("\nMark Sheets:\n");
    for(i=0;i<5;i++) 
	{   
		int total;
		float per;
		
        total=stud[i].chem_marks+stud[i].maths_marks+stud[i].phy_marks;
        
        per=(total/300.0)*100;
        
        printf("Roll No: %d, Name: %s, Percentage: %.2f%%\n",stud[i].roll_no,stud[i].name,per);
    }
    getch();
}
