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
 printf(" 1 � ����� ��������� ������ n ����������� �����\n "); // �� 1 �� 20 ����� (��� ���� �����) 0- ������� �� ���������
 printf("2 � ����� ����� ������ n ����������� �����\n ");
 printf("3 � ����� ��������� ������ ����� �� ������ n ����������� �����\n ");
 printf("4 � ����� ����� ������ ����� �� ������ n ����������� �����\n ");
 printf("5 � ����� �� ���������\n ");
 printf("����� ��� �����? \n ");
 scanf("%d", &c);
 switch (c)
 {
case 1:
    {
    int n,i;
    printf("������� n-�� ���-��: ");
    scanf("%d",&n);
     while(n!=0) {
        for(i=1;i<=20;i++){
          printf("%d=%d\n",i,i*i);
		                     }
      {
         int a,s=0,ch;
         printf("������� a: ");
         scanf("%d",&a);
         for(i=1;i<=a;i++)
          { scanf("%d",&ch);
              s+=ch;}
                       printf("����� ���������(����������� �����)=  %d\n", s);
                                     }
                             break;
                          }
                      }          
case 2: 
    {
    int n,i;
    printf("������� n-�� ���-��: ");
    scanf("%d",&n);
     while(n!=0) {
        for(i=1;i<=20;i++){
          printf("%d=%d\n",i,i*i*i);
		                     }
      {
         int a,s=0,ch;
         printf("������� a: ");
         scanf("%d",&a);
         for(i=1;i<=a;i++)
          { scanf("%d",&ch);
              s+=ch;}
                       printf("����� �����(����������� �����)=  %d\n", s);
                                     }
                             break;
                          }
                      }                
case 3:
    {
    int n,i;
    printf("������� n-�� ���-��: ");
    scanf("%d",&n);
     while(n!=0) {
        for(i=2;i<=20;i+=2){
          printf("%d=%d\n",i,i*i);
		                     }
      {
         int a,s=0,ch;
         printf("������� a: ");
         scanf("%d",&a);
         for(i=2;i<=a;i+=2)
          { scanf("%d",&ch);
              s+=ch;}
                       printf("����� ���������(������ �����)=  %d\n", s);
                                     }
                             break;
                          }
                      }  	
case 4:
    {
    int n,i;
    printf("������� n-�� ���-��: ");
    scanf("%d",&n);
     while(n!=0) {
        for(i=2;i<=20;i+=2){
          printf("%d=%d\n",i,i*i*i);
		                     }
      {
         int a,s=0,ch;
         printf("������� a: ");
         scanf("%d",&a);
         for(i=2;i<=a;i+=2)
          { scanf("%d",&ch);
              s+=ch;}
                       printf("����� �����(������ �����)=  %d\n", s);
                                     }
                             break;
                          }
                      }                                                                  
case 5: return; break;
default: printf("�������� ��������.");
 }
}
}