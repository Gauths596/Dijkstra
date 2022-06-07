/*#include<GL/glut.h>
#include<stdio.h>
/*void init()
{
 glClearColor(0.1,0.6,0.8,0);
   	//glClearColor(1,1,1,1);
   	 gluOrtho2D(0,1000,0,1000);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();

}*/

/*void reshape(int w,int h)
{
    glClearColor(0.1,0.6,0.8,0);
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
     gluOrtho2D(0,1000,0,1000*(float)h/(float)w);
    else
         gluOrtho2D(0,1000*(float)w/(float)h,0,1000);

}

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);


  glColor3f(1,0,0);//


glBegin(GL_QUADS); //rectangle (structure of the building)
glColor3f(0.1,0.4,1.0);
glVertex2i(50,200);
glVertex2i(50,850);
glVertex2i(400,850);
glVertex2i(400,200);
glEnd();


glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2i(50,200);
glVertex2i(50,850);
glVertex2i(400,850);
glVertex2i(400,200);
glEnd();




glColor3f(0.7,0.7,0.7); //top roof of the building (triangle)
glBegin(GL_POLYGON);
    glVertex2i(20,830);
    glVertex2i(225,980);
    glVertex2i(430,830);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(20,830);
    glVertex2i(225,980);
    glVertex2i(430,830);
    glEnd();


    glColor3f(0.72,0.45,0.20); // top window(left side topmost)
    glBegin(GL_QUADS);
    glVertex2i(60,650);
    glVertex2i(60,750);
    glVertex2i(130,750);
    glVertex2i(130,650);
    glEnd();


     glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(60,650);
    glVertex2i(60,750);
    glVertex2i(130,750);
    glVertex2i(130,650);
    glEnd();






   glColor3f(0.72,0.45,0.20);//window downwards(below the left topmost window) mid window
    glBegin(GL_QUADS);
    glVertex2i(60,450);
    glVertex2i(60,550);
    glVertex2i(130,550);
    glVertex2i(130,450);
    glEnd();

     glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
     glVertex2i(60,450);
    glVertex2i(60,550);
    glVertex2i(130,550);
    glVertex2i(130,450);
    glEnd();





    glColor3f(0.72,0.45,0.20);//1st window (1st leftmost window)
    glBegin(GL_QUADS);
    glVertex2i(60,250);
    glVertex2i(60,350);
    glVertex2i(130,350);
    glVertex2i(130,250);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
     glVertex2i(60,250);
    glVertex2i(60,350);
    glVertex2i(130,350);
    glVertex2i(130,250);
    glEnd();




    /*mid window(2nd) in between*/
  /*  glColor3f(0.72,0.45,0.20); //mid topmost window
        glBegin(GL_QUADS);
        glVertex2i(180,650);
        glVertex2i(180,750);
        glVertex2i(250,750);
        glVertex2i(250,650);
        glEnd();

        glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
     glVertex2i(180,650);
        glVertex2i(180,750);
        glVertex2i(250,750);
        glVertex2i(250,650);
        glEnd();




        glColor3f(0.72,0.45,0.20);//mid  window
           glBegin(GL_QUADS);
           glVertex2i(180,450);
           glVertex2i(180,550);
           glVertex2i(250,550);
           glVertex2i(250,450);
           glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
     glVertex2i(180,450);
           glVertex2i(180,550);
           glVertex2i(250,550);
           glVertex2i(250,450);
           glEnd();


        glColor3f(0.72,0.45,0.20);//right most window(topmost)
           glBegin(GL_QUADS);
           glVertex2i(310,650);
           glVertex2i(310,750);
           glVertex2i(380,750);
           glVertex2i(380,650);
           glEnd();

           glColor3f(0,0,0);
           glBegin(GL_LINE_LOOP);
           glVertex2i(310,650);
           glVertex2i(310,750);
           glVertex2i(380,750);
           glVertex2i(380,650);
           glEnd();


           glColor3f(0.72,0.45,0.20);// right window(mid)
           glBegin(GL_QUADS);
           glVertex2i(310,450);
           glVertex2i(310,550);
           glVertex2i(380,550);
           glVertex2i(380,450);
           glEnd();

            glColor3f(0,0,0);
           glBegin(GL_LINE_LOOP);
           glVertex2i(310,450);
           glVertex2i(310,550);
           glVertex2i(380,550);
           glVertex2i(380,450);
           glEnd();


           glColor3f(0.72,0.45,0.20);// right window(1st window)
           glBegin(GL_QUADS);
           glVertex2i(310,250);
           glVertex2i(310,350);
           glVertex2i(380,350);
           glVertex2i(380,250);
           glEnd();

            glColor3f(0,0,0);
           glBegin(GL_LINE_LOOP);
           glVertex2i(310,250);
           glVertex2i(310,350);
           glVertex2i(380,350);
           glVertex2i(380,250);
           glEnd();

           glColor3f(0.8,0.5,0.4); //top horizontal line
           glBegin(GL_LINES);
           glVertex2i(50,600);
           glVertex2i(400,600);
           glEnd();


           glColor3f(0.8,0.5,0.4);//middle horizontal line(2nd line)
           glBegin(GL_LINES);
           glVertex2i(50,400);
           glVertex2i(400,400);
           glEnd();


           glColor3f(0.8,0.5,0.4);//left vertical line (1st vertical line)
           glBegin(GL_LINES);
           glVertex2i(150,830);
           glVertex2i(150,200);
           glEnd();

        glColor3f(0.8,0.5,0.4); //right vertical line(2nd vertical line)
           glBegin(GL_LINES);
           glVertex2i(275,830);
           glVertex2i(275,200);
           glEnd();




     glColor3f(0.72,0.45,0.20);  //door for the 1st building (blue)
           glBegin(GL_QUADS);

           glVertex2i(150,200);
           glVertex2i(150,400);
           glVertex2i(275,400);
           glVertex2i(275,200);

           glEnd();

        glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
            glVertex2i(150,200);
           glVertex2i(150,400);
           glVertex2i(275,400);
           glVertex2i(275,200);

           glEnd();


/*---------------Second building----------------------------------------------*/
/*
glColor3f(1.0,0.5,0.8);   //Structure of the 2nd building
glBegin(GL_QUADS);
glVertex2i(270,200);
glVertex2i(270,695);
glVertex2i(600,695);
glVertex2i(600,200);
glEnd();

 glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2i(270,200);
glVertex2i(270,695);
glVertex2i(600,695);
glVertex2i(600,200);
glEnd();


glColor3f(0.4, 0.5, 0.8); //door for the 2nd building
glBegin(GL_QUADS);
glVertex2i(310,200);
glVertex2i(310,350);;
glVertex2i(510,350);;
glVertex2i(510,200);;
glEnd();

 glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2i(310,200);
glVertex2i(310,350);;
glVertex2i(510,350);;
glVertex2i(510,200);;
glEnd();




glColor3f(0.8,0.498039,0.196078);        //leftmost window
glBegin(GL_QUADS);
glVertex2i(300,400);
glVertex2i(300,500);
glVertex2i(400,500);
glVertex2i(400,400);
glEnd();

 glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(300,400);
glVertex2i(300,500);
glVertex2i(400,500);
glVertex2i(400,400);
glEnd();


glColor3f(0.576471, 0.439216, 0.858824); // ;left sub window(place inside a left window)interior window
glBegin(GL_QUADS);
glVertex2i(315,415);
glVertex2i(315,485);
glVertex2i(385,485);
glVertex2i(385,415);
glEnd();

 glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
glVertex2i(315,415);
glVertex2i(315,485);
glVertex2i(385,485);
glVertex2i(385,415);
glEnd();


glColor3f(0.8,0.498039,0.196078);        //rightmost window
glBegin(GL_QUADS);
glVertex2i(450,400);
glVertex2i(450,500);
glVertex2i(550,500);
glVertex2i(550,400);
glEnd();

 glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(450,400);
glVertex2i(450,500);
glVertex2i(550,500);
glVertex2i(550,400);
glEnd();





glColor3f(0.576471, 0.439216, 0.858824); //right sub windows(inside the right window) interior window
glBegin(GL_QUADS);
glVertex2i(465,415);
glVertex2i(465,485);
glVertex2i(535,485);
glVertex2i(535,415);
glEnd();

 glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
glVertex2i(465,415);
glVertex2i(465,485);
glVertex2i(535,485);
glVertex2i(535,415);
glEnd();



glColor3f(0.6,0.4,0.5);   //1st floor of the 2nd building (rectangle)
glBegin(GL_LINE_LOOP);
glVertex2i(320,525);
glVertex2i(320,640);
glVertex2i(540,640);
glVertex2i(540,525);
glEnd();

 glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(320,525);
glVertex2i(320,640);
glVertex2i(540,640);
glVertex2i(540,525);
glEnd();



glColor3f (0.258824,0.435294,0.258824); //Triangle (1st floor)
glBegin(GL_POLYGON);
glVertex2i(430,690);
glVertex2i(295,630);
glVertex2i(570,630);
glEnd();


 glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(430,690);
glVertex2i(295,630);
glVertex2i(570,630);
glEnd();



glColor3f(0.6,0.4,0.5); //grill for 1st window
glBegin(GL_LINES);
glVertex2i(430,525);
glVertex2i(430,640);
glEnd();

glColor3f(0.560784,0.737255,0.560784);   //terrace of the 2nd building
glBegin(GL_QUADS);
glVertex2i(255,695);
glVertex2i(255,750);
glVertex2i(620,750);
glVertex2i(620,695);
glEnd();

 glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(255,695);
glVertex2i(255,750);
glVertex2i(620,750);
glVertex2i(620,695);
glEnd();

/* ----------------3rd Building (Attached to 2nd) ------------------*/
/*
glColor3f(0.137255,0.556863,0.419608); // house roof
glBegin(GL_QUADS);
glVertex2i(600,525);
glVertex2i(600,640);
glVertex2i(800,640);
glVertex2i(800,525);
glEnd();

 glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(600,525);
glVertex2i(600,640);
glVertex2i(800,640);
glVertex2i(800,525);
glEnd();


glColor3f(0.6,0.8,0.196078); //wall or structure of the house
glBegin(GL_QUADS);
glVertex2i(600,200);
glVertex2i(600,525);
glVertex2i(780,525);
glVertex2i(780,200);
glEnd();

 glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(600,200);
glVertex2i(600,525);
glVertex2i(780,525);
glVertex2i(780,200);
glEnd();

/*------------------------------------*/
/*
glColor3f(0,0,0);       // rectangle (window)
glBegin(GL_LINE_LOOP);
glVertex2i(620,300);
glVertex2i(620,490);
glVertex2i(750,490);
glVertex2i(750,300);
glEnd();

glColor3f(0,0,0);       // sub- rectangle (below-window)
glBegin(GL_LINE_LOOP);
glVertex2i(605,250);
glVertex2i(605,300);
glVertex2i(765,300);
glVertex2i(765,250);
glEnd();

glColor3f(0,0,0);              //inside big rectangle(frame)
glBegin(GL_LINE_LOOP);
glVertex2i(630,315);
glVertex2i(630,475);
glVertex2i(740,475);
glVertex2i(740,315);
glEnd();
/*--------------*/
/*
glColor3f(0,0,0);             //footpath(side strip or road strip)
glBegin(GL_QUADS);
glVertex2i(0,180);
glVertex2i(0,195);
glVertex2i(1000,195);
glVertex2i(1000,180);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(0,180);
glVertex2i(0,195);
glVertex2i(1000,195);
glVertex2i(1000,180);
glEnd();


glColor3f(0.4,0.5,0.6);     // GRAY ROAD
glBegin(GL_QUADS);
glVertex2i(0,0);
glVertex2i(0,180);
glVertex2i(1000,180);
glVertex2i(1000,0);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(0,0);
glVertex2i(0,180);
glVertex2i(1000,180);
glVertex2i(1000,0);
glEnd();

glColor3f(1,1,1);       //divider -1
glBegin(GL_QUADS);
glVertex2i(0,80);
glVertex2i(0,100);
glVertex2i(10,100);
glVertex2i(10,80);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(0,80);
glVertex2i(0,100);
glVertex2i(10,100);
glVertex2i(10,80);
glEnd();

glColor3f(1,1,1);       //divider -2
glBegin(GL_QUADS);
glVertex2i(50,80);
glVertex2i(50,100);
glVertex2i(125,100);
glVertex2i(125,80);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(50,80);
glVertex2i(50,100);
glVertex2i(125,100);
glVertex2i(125,80);
glEnd();


glColor3f(1,1,1);       //divider -3
glBegin(GL_QUADS);
glVertex2i(175,80);
glVertex2i(175,100);
glVertex2i(250,100);
glVertex2i(250,80);
glEnd();


glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
        glVertex2i(50,80);
glVertex2i(50,100);
glVertex2i(125,100);
glVertex2i(125,80);
glEnd();

glColor3f(1,1,1);           //divider-4
glBegin(GL_QUADS);
glVertex2i(300,80);
glVertex2i(300,100);
glVertex2i(375,100);
glVertex2i(375,80);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(300,80);
glVertex2i(300,100);
glVertex2i(375,100);
glVertex2i(375,80);
glEnd();

glColor3f(1,1,1);           //divider -5
glBegin(GL_QUADS);
glVertex2i(425,80);
glVertex2i(425,100);
glVertex2i(500,100);
glVertex2i(500,80);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(425,80);
glVertex2i(425,100);
glVertex2i(500,100);
glVertex2i(500,80);
glEnd();


glColor3f(1,1,1);           // divider -6
glBegin(GL_QUADS);
glVertex2i(550,80);
glVertex2i(550,100);
glVertex2i(625,100);
glVertex2i(625,80);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(550,80);
glVertex2i(550,100);
glVertex2i(625,100);
glVertex2i(625,80);
glEnd();

glColor3f(1,1,1);               //divider-7
glBegin(GL_QUADS);
glVertex2i(675,80);
glVertex2i(675,100);
glVertex2i(750,100);
glVertex2i(750,80);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(675,80);
glVertex2i(675,100);
glVertex2i(750,100);
glVertex2i(750,80);
glEnd();

glColor3f(1,1,1);               //divider-8
glBegin(GL_QUADS);
glVertex2i(800,80);
glVertex2i(800,100);
glVertex2i(875,100);
glVertex2i(875,80);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
glVertex2i(800,80);
glVertex2i(800,100);
glVertex2i(875,100);
glVertex2i(875,80);
glEnd();

glColor3f(1,1,1);               //divider-9
glBegin(GL_QUADS);
glVertex2i(925,80);
glVertex2i(925,100);
glVertex2i(1000,100);
glVertex2i(1000,80);
glEnd();

glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
glVertex2i(925,80);
glVertex2i(925,100);
glVertex2i(1000,100);
glVertex2i(1000,80);
glEnd();
*/


/*glFlush();


}



int  main(int argc,char** argv){
glutInit(&argc,argv);
glutCreateWindow("DJ");
glutInitWindowSize(1000,1000);
glutInitWindowPosition(1000,1000);
//init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;
}
*/
