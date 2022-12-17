//data type saved in each member is detected by user.
#include<stdio.h>

#define STU_NUMBER 1
#define REG_NUMBER 2

struct student{
	int type;
	union{
		int stu_number;
		char reg_number[15];
	} id;
	char name[20];
};

void print(struct student s){
	switch(s.type){
		case STU_NUMBER:
			    printf("student number : %d\n",s.id.stu_number);
			    printf("name : %s\n",s.name);
	            break;
		case REG_NUMBER:
			    printf("social security number : %s\n",s.id.reg_number);
			    printf("name : %s\n",s.name);
			    break;
		default :
			    printf("type erroe!\n");
			    break;
	}
}

int main(void){
	struct student s1,s2;
	
	s1.type = STU_NUMBER;
	s1.id.stu_number = 202135931;
	strcpy(s1.name,"hong gil-dong");
	
	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number,"86101-1058031");
	strcpy(s2.name,"kim chulsoo");
	
	print(s1);
	print(s2);
	
	return 0;        
}