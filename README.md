# Resistance-calculator
fun little resistance calculator
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main(){
int first,second,third,fourth, resistance ;
char banda[10], bandb[10], bandmulti[10], bandtol[10];
clrscr();
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
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
if (strcmp(banda, "red")==0){first=1;}
//FOR B BAND
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}
if (strcmp(bandb, "red")==0){ second=1;}

//FOR MULTIPLIER
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}
if (strcmp(bandmulti, "red")==0){third=10;}


//FOR TOLERANCE
if (strcmp(bandtol,"red")==0){fourth=15;}
if (strcmp(bandtol,"red")==0){fourth=15;}
if (strcmp(bandtol,"red")==0){fourth=15;}
if (strcmp(bandtol,"red")==0){fourth=15;}
if (strcmp(bandtol,"red")==0){fourth=15;}
if (strcmp(bandtol,"red")==0){fourth=15;}
if (strcmp(bandtol,"red")==0){fourth=15;}
if (strcmp(bandtol,"red")==0){fourth=15;}


resistance=((first*10)+(second))*(third);
printf("resistance is %d ohm with tolerance %d %\n", resistance, fourth);
getch();
}
