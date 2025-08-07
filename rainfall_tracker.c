#include<stdio.h>
void main()
{
float rainfall[3][4];
float total = 0.0;
float avg =0.0;
printf("\n enter rainfall data for three cities");
for(int c=0;c<3;c++){
printf("\n enter data for city%d :",c+1);
for(int m=0;m<4;m++){
printf("\n month %d :",m+1);
scanf("%f",&rainfall[c][m]);
}
}
printf("\n rainfall tracking");
printf("\n SNo\t city name \t month1 \t month2 \t month3 \tmonth4 \t avg rainfall ");
printf("\n---------------------------------------------------------------------------------------------------");
for(int c=0;c<3;c++){
printf("\n %d”,c+1);
printf(“\t city %d",c+1);
for(int m=0;m<4;m++){
printf("\t %f", rainfall[c][m]);
total+=rainfall[c][m];
}
avg= total/4;
printf("\t %f",avg);
printf("\n—---------------------------------------------------------------------------------------------");
}
}
