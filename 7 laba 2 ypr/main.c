#include <stdio.h>
#include <string.h>
#include <locale.h>


int main() {
   setlocale(LC_ALL,"Russian");
   char a[100], b[100];
   printf("������� 1-�� �����\n");
   fgets(a, sizeof(a), stdin);
   printf("������� 2-�� �����\n");
   fgets(b, sizeof(b), stdin);

   if (strcmp(a,b) == 0)
      printf("����� ���������� �����.\n");
   else if (strcmp(a,b) == 1)
      printf("1-�� ����� ������ ��� 2-�� .\n");
      else if (strcmp(a,b) == -1)
      printf("2-�� ����� ������ ��� 1-��.\n");
}