#include<stdio.h>

typedef struct point{
	int x,y;
} POINT;

typedef struct triangle{
	POINT a,b,c;
} TRI;

int is_triangle(TRI t);
POINT get_center(TRI t);

int is_triangle(TRI t){
	if(t.a.x == t.b.x && t.b.y == t.c.y)
		return 1;
	else
		return 0;
}

POINT get_center(TRI t){
	POINT m;
	m.x = (t.a.x + t.b.x + t.c.x)/3;
	m.y = (t.a.y + t.b.y + t.c.y)/3;
	
	return m;
}

int main(void){
	TRI t1 = {{1,3},{1,1},{3,1}};
	TRI t2 = {{5,3},{3,1},{7,1}};

		  
	if(is_triangle(t1) == 1)
		  printf("it is a right triangle\n");
	else
		  printf("it is not a right triangle\n ");
		  
	if(is_triangle(t2) == 1)
		  printf("it is a right triangle\n");
	else
		  printf("it is not a right triangle\n");
		  
	printf("the grid of its center of gravity is (%d,%d)\n",get_center(t1).x,get_center(t1).y);
	
	return 0;	  
}