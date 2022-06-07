/*#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
 float xpos=-1;
float theta;
int flag=0;
float r,g,b;
char *c;
float PI=3.142;
void init()
{
 glClearColor(0.1,0.6,0.8,0);
   	//glClearColor(1,1,1,1);
   	 gluOrtho2D(0,1000,0,1000);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();

}

void car() {
   glBegin(GL_POLYGON);  //rear side
  glColor3f(1,0,0);
  glVertex2i(200,400);
  glVertex2i(200,600);
  glVertex2i(400,600);
  glVertex2i(400,400);
glEnd();

glBegin(GL_POLYGON);     //rear curve
glColor3f(1,1,1);
for(int i=0;i<=180;i++)
  {
      theta=i*PI/180;
      glVertex2f(300+85*cos(theta),400+85*sin(theta));
  }
  glEnd();

  glBegin(GL_POLYGON);          //middle door
  glColor3f(1,0,0);
  glVertex2i(400,400);
  glVertex2i(400,600);
  glVertex2i(700,600);
  glVertex2i(700,400);
  glEnd();

  glBegin(GL_LINES);          // rear divider
  glLineWidth(3);
  glColor3f(0,0,0);
  glVertex2i(400,400);
  glVertex2i(400,600);
  glEnd();

  glBegin(GL_POLYGON);          //front side  bonet
  glColor3f(1,0,0);
  glVertex2i(700,400);
  glVertex2i(700,600);
  glVertex2i(900,500);
  glVertex2i(900,400);
  glEnd();

  glBegin(GL_LINES);            //front divider
  glColor3f(0,0,0);
  glLineWidth(3);
  glVertex2i(680,400);
  glVertex2i(680,600);
  glEnd();

  glBegin(GL_POLYGON);              // front curve
  glColor3f(1,1,1);
  for(int i=0;i<=180;i++)
  {
      theta=i*PI/180;
      glVertex2f(795+85*cos(theta),400+85*sin(theta));
  }
  glEnd();

  glBegin(GL_POLYGON);       // mirror
  glColor3f(1,0,0);
  glVertex2i(680,600);
  glVertex2i(610,730);
  glVertex2i(630,730);
  glVertex2i(700,600);
    glEnd();

 glBegin(GL_POLYGON);       //rear barrier -left
    glColor3f(0,0,0);
    glVertex2i(230,600);
    glVertex2i(230,620);
     glVertex2i(240,620);
    glVertex2i(240,600);
    glEnd();

    glBegin(GL_POLYGON);        //rear barrier -right
    glColor3f(0,0,0);
    glVertex2i(300,600);
    glVertex2i(300,620);
     glVertex2i(310,620);
    glVertex2i(310,600);
    glEnd();

    glBegin(GL_POLYGON);        //barrier upper part
    glColor3f(0,0,0);
    glVertex2i(200,620);
    glVertex2i(200,630);
    glVertex2i(340,630);
    glVertex2i(340,620);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(280,600);
    glVertex2i(280,850);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2i(880,410);
    glVertex2i(866,450);
    glVertex2i(920,450);
    glVertex2i(910,410);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2i(903,450);
    glVertex2i(903,515);
    glVertex2i(910,515);
    glVertex2i(910,450);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2i(910,500);
    glVertex2i(910,510);
    glVertex2i(920,510);
    glVertex2i(920,500);
    glEnd();

 glBegin(GL_POLYGON);     //rear wheel
glColor3f(0,0,0);
for(int i=0;i<=360;i++)
  {
      theta=i*PI/180;
      glVertex2f(300+82*cos(theta),390+82*sin(theta));
  }
  glEnd();

     glBegin(GL_POLYGON);     //front  wheel
glColor3f(0,0,0);
for(int i=0;i<=360;i++)
  {
      theta=i*PI/180;
      glVertex2f(797+82*cos(theta),390+82*sin(theta));
  }
  glEnd();

     glBegin(GL_POLYGON);     //rear mag  wheel
glColor3f(0.5,0.5,0.4);
for(int i=0;i<=360;i++)
  {
      theta=i*PI/180;
      glVertex2f(300+50*cos(theta),390+50*sin(theta));
  }
  glEnd();

       glBegin(GL_POLYGON);     //front mag wheel
glColor3f(0.5,0.5,0.4);
for(int i=0;i<=360;i++)
  {
      theta=i*PI/180;
      glVertex2f(797+50*cos(theta),390+50*sin(theta));
  }
  glEnd();

}


void idle()
{
    if(xpos<=500)
    {
        xpos+=0.0003;
    }
    else{
        xpos=xpos-665;
    }
    glutPostRedisplay();
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1,0,0);//


glBegin(GL_QUADS); //rectangle (structure of the building)
glColor3f(0.1,0.4,1.0);
glVertex2i(50,200);
glVertex2i(50,800);
glVertex2i(250,800);
glVertex2i(250,200);
glEnd();


glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2i(50,200);
glVertex2i(50,800);
glVertex2i(250,800);
glVertex2i(250,200);
glEnd();




glColor3f(0.7,0.7,0.7); //top roof of the building (triangle)
glBegin(GL_POLYGON);
    glVertex2i(20,760);
    glVertex2i(150,950);
    glVertex2i(280,760);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(20,760);
    glVertex2i(150,950);
    glVertex2i(280,760);
    glEnd();


    glColor3f(0.72,0.45,0.20); // top window(left side topmost)
    glBegin(GL_QUADS);
    glVertex2i(60,650);
    glVertex2i(60,750);
    glVertex2i(110,750);
    glVertex2i(110,650);
    glEnd();


     glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(60,650);
    glVertex2i(60,750);
    glVertex2i(110,750);
    glVertex2i(110,650);
    glEnd();






   glColor3f(0.72,0.45,0.20);//window downwards(below the left topmost window) mid window
    glBegin(GL_QUADS);
    glVertex2i(60,450);
    glVertex2i(60,550);
    glVertex2i(110,550);
    glVertex2i(110,450);
    glEnd();

     glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
     glVertex2i(60,450);
    glVertex2i(60,550);
    glVertex2i(110,550);
    glVertex2i(110,450);
    glEnd();





    glColor3f(0.72,0.45,0.20);//1st window (1st leftmost window)
    glBegin(GL_QUADS);
    glVertex2i(60,250);
    glVertex2i(60,350);
    glVertex2i(110,350);
    glVertex2i(110,250);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
     glVertex2i(60,250);
    glVertex2i(60,350);
    glVertex2i(110,350);
    glVertex2i(110,250);
    glEnd();




    //Right side windows
    glColor3f(0.72,0.45,0.20); //Right topmost window
        glBegin(GL_QUADS);
        glVertex2i(190,650);
        glVertex2i(190,750);
        glVertex2i(240,750);
        glVertex2i(240,650);
        glEnd();

        glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
     glVertex2i(190,650);
        glVertex2i(190,750);
        glVertex2i(240,750);
        glVertex2i(240,650);
        glEnd();




        glColor3f(0.72,0.45,0.20);//mid right window (below right top most window)
           glBegin(GL_QUADS);
           glVertex2i(190,450);
           glVertex2i(190,550);
           glVertex2i(240,550);
           glVertex2i(240,450);
           glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
     glVertex2i(190,450);
           glVertex2i(190,550);
           glVertex2i(240,550);
           glVertex2i(240,450);
           glEnd();



         glColor3f(0.72,0.45,0.20); //right most 1st window
           glBegin(GL_QUADS);
           glVertex2i(190,250);
           glVertex2i(190,350);
           glVertex2i(240,350);
           glVertex2i(240,250);
           glEnd();

           glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2i(190,250);
           glVertex2i(190,350);
           glVertex2i(240,350);
           glVertex2i(240,250);
           glEnd();


           glColor3f(0.8,0.5,0.4); //top horizontal line
           glBegin(GL_LINES);
           glVertex2i(50,600);
           glVertex2i(250,600);
           glEnd();


           glColor3f(0.8,0.5,0.4);//middle horizontal line(2nd line)
           glBegin(GL_LINES);
           glVertex2i(50,400);
           glVertex2i(250,400);
           glEnd();


           glColor3f(0.8,0.5,0.4);//left vertical line (1st vertical line)
           glBegin(GL_LINES);
           glVertex2i(120,760);
           glVertex2i(120,200);
           glEnd();

        glColor3f(0.8,0.5,0.4); //right vertical line(2nd vertical line)
           glBegin(GL_LINES);
           glVertex2i(180,760);
           glVertex2i(180,200);
           glEnd();


     glColor3f(0.72,0.45,0.20);  //door for the 1st building (blue)
           glBegin(GL_QUADS);

           glVertex2i(120,200);
           glVertex2i(120,400);
           glVertex2i(180,400);
           glVertex2i(180,200);

           glEnd();

        glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
            glVertex2i(120,200);
           glVertex2i(120,400);
           glVertex2i(180,400);
           glVertex2i(180,200);

           glEnd();


//--------------Second building----------------------------------------------

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

// ----------------3rd Building (Attached to 2nd) ------------------

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

   float theta;
    float PI=3.142;
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);              //sun
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(750+50*cos(theta),850+50*sin(theta));
  }
 glEnd();

 glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);              //sun
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(750+50*cos(theta),850+50*sin(theta));
  }
 glEnd();
//------------------------------------

glColor3f(0.8,0.4,0.5);       // rectangle (window)
glBegin(GL_QUADS);
glVertex2i(620,300);
glVertex2i(620,490);
glVertex2i(750,490);
glVertex2i(750,300);
glEnd();

glColor3f(0,0,0);       // rectangle (window)
glBegin(GL_LINE_LOOP);
glVertex2i(620,300);
glVertex2i(620,490);
glVertex2i(750,490);
glVertex2i(750,300);
glEnd();


glColor3f(0.4,0.7,0.7 );       // sub- rectangle (below-window)
glBegin(GL_QUADS);
glVertex2i(605,250);
glVertex2i(605,300);
glVertex2i(765,300);
glVertex2i(765,250);
glEnd();


glColor3f(0,0,0);       // sub- rectangle (below-window)
glBegin(GL_LINE_LOOP);
glVertex2i(605,250);
glVertex2i(605,300);
glVertex2i(765,300);
glVertex2i(765,250);
glEnd();




glColor3f(0.6,0.3,0.3);              //inside big rectangle(frame)
glBegin(GL_QUADS);
glVertex2i(630,315);
glVertex2i(630,475);
glVertex2i(740,475);
glVertex2i(740,315);
glEnd();


glColor3f(0,0,0);              //inside big rectangle(frame)
glBegin(GL_LINE_LOOP);
glVertex2i(630,315);
glVertex2i(630,475);
glVertex2i(740,475);
glVertex2i(740,315);
glEnd();


//------road--------

glColor3f(0,0,0);             //footpath(side strip or road strip)
glBegin(GL_QUADS);
glVertex2i(0,180);
glVertex2i(0,198);
glVertex2i(1000,198);
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
    glColor3f(1,1,1);
    glVertex2i(0,80);
glVertex2i(0,100);
glVertex2i(10,100);
glVertex2i(10,80);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
for(int i=50;i<=1000;i=i+50) {
glVertex2i(i,80);
glVertex2i(i,100);
i=i+75;
glVertex2i(i,100);
glVertex2i(i,80);
}
glEnd();

//-----Tower-------

glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex2i(805,200);
glVertex2i(890,950);
glVertex2i(980,200);
                        //-zigzag
glVertex2i(805,350);
glVertex2i(970,425);
glVertex2i(805,525);
glVertex2i(950,600);
glVertex2i(805,675);
glVertex2i(950,725);
glVertex2i(830,800);
glVertex2i(950,860);
glVertex2i(840,910);
glVertex2i(950,910);

//second
glVertex2i(830,860);
glVertex2i(950,800);
glVertex2i(810,720);
glVertex2i(950,680);
glVertex2i(815,590);
glVertex2i(960,520);
glVertex2i(810,440);
glVertex2i(980,330);
glVertex2i(805,200);
glEnd();

glPushMatrix();
 glTranslatef(-0.70,-0.20,0);
 glTranslatef(xpos,-0.5,-0.20);
  glScalef(0.4,0.4,0);
 // glRotatef(65,100,200,0);
 car();
glPopMatrix();
 glEnd();

 //glutSwapBuffers();
glFlush();
}


int  main(int argc,char** argv){
glutInit(&argc,argv);
glutCreateWindow("DJ");
glutInitWindowSize(500,500);
glutInitWindowPosition(500,500);
init();
glutDisplayFunc(display);
glutIdleFunc(idle);
glutMainLoop();
return 0;
}
*/
