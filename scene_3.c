/*#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
void reshape(int w,int h)
{
    glClearColor(1,1,1,1);
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
     gluOrtho2D(0,2000,0,2000*(float)h/(float)w);
    else
         gluOrtho2D(0,2000*(float)w/(float)h,0,2000);

}
void join()
{
glTranslatef(300,520,0);//1st
glRotatef(35,0,0,1);
glTranslatef(-300,-520,0);
    glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2i(347,495);
  glVertex2i(347 ,505);
  glVertex2i(590,505);
  glVertex2i(590,495);
  glEnd();
}

void join2()
{
glTranslatef(300,520,0);//1st
glRotatef(-70,0,0,1);
glTranslatef(-300,-520,0);
    glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2i(370,495);
  glVertex2i(370 ,505);
  glVertex2i(613,505);
  glVertex2i(613,495);
  glEnd();
}

void join3()
{

glTranslatef(280,450,0);//1st
glRotatef(30,0,0,1);
glTranslatef(-280,-450,0);
    glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2i(1110,695);
  glVertex2i(1110,705);
  glVertex2i(1555,705);
  glVertex2i(1555,695);
  glEnd();
}

void display()
{
    float theta;
    float PI=3.142;
    glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.7,0.2,0.2);
  glBegin(GL_POLYGON);              //1st -circle (left) mid
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(300+60*cos(theta),500+60*sin(theta));


  }
  glEnd();

  glColor3f(0.7,0.2,0.2);           //2nd left-circle(top)
  glBegin(GL_POLYGON);
  for(int i=0;i<360;i++)
  {
      theta=i*3.142/180;
    glVertex2f(600+60*cos(theta),300+60*sin(theta));

  }
  glEnd();


  glColor3f(0.7,0.2,0.2);  //3rd
  glBegin(GL_POLYGON);
  for(int i=0;i<360;i++)
  {
      theta=i*3.142/180;
    glVertex2f(600+60*cos(theta),700+60*sin(theta));

  }
  glEnd();

    glColor3f(0.7,0.2,0.2); //4th
  glBegin(GL_POLYGON);
  for(int i=0;i<360;i++)
  {
      theta=i*3.142/180;
    glVertex2f(1500+60*cos(theta),500+60*sin(theta));
  }
  glEnd();

        glColor3f(0.7,0.2,0.2);        // 5th
  glBegin(GL_POLYGON);
  for(int i=0;i<360;i++)
  {
      theta=i*3.142/180;
     glVertex2f(1200+60*cos(theta),300+60*sin(theta));
  }
  glEnd();


        glColor3f(0.7,0.2,0.2);  //6th
  glBegin(GL_POLYGON);
  for(int i=0;i<360;i++)
  {
    theta=i*3.142/180;
    glVertex2f(1200+60*cos(theta),700+60*sin(theta));
  }
  glEnd();

glBegin(GL_QUADS);      //2nd
glColor3f(0,0,0);
  glVertex2i(660,695);
  glVertex2i(660,705);
  glVertex2i(1140,705);
  glVertex2i(1140,695);
glEnd();


 glBegin(GL_QUADS);     //3rd
 glColor3f(0,0,0);
  glVertex2i(660,295);
  glVertex2i(660,305);
  glVertex2i(1140,305);
  glVertex2i(1140,295);
glEnd();


glBegin(GL_QUADS);        //4th
  glVertex2i(400,495);
  glVertex2i(400,505);
  glVertex2i(680,505);
  glVertex2i(680,495);
glEnd();

glBegin(GL_QUADS);
  glVertex2i(400,495);
  glVertex2i(400,505);
  glVertex2i(680,505);
  glVertex2i(680,495);
glEnd();


glBegin(GL_QUADS);
  glVertex2i(400,495);
  glVertex2i(400,505);
  glVertex2i(680,505);
  glVertex2i(680,495);
glEnd();



/*---------------Rotation---------------
float  x1,x2,y1,y2;
x1=320*cos((400)*PI/180)-520*sin((495)*PI/180);
y1=320*sin((400)*PI/180)+520*cos((505)*PI/180);
x2=560*cos((580)*PI/180)-680*sin((505)*PI/180);
//y2=560*sin((580)*PI/180)+680*COS((495)*PI/180);

glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(x1,y1);
glVertex2f(x2,y2);

glEnd();

*/ //join();
  /*glColor3f(0,0,0);
    glPushMatrix();
    glTranslatef(600,300,0);
  glRotatef(45,0,0,1);
glTranslatef(-600,-300,0);

    glPopMatrix();


    glEnd();
    glutPostRedisplay();
    join();
    join2();

    join3();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
  glFlush();
}


int  main(int argc,char** argv){
glutInit(&argc,argv);
glutCreateWindow("DJ");
glutInitWindowSize(500,500);
glutInitWindowPosition(500,500);
//init();
glutReshapeFunc(reshape);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
*/

