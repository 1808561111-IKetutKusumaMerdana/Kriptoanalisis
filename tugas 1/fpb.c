#include <stdio.h>
#include <conio.h>

main(){
  int a,b,c,sisa;
  printf("program menentukan FPB dari 2 buah bilangan\n\n");
  printf("masukkan bilangan pertama\t : ");scanf("%d",&a);
  printf("masukkan bilangan kedua \t : ");scanf("%d",&b);
   if(a<b){
     c=a;
     a=b;
     b=c;
  }

  do{
     sisa = a%b;
     a=b;
     b=sisa;
  }while(sisa !=0);

  printf(" \nFPBnya = %d",a);
  getch();
}
