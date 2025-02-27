#include<stdio.h>

int main(){
	double a, b, c, d, e, f, dt, dtx, dty;
	scanf("%lf %lf %lf", &a, &b, &e);
	scanf("%lf %lf %lf", &c, &d, &f);
	dt = a*d - b*c;
	dtx = e*d - b*f;
	dty = a*f - e*c;
	if(dt == 0){
		if((dtx == 0) && (dty ==0)){
			printf("He phuong trinh co vo so nghiem");
		}
		else if((dtx == 0 && dty != 0) || (dty == 0 && dtx != 0)){
			printf("He phuong trinh vo nghiem");
		}
		
	}
	else {
			printf("He phuong trinh co nghiem duy nhat\n");
			printf("x = %.5lf\n", dtx/dt);
			printf("y = %.5lf", dty/dt);
		}
	return 0;
}
