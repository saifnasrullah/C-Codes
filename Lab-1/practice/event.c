#include <stdio.h>
int main(){
 int hour, hour2, hr,minit1,minit2,day1,day2,second1,second2;

 scanf("Dia %d",&day1);
 scanf("%d : %d : %d\n",&hour,&minit1,&second1);
 scanf("Dia %d",&day2);
 scanf("%d : %d : %d",&hour2,&minit2,&second2);

second1 = second2 - second1;
minit1 = minit2 - minit1;
hour = hour2 - hour;
day1 = day2 - day1;

if(second1<0){
	second1+=60;
	minit1--;
}

if(minit1<0){
	minit1+=60;
	hour--;
}

if(hour<0){
	hour+=24;
	day1--;
}

    printf("%d dia(s)\n", day1);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minit1);
    printf("%d segundo(s)\n", second1);


 return 0;
}
    