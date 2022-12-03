#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
 void main()
{
	setlocale(LC_ALL,"Russian");
int a, b, c;
while(1) {
 printf("Menu:\n");
 printf(" 1 Ц сумма квадратов первых n натуральных чисел\n "); // от 1 до 20 чисел (дл€ всех задач) 0- выходит из программы
 printf("2 Ц сумма кубов первых n натуральных чисел\n ");
 printf("3 Ц сумма квадратов чЄтных чисел из первых n натуральных чисел\n ");
 printf("4 Ц сумма кубов чЄтных чисел из первых n натуральных чисел\n ");
 printf("5 Ц выход из программы\n ");
 printf(" акой ваш выбор? \n ");
 scanf("%d", &c);
 switch (c)
 {
case 1:
    {
    int n,i;
    printf("¬ведите n-ое кол-во: ");
    scanf("%d",&n);
     while(n!=0) {
        for(i=1;i<=20;i++){
          printf("%d=%d\n",i,i*i);
		                     }
      {
         int a,s=0,ch;
         printf("¬ведите a: ");
         scanf("%d",&a);
         for(i=1;i<=a;i++)
          { scanf("%d",&ch);
              s+=ch;}
                       printf("—умма квадратов(натуральных чисел)=  %d\n", s);
                                     }
                             break;
                          }
                      }          
case 2: 
    {
    int n,i;
    printf("¬ведите n-ое кол-во: ");
    scanf("%d",&n);
     while(n!=0) {
        for(i=1;i<=20;i++){
          printf("%d=%d\n",i,i*i*i);
		                     }
      {
         int a,s=0,ch;
         printf("¬ведите a: ");
         scanf("%d",&a);
         for(i=1;i<=a;i++)
          { scanf("%d",&ch);
              s+=ch;}
                       printf("—умма кубов(натуральных чисел)=  %d\n", s);
                                     }
                             break;
                          }
                      }                
case 3:
    {
    int n,i;
    printf("¬ведите n-ое кол-во: ");
    scanf("%d",&n);
     while(n!=0) {
        for(i=2;i<=20;i+=2){
          printf("%d=%d\n",i,i*i);
		                     }
      {
         int a,s=0,ch;
         printf("¬ведите a: ");
         scanf("%d",&a);
         for(i=2;i<=a;i+=2)
          { scanf("%d",&ch);
              s+=ch;}
                       printf("—умма квадратов(чЄтных чисел)=  %d\n", s);
                                     }
                             break;
                          }
                      }  	
case 4:
    {
    int n,i;
    printf("¬ведите n-ое кол-во: ");
    scanf("%d",&n);
     while(n!=0) {
        for(i=2;i<=20;i+=2){
          printf("%d=%d\n",i,i*i*i);
		                     }
      {
         int a,s=0,ch;
         printf("¬ведите a: ");
         scanf("%d",&a);
         for(i=2;i<=a;i+=2)
          { scanf("%d",&ch);
              s+=ch;}
                       printf("—умма кубов(чЄтных чисел)=  %d\n", s);
                                     }
                             break;
                          }
                      }                                                                  
case 5: return; break;
default: printf("Ќеверное значение.");
 }
}
}