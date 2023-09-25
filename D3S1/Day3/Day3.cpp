
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DELAY 500 //시간 제한

int main()
{
    printf("\n    +press the command+\n\n");

    int timeover = 0;

    char command = '0'; //방금 입력받은 키

    char KeyA = '0';        //조합키 A
    char KeyB = '0';        //조합키 B
    char KeyC = '0';        //조합키 C

    time_t finish_time, start_time;

    printf("\n아무 키를 누르고 시작 ");

    while (command != 27)
    {
        //초기화
        command = 0;

        KeyA = 0;
        KeyB = 0;
        KeyC = 0;

        timeover = 0;

        command = _getch();
        start_time = clock();

        while (timeover != 1)
        {

            finish_time = clock();

            KeyA = KeyB;
            KeyB = KeyC;
            KeyC = command;

            printf("\n %c,%c,%c", KeyA, KeyB, KeyC);

            if (command == 27)
            {
                timeover = 1;
                break;
            }

            if (difftime(finish_time, start_time) > DELAY)
            {
                timeover = 1;
                break;
            }

            if (KeyA == '1')
            {
                if (KeyB == '2')
                {
                    if (KeyC == '3')
                    {
                        printf("\n123 발동");
                        timeover = 1;
                        break;
                    }
                }
            }

            if (KeyA == 'q')
            {
                if (KeyB == 'w')
                {
                    if (KeyC == 'e')
                    {
                        printf("\nqwe 발동");
                        timeover = 1;
                        break;
                    }
                }
            }

            if (KeyA == 'a')
            {
                if (KeyB == 'a')
                {
                    if (KeyC == 'a')
                    {
                        printf("\naaa 발동");
                        timeover = 1;
                        break;
                    }
                }
            }

            if (KeyA == '80')
            {
                if (KeyB == '77')
                {
                    if (KeyC == 'a')
                    {
                        printf("\n아도겐! =o");
                        timeover = 1;
                        break;
                    }
                }
            }


            command = _getch();

        }
    }
    return 0;
}
