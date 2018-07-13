#include<stdio.h>
int check(float a, float b){
	if (b*b*8-a*a > 0) return 1;
	else return 0;
}
float dien_tich(float a, float b) // a la chu vi. b la duong cheo
{
	float n;
	n = a*a/4 - b*b;
	return n/2.0;
}
int main(){
	float a,b;
	printf("nhap chu vi : ");
	scanf("%f",&a);
	printf("nhap duong cheo: ");
	scanf("%f",&b);
	if(check(a,b)==1) printf("dien tich la: S= %f",dien_tich(a,b));
	else printf("khong phai hinh chu nhat");
	return 1;
}
