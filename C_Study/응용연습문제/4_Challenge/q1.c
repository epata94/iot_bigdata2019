#include<stdio.h>
#pragma warning (disable:4996)

struct library{
   char Name[20];
   char Subject[30];
   int Page;
};


int main(){
   int i;
   struct library arr[3];

   printf("���� ���� �Է�\n");

   for (i = 0; i < 3; i++){
      printf("����: ");
      scanf("%s", &arr[i].Name);

      printf("����: ");
      scanf(" %s", &arr[i].Subject);

      printf("������ ��: ");
      scanf("%d", &arr[i].Page);

   }
   printf("\n");

   printf("���� ���� ���\n");
   for (i = 0; i < 3; i++){
      printf("book %d \n", i + 1);
      printf("����: %s \n", arr[i].Name);
      printf("����: %s \n", arr[i].Subject);
      printf("������ ��: %d \n", arr[i].Page);
      printf("\n");
   }
}
