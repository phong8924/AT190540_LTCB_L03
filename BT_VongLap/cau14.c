#include <stdio.h>
#include <math.h>

int main(){
	int nam = 2014;
	double GDP, GDP_2014, toc_do_tang_truong;
	
	scanf("%lf", &GDP_2014);
	GDP = GDP_2014;
	scanf("%lf", &toc_do_tang_truong); //lon hon 100%
	
	toc_do_tang_truong /= 100; //Chia lay phan tram
	
	printf("%8s%8s\n","nam","GDP");
	

	while(GDP < 2* GDP_2014){
		printf("%8d %8.2f\n", nam, GDP);
		GDP *= toc_do_tang_truong;
		nam++;
	}
	
	return 0;
}
