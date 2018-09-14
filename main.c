#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
int first,second,third,fourth, resistance ;
char banda[10], bandb[10], bandmulti[10], bandtol[10];
printf("Enter the colours accordingly\n");
printf("1st band:\n");
gets(banda);
printf("2nd Band:\n");
gets(bandb);
printf("3rd band:\n");
gets(bandmulti);
printf("4th band:\n");
gets(bandtol);
//FOR A BAND
if (strcmp(banda, "red")==0){first=2;}
if (strcmp(banda, "brown")==0){first=1;}
if (strcmp(banda, "orange")==0){first=3;}
if (strcmp(banda, "yellow")==0){first=4;}
if (strcmp(banda, "green")==0){first=5;}
if (strcmp(banda, "blue")==0){first=6;}
if (strcmp(banda, "violet")==0){first=7;}
if (strcmp(banda, "gray")==0){first=8;}
if (strcmp(banda, "white")==0){first=9;}
//FOR B BAND
if (strcmp(bandb, "black")==0){ second=0;}
if (strcmp(bandb, "brown")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=2;}
if (strcmp(bandb, "orange")==0){ second=3;}
if (strcmp(bandb, "yellow")==0){ second=4;}
if (strcmp(bandb, "green")==0){ second=5;}
if (strcmp(bandb, "blue")==0){ second=6;}
if (strcmp(bandb, "violet")==0){ second=7;}
if (strcmp(bandb, "gray")==0){ second=8;}
if (strcmp(bandb, "white")==0){ second=9;}
//FOR MULTIPLIER
if (strcmp(bandmulti, "black")==0){third=10;}
if (strcmp(bandmulti, "brown")==0){third=100;}
if (strcmp(bandmulti, "red")==0){third=1000;}
if (strcmp(bandmulti, "orange")==0){third=10000;}
if (strcmp(bandmulti, "yellow")==0){third=100000;}
if (strcmp(bandmulti, "green")==0){third=1000000;}
if (strcmp(bandmulti, "blue")==0){third=10000000;}
if (strcmp(bandmulti, "violet")==0){third=100000000;}
if (strcmp(bandmulti, "gray")==0){third=1000000000;}
if (strcmp(bandmulti, "white")==0){third=10;}
if (strcmp(bandmulti, "gold")==0){third=10;}
if (strcmp(bandmulti, "silver")==0){third=10;}
//FOR TOLERANCE
if (strcmp(bandtol,"brown")==0){fourth=1;}
if (strcmp(bandtol,"red")==0){fourth=2;}
if (strcmp(bandtol,"green")==0){fourth=3;}
if (strcmp(bandtol,"blue")==0){fourth=4;}
if (strcmp(bandtol,"violet")==0){fourth=5;}
if (strcmp(bandtol,"gray")==0){fourth=6;}
if (strcmp(bandtol,"gold")==0){fourth=7;}
if (strcmp(bandtol,"silver")==0){fourth=8;}
resistance=((first*10)+(second))*(third);
printf("resistance is %d ohm with tolerance %d \n", resistance, fourth);
return 0;
}
