#include<stdio.h>

int main(){
	int thang, nam;
	scanf("%d %d", &thang, &nam);
	
	if(thang < 1 || thang > 12){
		printf("thang khong hop le");
	}
    else if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
    	printf("Thang %d nam %d co 31 ngay.", thang, nam);
	}
	else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
		printf("Thang %d nam %d co 30 ngay.", thang, nam);
	}
	else {
		if(nam % 4 == 0){
			if (nam % 100 == 0 && nam % 400 != 0){
				printf("Thang %d nam %d co 28 ngay.", thang, nam);
	    	}else{
	    		printf("Thang %d nam %d co 29 ngay.", thang, nam);
			}
		}
		
		else{
			printf("Thang %d nam %d co 28 ngay.", thang, nam);
		}
	}
	return 0;
}
