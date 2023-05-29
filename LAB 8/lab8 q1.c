#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[15];
	char surname[15];
	int number;
	int midtermgrade;
};

int main() {
	
	struct Student student1,student2,student3;
	printf("please enter Student 1's informations: \n");
	printf("Name:");
	scanf("%[^\n]",student1.name);
	printf("Surname:");
	scanf("%[^\n]",student1.surname);
	printf("Number:");
	scanf("%d",&student1.number);
	printf("Midterm Grade:");
	scanf("%d",&student1.midtermgrade);
	
	printf("please enter Student 2's informations: \n");
	printf("Name:");
	scanf("%[^\n]",student2.name);
	printf("Surname:");
	scanf("%[^\n]",student2.surname);
	printf("Number:");
	scanf("%d",&student2.number);
	printf("Midterm Grade:");
	scanf("%d",&student2.midtermgrade);
	
	printf("please enter Student 3's informations: \n");
	printf("Name:");
	scanf("%[^\n]",student3.name);
	printf("Surname:");
	scanf("%[^\n]",student3.surname);
	printf("Number:");
	scanf("%d",&student3.number);
	printf("Midterm Grade:");
	scanf("%d",&student3.midtermgrade);
	
	
	return 0;
}
