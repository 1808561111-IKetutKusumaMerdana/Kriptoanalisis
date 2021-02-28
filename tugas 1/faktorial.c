#include<stdio.h>
#include<conio.h>

int main()
{
  int hasil=1,bil,i;
  printf("Masukkan bilangan faktorial: ");


  scanf("%d",&bil);
  for(i=1;i<=bil;i++)
  {
  hasil=i*hasil;
  }
  printf("faktorial dari %d! adalah %d",bil,hasil);
getch();
}
