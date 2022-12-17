//union example
#include<stdio.h>

union ip_adress{
	unsighed long laddr;
	unsighed char saddr[4];
};

int main(void){
	union ip_adress addr;
	
	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;
	
	printf("%x\n",addr.laddr);
	
	return 0;

}