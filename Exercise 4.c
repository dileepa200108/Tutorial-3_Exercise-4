#include<stdio.h>
int main(){
int m;
printf("Enter IP Module Marks :");
scanf("%d",&m);
if (100>=m || m>=80){
	printf("A");
}
else if(79>=m || m>=70 ){
	printf("B");
	
}
else if(m<=69 || m>=45){
	printf("C");
}
else if(m<45){
	printf("F");
}
return 0;
}
