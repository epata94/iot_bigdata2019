#include <stdio.h>
#pragma warning (disable:4996)


int makeSnail(int (*ptrArr)[100], int size);

int showArray(int (*ptrArr)[100], int size);



int main(void){

    int num;

    int arr[100][100] = {0};

    

    printf("숫자를 입력하시오 : ");

    scanf("%d", &num);

    

    makeSnail(arr, num);

    showArray(arr, num);

    

    return 0;

}



int makeSnail(int (*ptrArr)[100], int size){

    int i = 0, j = 0;

    int x =0, y = 0;

    int count = 1, limit = size, turn = 0;

    int plusMinus = +1;

    
    while (limit >=0){

        for(i=1; i<limit; i++){

            ptrArr[x][y] = count;

            y=y+1*plusMinus;

            count++;

        }

        turn++;


        for(j=1; j<limit; j++){

            ptrArr[x][y] = count;

            x=x+1*plusMinus;

            count++;

        }

        

        plusMinus=plusMinus * (-1);

        turn++;

        if(turn%4==0){

            limit= limit-2;

            x++;

            y++;

        }

    }

    ptrArr[x][y] = count;

    return 0;

}



int showArray(int (*ptrArr)[100], int size){

    int i,j;

    for(i=0; i<size; i++){

        for (j=0; j<size; j++)

            printf("%2d ", ptrArr[i][j]);

    printf("\n");

    }

    return 0;

}


