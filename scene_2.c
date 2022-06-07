/*#include<GL/glut.h>
#include<stdio.h>
 float xpos=-1;
   float theta;
   float PI=3.142;

void init()
{
 glClearColor(0.4,0.5,0.6,0);
   	//glClearColor(1,1,1,1);
   	 gluOrtho2D(0,1000,0,1000);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();

}

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);


  glColor3f(1,0,0);//
glBegin(GL_QUADS); //rectangle (structure of the road)
glColor3f(0.1,0.4,1.0);
glVertex2i(0,0);
glVertex2i(0,300);
glVertex2i(650,300);
glVertex2i(650,0);
glEnd();


glBegin(GL_QUADS); //rectangle (structure of the road)
glColor3f(0.1,0.4,1.0);
glVertex2i(850,0);
glVertex2i(850,300);
glVertex2i(1000,300);
glVertex2i(1000,0);
glEnd();


glBegin(GL_QUADS); //rectangle (structure of the road)
glColor3f(0.1,0.4,1.0);
glVertex2i(0,550);
glVertex2i(0,850);
glVertex2i(650,850);
glVertex2i(650,550);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the road)
glColor3f(0.1,0.4,1.0);
glVertex2i(850,550);
glVertex2i(850,850);
glVertex2i(1000,850);
glVertex2i(1000,550);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the divider)
glColor3f(1,1,1);
glVertex2i(50,425);
glVertex2i(50,437.5);
glVertex2i(200,437.5);
glVertex2i(200,425);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the divider)
glColor3f(1,1,1);
glVertex2i(300,425);
glVertex2i(300,437.5);
glVertex2i(450,437.5);
glVertex2i(450,425);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the divider)
glColor3f(1,1,1);
glVertex2i(550,425);
glVertex2i(550,437.5);
glVertex2i(700,437.5);
glVertex2i(700,425);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the divider)
glColor3f(1,1,1);
glVertex2i(800,425);
glVertex2i(800,437.5);
glVertex2i(950,437.5);
glVertex2i(950,425);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the divider)
glColor3f(1,1,1);
glVertex2i(737.5,50);
glVertex2i(737.5,100);
glVertex2i(762.5,100);
glVertex2i(762.5,50);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the divider)
glColor3f(1,1,1);
glVertex2i(737.5,200);
glVertex2i(737.5,300);
glVertex2i(762.5,300);
glVertex2i(762.5,200);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the divider)
glColor3f(1,1,1);
glVertex2i(737.5,550);
glVertex2i(737.5,650);
glVertex2i(762.5,650);
glVertex2i(762.5,550);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the divider)
glColor3f(1,1,1);
glVertex2i(737.5,700);
glVertex2i(737.5,825);
glVertex2i(762.5,825);
glVertex2i(762.5,700);
glEnd();
glPushMatrix();
 glTranslatef(xpos,-0.2,0.80);
  glScalef(0.5,0.5,0);
  //glRotatef(45,0,0,1);
car();
glPopMatrix();
 glEnd();

 glutSwapBuffers();

glFlush();
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
    if(xpos<=-0.1)
    {
        xpos+=0.0003;
    }
    glutPostRedisplay();
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
