/* #include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

void reshape(int w,int h)
{
    glClearColor(1,1,1,1);
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
     gluOrtho2D(0,2000,0,2000*(float)h/(float)w);
    else
         gluOrtho2D(0,1000*(float)w/(float)h,0,1000);

}
void display()
{
    glPushMatrix();
  glTranslatef(200,200,0);
  glScalef(1.0,1.0,0);
     glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(270,440);
    glVertex2f(340,440);
    glVertex2f(350,450);
    glVertex2f(280,450);
    glEnd();
    glColor3f(1,.9,.8);
    glBegin(GL_POLYGON);
    glVertex2f(270,385);
    glVertex2f(340,385);
    glVertex2f(340,440);
    glVertex2f(270,440);
    glEnd();
    glColor3f(1,.9,.8);
    glBegin(GL_POLYGON);
    glVertex2f(290,375);
    glVertex2f(320,375);
    glVertex2f(320,385);
    glVertex2f(290,385);
    glEnd();
    glColor3f(0.1,.2,.5);
    glBegin(GL_POLYGON);
    glVertex2f(250,375);
    glVertex2f(350,375);
    glVertex2f(350,300);
    glVertex2f(250,300);
    glEnd();
    glColor3f(0.1,.2,.5);
    glBegin(GL_POLYGON);
    glVertex2f(250,375);
    glVertex2f(200,340);
    glVertex2f(205,315);
    glVertex2f(250,345);
    glEnd();
    glColor3f(0.1,.2,.5);
    glBegin(GL_POLYGON);
    glVertex2f(350,375);
    glVertex2f(410,335);
    glVertex2f(398,315);
    glVertex2f(350,345);
    glEnd();
    glColor3f(0.3,.0,1.0);
    glBegin(GL_QUADS);
    glVertex2f(250,300);
    glVertex2f(250,225);
    glVertex2f(275,225);
    glVertex2f(275,300);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(325,225);
    glVertex2f(325,300);
    glVertex2f(350,300);
    glVertex2f(350,225);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(275,300);
    glVertex2f(325,300);
    glVertex2f(325,275);
    glVertex2f(275,275);
    glEnd();
    glColor3f(0.5,.3,0);
    glBegin(GL_POLYGON);
    glVertex2f(240,225);
    glVertex2f(275,225);
    glVertex2f(275,210);
    glVertex2f(240,210);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(315,225);
    glVertex2f(350,225);
    glVertex2f(350,210);
    glVertex2f(315,210);
    glEnd();
    glPopMatrix();
    glFlush();

}



int  main(int argc,char** argv){
glutInit(&argc,argv);
glutCreateWindow("DJ");
glutInitWindowSize(500,500);
glutInitWindowPosition(500,500);
glutReshapeFunc(reshape);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

*/
