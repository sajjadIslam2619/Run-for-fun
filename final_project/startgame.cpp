#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<mmsystem.h>

void roadside(void);
void roadside1(int);
void keyboard(void);
void roadcar(int );
void menu(int wind_x,int wind_y);
void highscore(void);
void show_highscore(void);

FILE *high_score;


int count=0;
int hight=0,width=50;
char arr[100];

int x=500,y=600;
int c1ya1=-100,c1yb1=0,c1ya2=-100,c1yb2=0;
int c1ya3=-100,c1yb3=0,c1ya4=-100,c1yb4=0;

int ya1=0,yb1=100,ya2=-100,yb2=0,ya3=-100,yb3=0,ya4=-100,yb4=0,ya5=-100,yb5=0,ya6=-100,yb6=0,ya7=-100,yb7=0,ya8=-100,yb8=0;
int ya9=-100,yb9=0;
int t1=1,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0;
int r,r1;
int scr;
char sr[100];
int hscr;
char hsr[100];
char score[]= {"YOUR SCORE :::"};
char highScore[]= {"HIGH SCORE :::"};
int spd=50;
char sd[100];

void startgame(void)
{
    if(count >0)
    {

         hight=0,width=50;
         arr[100];

        x=500,y=600;
         c1ya1=-100,c1yb1=0,c1ya2=-100,c1yb2=0;
         c1ya3=-100,c1yb3=0,c1ya4=-100,c1yb4=0;

        ya1=0,yb1=100,ya2=-100,yb2=0,ya3=-100,yb3=0,ya4=-100,yb4=0,ya5=-100,yb5=0,ya6=-100,yb6=0,ya7=-100,yb7=0,ya8=-100,yb8=0;
         ya9=-100,yb9=0;
         t1=1,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0;
         r,r1;
         scr=0;
         sr[100];
         hscr=0;
         hsr[100];
         //score[]= {"YOUR SCORE :::"};
         //highScore[]= {"HIGH SCORE :::"};
         spd=50;
         sd[100];

    }
    cleardevice();
    setfillstyle(SOLID_FILL,WHITE);
    bar(-1,-1,801,701);
    setfillstyle(SOLID_FILL,RED);
    bar(200,0,210,700);
    setcolor(WHITE);

    settextstyle(8,0,3);
    outtextxy(0,0, "score : ");
    settextstyle(8,0,3);
    outtextxy(0,20, "speed :");
    //settextstyle(8,0,3);
    //outtextxy(0,40, "life :");
    roadside();
    //delay(1000000);
}

void roadside(void)
{
    readimagefile("image/maincar.jpg",x,600,y,700);
    while(1)
    {
        //r=rand()%12;
        r=rand()%4;
        r1=rand()%5;
        for(int i=0; i<10; i++)
        {
            int spd=50;

            //outtextxy(0,0, "score :");
            itoa(scr,sr,10);
            outtextxy(100,0, sr);
            settextstyle(8,0,3);
            scr++;
            spd=r1+spd;
            itoa(spd,sd,10);
            outtextxy(100,20, sd);
            settextstyle(8,0,3);
            roadside1(r);

        }
    }

}

void roadside1(int)
{
    if(t1)
    {
        readimagefile("image/tree1.jpg",220,ya1,320,yb1);
        readimagefile("image/tree4.jpg",680,ya1,780,yb1);
        ya1+=15;
        yb1+=15;
        if(ya1>=900)
        {
            t1=0;
            ya1=-100;
            yb1=0;
        }
        if(yb1>=100)
        {
            t2=1;
        }

    }

    keyboard();
    roadcar(r);

    if(t2)
    {
        readimagefile("image/tree2.jpg",220,ya2,320,yb2);
        readimagefile("image/tree3.jpg",680,ya2,780,yb2);
        ya2+=15;
        yb2+=15;
        if(ya2>=900)
        {
            ya2=-100;
            yb2=0;
        }
        if(yb2>=100)
        {
            t3=1;
        }

    }

    roadcar(r);
    keyboard();

    if(t3)
    {
        readimagefile("image/tree3.jpg",220,ya3,320,yb3);
        readimagefile("image/tree4.jpg",680,ya3,780,yb3);
        ya3+=15;
        yb3+=15;
        if(ya3>=900)
        {
            ya3=-100;
            yb3=0;
        }
        if(yb3>=100)
        {
            t4=1;
        }

    }

    roadcar(r);
    keyboard();

    if(t4)
    {
        readimagefile("image/house1.jpg",220,ya4,320,yb4);
        readimagefile("image/house7.jpg",680,ya4,780,yb4);
        ya4+=15;
        yb4+=15;
        if(ya4>=900)
        {
            ya4=-100;
            yb4=0;
        }
        else if(yb4>=100)
        {
            t5=1;
        }

    }

    roadcar(r);
    keyboard();

    if(t5)
    {
        readimagefile("image/tree1.jpg",220,ya5,320,yb5);
        readimagefile("image/house3.jpg",680,ya5,780,yb5);
        ya5+=15;
        yb5+=15;
        if(ya5>=900)
        {
            ya5=-100;
            yb5=0;
        }
        else if(yb5>=100)
        {
            t6=1;
        }

    }

    roadcar(r);
    keyboard();

    if(t6)
    {
        readimagefile("image/house5.jpg",220,ya6,320,yb6);
        readimagefile("image/house6.jpg",680,ya6,780,yb6);
        ya6+=15;
        yb6+=15;
        if(ya6>=900)
        {
            ya6=-100;
            yb6=0;
        }
        if(yb6>=100)
        {
            t7=1;
        }

    }

    roadcar(r);
    keyboard();

    if(t7)
    {
        readimagefile("image/tree2.jpg",220,ya7,320,yb7);
        readimagefile("image/house4.jpg",680,ya7,780,yb7);
        ya7+=15;
        yb7+=15;
        if(ya7>=900)
        {
            ya7=-100;
            yb7=0;
        }
        if(yb7>=100)
        {
            t8=1;
        }

    }

    roadcar(r);
    keyboard();

    if(t8)
    {
        readimagefile("image/house3.jpg",220,ya8,320,yb8);
        readimagefile("image/house5.jpg",680,ya8,780,yb8);
        ya8+=15;
        yb8+=15;
        if(ya8>=900)
        {
            ya8=-100;
            yb8=0;
        }
        if(yb8>=100)
        {
            t9=1;
        }

    }

    roadcar(r);
    keyboard();
    if(t9)
    {
        readimagefile("image/tree2.jpg",220,ya9,320,yb9);
        readimagefile("image/house4.jpg",680,ya9,780,yb9);
        ya9+=15;
        yb9+=15;
        if(ya9>=900)
        {
            ya9=-100;
            yb9=0;
        }
        if(yb9>=100)
        {
            t1=1;
        }

    }
    roadcar(r);
    keyboard();

}

void keyboard(void)
{
    char menu_cur;

    if(x==500)
    {
        readimagefile("image/maincar.jpg",500,600,600,700);
        if(kbhit())
        {
            menu_cur=getch();
            if(menu_cur==75)
            {
                x=450;
                readimagefile("image/maincar.jpg",450,600,550,700);
                readimagefile("image/whiteimage.jpg",500,600,600,700);
            }

        }
    }
    if(x==450)
    {
        readimagefile("image/maincar.jpg",450,600,550,700);
        if(kbhit())
        {
            menu_cur=getch();
            if(menu_cur==75)
            {
                x=400;
                readimagefile("image/maincar.jpg",400,600,500,700);
                readimagefile("image/whiteimage.jpg",450,600,550,700);
            }
            if(menu_cur==77)
            {
                x=500;
                readimagefile("image/maincar.jpg",500,600,600,700);
                readimagefile("image/whiteimage.jpg",450,600,550,700);
            }

        }
    }
    if(x==400)
    {
        readimagefile("image/maincar.jpg",400,600,500,700);
        if(kbhit())
        {

            menu_cur=getch();
            if(menu_cur==75)
            {
                x=350;
                readimagefile("image/maincar.jpg",350,600,450,700);
                readimagefile("image/whiteimage.jpg",400,600,500,700);
            }
            if(menu_cur==77)
            {
                x=450;
                readimagefile("image/maincar.jpg",450,600,550,700);
                readimagefile("image/whiteimage.jpg",400,600,500,700);
            }

        }
    }
    if(x==350)
    {
        readimagefile("image/maincar.jpg",350,600,450,700);
        if(kbhit())
        {
            menu_cur=getch();
            if(menu_cur==77)
            {
                x=400;
                readimagefile("image/maincar.jpg",400,600,500,700);
                readimagefile("image/whiteimage.jpg",350,600,450,700);
            }

        }
    }

}

void roadcar(int carNo)
{

    printf("%d",carNo);

    if(carNo==0)
    {
        readimagefile("image/whiteimage.jpg",350,c1ya1-100,450,c1yb1+50);
        readimagefile("image/car1.jpg",350,c1ya1,450,c1yb1);//y axis of car1.......c1y
        if(c1ya1>=800)
        {
            c1ya1=-100;
            //c1ya1=0;
            c1yb1=0;
        }
        //keyboard();
        if(x==350)
        {
            readimagefile("image/maincar.jpg",350,600,450,700);
            if(c1yb1>=600)
            {
                readimagefile("image/crashed.jpg",350,100,600,600);
                readimagefile("image/whiteimage.jpg",350,600,600,700);
                delay(1000);
                //cleardevice();
                highscore();
                // exit(0);
            }
        }
        if(x==400)
        {
            if(c1yb1>=600)
            {
                readimagefile("image/crashed.jpg",350,100,600,600);
                readimagefile("image/whiteimage.jpg",350,600,600,700);
                delay(1000);
                highscore();
                //exit(0);
            }
        }



        c1ya1+=20;
        c1yb1+=20;
    }

    else if(carNo==1)
    {
        readimagefile("image/whiteimage.jpg",500,c1ya2-100,600,c1yb2+50);
        readimagefile("image/car2.jpg",500,c1ya2,600,c1yb2);//y axis of car1.......c1y
        if(c1ya2>=800)
        {
            c1ya2=-100;
            c1yb2=0;
        }
        if(x==450)
        {
            if(c1yb2>=600)
            {
                readimagefile("image/crashed.jpg",350,100,600,600);
                readimagefile("image/whiteimage.jpg",350,600,600,700);
                delay(1000);
                highscore();
                //exit(0);
            }
        }
        if(x==500)
        {
            if(c1yb2>=600)
            {
                readimagefile("image/crashed.jpg",350,100,600,600);
                readimagefile("image/whiteimage.jpg",350,600,600,700);
                delay(1000);
                //cleardevice();
                highscore();
                //exit(0);
            }
        }
        c1ya2+=20;
        c1yb2+=20;
    }

    if(carNo==2)
    {
        readimagefile("image/whiteimage.jpg",350,c1ya3-100,450,c1yb3+50);
        readimagefile("image/car3.jpg",350,c1ya3,450,c1yb3);//y axis of car1.......c1y
        if(c1ya3>=800)
        {
            c1ya3=-100;
            c1yb3=0;
        }
        if(x==350)
        {
            readimagefile("image/maincar.jpg",350,600,450,700);
            if(c1yb3>=600)
            {
                readimagefile("image/crashed.jpg",350,100,600,600);
                readimagefile("image/whiteimage.jpg",350,600,600,700);
                delay(1000);
                highscore();
                //exit(0);
            }
        }
        if(x==400)
        {
            if(c1yb3>=600)
            {
                readimagefile("image/crashed.jpg",350,100,600,600);
                readimagefile("image/whiteimage.jpg",350,600,600,700);
                delay(1000);
                highscore();
                //exit(0);
            }
        }
        c1ya3+=20;
        c1yb3+=20;
    }
    if(carNo==3)
    {
        readimagefile("image/whiteimage.jpg",500,c1ya4-100,600,c1yb4+50);
        readimagefile("image/car4.jpg",500,c1ya4,600,c1yb4);//y axis of car1.......c1y
        if(c1ya4>=800)
        {
            c1ya4=-100;
            c1yb4=0;
        }
        if(x==450)
        {
            if(c1yb4>=600)
            {
                readimagefile("image/crashed.jpg",350,100,600,600);
                readimagefile("image/whiteimage.jpg",350,600,600,700);
                delay(1000);
                highscore();
                //exit(0);
            }
        }
        if(x==500)
        {
            if(c1yb4>=600)
            {
                readimagefile("image/crashed.jpg",350,100,600,600);
                readimagefile("image/whiteimage.jpg",350,600,600,700);
                delay(1000);
                //cleardevice();
                highscore();
                //exit(0);
            }
        }
        c1ya4+=20;
        c1yb4+=20;
    }

    return ;

}

void highscore(void)
{
    setfillstyle(SOLID_FILL,WHITE);
    bar(-1,-1,801,701);
    outtextxy(400,300, score);
    settextstyle(8,0,3);
    outtextxy(400,350, sr);
    settextstyle(8,0,6);

    show_highscore();




    delay(2000);
    readimagefile("image/end.jpg",0,0,800,700);

    count++;

    delay(2000);
    menu(800,700);

}


void show_highscore(void)
{

    high_score=fopen("highscore.txt", "r");
    fprintf(high_score,"%d",scr);

    fclose(high_score);



}



