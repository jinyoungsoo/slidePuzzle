// 20230608_puzzle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

void Desc002();
void input(int& moveX, int& moveY);
void swap(int* a, int* b);

int main()
{
    int moveX = 2;
    int moveY = 2;

    int loop = 1;
    while (loop == 1)
    {
        Desc002();
        input(moveX, moveY);
        system("cls");
    }

    return 0;
}

void input(int& moveX, int& moveY)
{
    char userInput = _getch();


    switch (userInput)
    {
    case 72:            //방향키 위쪽 아스키 코드 
        if (moveY > 0)
            moveY--;
        break;
    case 75:            //방향키 왼쪽 아스키 코드
        if (moveX > 0)
            moveX--;
        break;
    case 80:           //방향키 아래 아스키 코드 
        if (moveY < 3 - 1)
            moveY++;
        break;
    case 77:            //방향키 오른쪽 아스키 코드
        if (moveX < 3 - 1)
            moveX++;
        break;
    }
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Desc002()
{
    int moveX = 2;
    int moveY = 2;

    char puzzle[3][3] = {
      {0, 1, 2},
      {3, 4, 5},
      {6, 7, 8}
    };

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (x == moveX && y == moveY)
            {
                //printf("\n");
            }
            else
            {
                printf("%d", puzzle[y][x]);
            }
        }
        printf("\n");
    }
}

