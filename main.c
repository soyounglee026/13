#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	char name[100];
	double grade;
};

int main(int argc, char *argv[]) {
	struct student s1 = {123456, "soyoung", 1.0};
	
	s1.ID = 654321;
	s1.grade = 3.5;
	
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
	
	return 0;
}
