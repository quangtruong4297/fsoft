#include<stdio.h>
#include<conio.h>
void input(int *,int );
void output(int *,int);
float avg(int *,int);
int so_lg(int *, float,int);
void swap(int *,int *);
void swaparr(int *,int);

void input(int * arr, int n){
	printf("input: \n");
	for(int i = 0 ; i<n ;i++){
		printf("a[%d]= ", i);
		scanf("%d",(arr+i));
		printf("\n");
	}
}
void output(int *arr,int n){
	printf("ouput: /n");
	for(int i = 0; i < n; i++){
		printf("a[%d] = %d",i,*(arr+i));
		printf("\n");
	}
}
float avg(int *arr,int n){
	float sum=0;
	int i=0;
	for(i=0; i<n ;i++){
		sum+=*(arr+i);
	}
	float x= sum/i;
	return x;
}
int so_lg(int *arr,float x,int n){
	int m=0;
	for(int i=0; i<n; i++){
		if(*(arr+i) < x) m++;
	}
	return m;
}
void swap(int *x,int *y){
	int tg = *x;
	*x = *y;
	*y = tg;
}
void swaparr(int *arr,int n){
	int i = 0, j = 19;
	while( i != j ){
		if(*(arr+i)%2 == 0 ) i++;
		else {
			swap((arr+i),(arr+j));
			j--;
		}
	}
}
int main(){
	int n;
	int a[n];
	printf("nhap so lg phan tu: ");
	scanf("%d",&n);
	input(a,n);
	output(a,n);
	printf("average = %.3f", avg(a,n));
	printf("\n");
	printf("so luong so nho hon avg = %d", so_lg(a,avg(a,n),n));
	printf("\n");
	swaparr(a,n);
	output(a,n);
	return 0;
	
	
}
