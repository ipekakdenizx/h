#include <stdio.h>


int main() 
{
	int final, midterm, homework1, homework2, grade;
	float f,m,h;
	
	printf("Enter your homework1:");
	scanf("%d",&homework1);
	
	printf("Enter your homework2:");
	scanf("%d",&homework2);
	
	printf("Enter your midterm:");
	scanf("%d",&midterm);
	
	printf("Enter your final:");
	scanf("%d",&final);
	
	f = (final*45)/100;
	m = (midterm*30)/100;
	h = (((homework1+homework2)/2)*25)/100;
	
	grade = f + m + h;
	
	if (grade<=50)
	{	
	printf("Failed.");
	}
	
	else if (grade>=50 && grade<=60)
	{
	printf(" Grade = C.");
	}
	else if (grade>60 && grade<=80)
	 {
    	printf(" Grade = B.");
	 }
	 
	else if (grade>80)
	 {
	 	printf(" Grade = A.");
	 }
	 
	
	return 0;
}

