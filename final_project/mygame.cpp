#include<graphics.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
//void setbkcolor(int color);
int wind_x=800,wind_y=700;

void menu(int wind_x,int wind_y);
int exit(void);
//int x;

int main()
{

    initwindow(wind_x,wind_y,"mygame");
    char c;
    readimagefile("image/intro.jpg",0,0,800,700);
    delay(2000);
    while(1)
    {

        readimagefile("image/developed by.jpg",0,0,1000,716);
        if(kbhit())
        {
            c=getch();
            if(c==13)
            {
                menu(wind_x,wind_y);

            }
        }

    }


}


