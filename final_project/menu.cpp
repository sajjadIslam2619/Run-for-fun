#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<mmsystem.h>

void startgame(void);
void howtoplay(void);


char menu_cur;
int e;

void menu(int wind_x,int wind_y)
{
    int test1=1;
    setfillstyle(SOLID_FILL,WHITE);
    bar(-1,-1,801,701);
    //readimagefile("image/developed by.jpg",0,0,1000,716);
    //delay(5000);



    readimagefile("image/menu1.jpg",0,50,800,616);
    while(1)
    {
        if (kbhit())
        {
            //char *song="sound/introSound.wav";
            //sndPlaySound(song,SND_ASYNC);

            menu_cur=getch();
            if(menu_cur==27)
            {
                return;
            }
            else if(menu_cur==80)
            {
                test1++;
            }
            else if(menu_cur==72)
            {
                test1--;
            }
            else if(menu_cur==13)
            {
                if(test1==1)
                {
                    startgame();
                }
                else if(test1==2)
                {
                    howtoplay();
                }
                //else if(test1==3)
                //{
                //highscore();
                //}
                else
                {
                    exit(0);    //exit from the game....
                }
            }

            if(test1>4)
            {
                test1=1;
            }
            else if(test1<1)
            {
                test1=4;
            }


            if(test1==1)readimagefile("image/menu1.jpg",0,50,800,616);
            if(test1==2)readimagefile("image/menu2.jpg",0,50,800,616);
            if(test1==3)readimagefile("image/menu3.jpg",0,50,800,616);
            if(test1==4)readimagefile("image/menu4.jpg",0,50,800,616);

        }
    }
}

void howtoplay (void)
{
    int wind_x,wind_y;
    while(1)
    {
        readimagefile("image/how to play.jpg",0,50,1000,716);
        if(kbhit())
        {
            menu_cur=getch();
            if(menu_cur==27)
            {
                menu(wind_x,wind_y);
            }
        }
    }
}
