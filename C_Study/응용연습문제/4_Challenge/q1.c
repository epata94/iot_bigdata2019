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

   printf("도서 정보 입력\n");

   for (i = 0; i < 3; i++){
      printf("저자: ");
      scanf("%s", &arr[i].Name);

      printf("제목: ");
      scanf(" %s", &arr[i].Subject);

      printf("페이지 수: ");
      scanf("%d", &arr[i].Page);

   }
   printf("\n");

   printf("도서 정보 출력\n");
   for (i = 0; i < 3; i++){
      printf("book %d \n", i + 1);
      printf("저자: %s \n", arr[i].Name);
      printf("제목: %s \n", arr[i].Subject);
      printf("페이지 수: %d \n", arr[i].Page);
      printf("\n");
   }
}
