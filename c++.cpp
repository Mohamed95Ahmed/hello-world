#include<stdio.h>
#include<conio.h>
int main()
{
	int grade;
	printf("enter student grade:");

	scanf("%d",&grade);
	if (grade>=90){
		printf("A\n");
	}
	else if (grade>=80){
		printf("B\n");
	}
	else if (grade>=70){
		printf("C\n");
	}
	else if (grade>=60){
		printf("D\n");
	}
	else {
		printf("F\n");
		printf("you have to take this course again\n");
	}
	getch();
	return(0);
}
