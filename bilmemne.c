#include <stdio.h>
#include <stdlib.h>


void dc_direnc(float ro,float s, float l){
	float rdc;
	rdc=(ro*l)/s;
	
	printf("%f",rdc);
	
}

void arnold(float rdc){
float x,rac;
x=(sqrt((4*314.16)/(rdc*pow(10,9))));
printf("%f",x);
if(x<3){
	rac=(rdc*((sqrt(1+(pow(x,4)/48))+1)/2));
	printf("1-Ac direnc:%f",rac);
}

else if(x>3){
rac=(rdc*((x/(2*sqrt(2)))+0.26));	
printf("2-Ac direnc:%f",rac);
	
}	
	
}



int main() {
	int a,b,c,d,demet,fazlar;
	float ro,l,s,rdc;
	
printf("Gerilim seviyesini Secin \n");
printf(" 1: 34.5kV \n 2: 154kV \n 3: 220kV \n 4: 400kV \n ");
system("color A");
scanf("%d",&a);

if(a==1){
printf("34.5kv \n");	
}


else if(a==2){
printf("Devre Tipini seçin \n 1: Tek devre \n 2:Cift devre \n");
scanf("%d",&b);

if(b==1){
printf("demet arasi arasi uzaklik: \n");

	scanf("%d",&demet);
	
printf("Fazlar arasi uzaklik: \n");	

      scanf("%d",&fazlar);
      
      printf("ro: \n  l: \n s: \n");
      scanf("%f",&ro);
      scanf("%f",&l);
      scanf("%f",&s);
      rdc=(ro*l)/s;
    
      arnold(rdc);
      
}


else if(b==2){
printf("cift \n");	
}

	
}

else if(a==3){
printf("220kv \n");	
}

else if(a==4){
printf("400kv \n");	
}

else {
printf("hata!");	
}

}
