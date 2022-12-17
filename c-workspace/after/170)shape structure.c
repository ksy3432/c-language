//각 도형의 종류를 입력받고 각각의 도형의 넓이를 구하는 프로그램을 구조체를 이용하여 구상하기
#include<stdio.h>

typedef struct rectangle{
	int width,high;
} REC;

typedef struct triangle{
	int width,length;
} TRI;

typedef struct circle{
	int r;
} CIR;

typedef struct area{
	float rec_area;
	float tri_area;
	float cir_area;
} AR;

AR area_of_shape(REC r, TRI t, CIR c,AR ar);

AR area_of_shape(REC r, TRI t, CIR c,AR ar){
	ar.rec_area = r.width * r.high;
	ar.tri_area = t.width * t.length * 0.5;
	ar.cir_area = c.r * c.r * 3.14;
	
	return ar;
}

int main(void){
	enum shape{rect=1,tri,cir};
	int choose;
	AR area;
	REC r;
	TRI t;
	CIR c;
	
	printf("select kind of shape(rect(1),tri(2),cir(3)) : ");
	scanf("%d",&choose);
	
	if(choose == rect){
		printf("What is a rectangle's width? :");
		scanf("%d",&r.width);
	    printf("How long is the rectangle's high? :");
	    scanf("%d",&r.high);
	    printf("choosed shape's area is %.0f\n",area_of_shape(r,t,c,area).rec_area);}
	else if(choose == tri){
		printf("What is a triangle's width? :");
		scanf("%d",&t.width);
		printf("How long is the triangle's length? :");
		scanf("%d",&t.length);
		printf("choosed shape's area is %.2f\n",area_of_shape(r,t,c,area).tri_area);
	}
	else{
		printf("What is a circle's radius? :");
		scanf("%d",&c.r);
		printf("choosed shape's area is %.2f\n",area_of_shape(r,t,c,area).cir_area);
	}
	
	//printf("choosed shape's area is %f\n",area_of_shape(r,t,c,area).rec_area);
	
	return 0;
}