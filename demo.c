#include<GL/glut.h>
#include<stdio.h>
void init()
{
 glClearColor(0.1,0.6,0.8,0);
   	//glClearColor(1,1,1,1);
   	 gluOrtho2D(0,1000,0,1000);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();

}

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);


  glColor3f(1,0,0);//

glBegin(GL_QUADS); //rectangle (structure of the building)
glColor3f(0.1,0.4,1.0);
glVertex2i(100,0);
glVertex2i(100,200);
glVertex2i(500,200);
glVertex2i(500,0);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the building)
glColor3f(0.1,0.4,1.0);
glVertex2i(700,0);
glVertex2i(700,200);
glVertex2i(1000,200);
glVertex2i(1000,0);
glEnd();


glBegin(GL_QUADS); //rectangle (structure of the building)
glColor3f(0.1,0.4,1.0);
glVertex2i(0,400);
glVertex2i(0,700);
glVertex2i(100,700);
glVertex2i(100,400);
glEnd();

glBegin(GL_QUADS); //rectangle (structure of the building)
glColor3f(0.1,0.4,1.0);
glVertex2i(400,400);
glVertex2i(400,700);
glVertex2i(1000,700);
glVertex2i(1000,400);
glEnd();

glFlush();
}
int  main(int argc,char** argv){
glutInit(&argc,argv);
glutCreateWindow("DJ");
glutInitWindowSize(500,500);
glutInitWindowPosition(500,500);
init();
glutDisplayFunc(display);

glutMainLoop();
return 0;
}
