/*#include<GL/glut.h>
#include<stdio.h>
 float xpos=-1;
   float theta;
   float PI=3.142;
   float r,g,b;
   int flag=0;
char *c;

void reshape(int w,int h)
{
    glClearColor(0,0,0,0);
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
     gluOrtho2D(0,2000,0,2000*(float)h/(float)w);
    else
         gluOrtho2D(0,1000*(float)w/(float)h,0,1000);

}
void text()
{
     glPushMatrix();
    glTranslatef(100,-175,0);
    glColor3f(r,g,b);
    r=(rand()*20/2);
    glScalef(0.5,0.5,0);
   glLineWidth(5);
    if(flag==1 || flag==2 || flag==3) {
  for(c="Dijkstra 's Algorithm";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
    }
  glPopMatrix();
  glEnd();

   glPushMatrix();
    glTranslatef(-400,-400,0);
    glColor3f(1,0,0);
    glScalef(0.3,0.3,0);
   glLineWidth(4);
    if(flag==2 || flag==3) {
  for(c="Submitted By,";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glColor3f(0.4,0.5,0.6);
   glTranslatef(-950,-200,0);
  for(c="Freston Rayan Pinto (4SO18CS043)";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
 glTranslatef(-2400,-200,0);
  for(c="Ashwin Sharon Fernandes (4SO18CS020)";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glTranslatef(-2400,-240,0);
  for(c="Gautham SP (4SO18CS045)";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
   }
  glPopMatrix();
  glEnd();


     glPushMatrix();
    glTranslatef(700,-400,0);
    glColor3f(1,0,0);
    glScalef(0.3,0.3,0);
    if(flag==3) {
     for(c="Submitted To,";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glTranslatef(-900,-200,0);
  glColor3f(0.4,0.5,0.6);
   for(c="Mrs.Nisha Roche";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
   glTranslatef(-1000,-250,0);
    for(c="Asst.Professor, CSE Dept";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
    }
  glPopMatrix();
  glEnd();
}

 void display()
 {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
   glTranslatef(500,850,0);
   text();
  glPopMatrix();
  glEnd();
  glFlush();
   }

   void mouse1(int opt)
{
    if(opt==1)
        flag=1;
    if(opt==2)
        flag=2;
    if(opt==3)
        flag=3;
    display();
}

 int  main(int argc,char** argv){
glutInit(&argc,argv);
glutCreateWindow("DJ");
glutInitWindowSize(500,500);
glutInitWindowPosition(500,500);
glutReshapeFunc(reshape);
glutDisplayFunc(display);
glutCreateMenu(mouse1);
glutAddMenuEntry("1.Topic",1);
glutAddMenuEntry("2.Sub By",2);
glutAddMenuEntry("3.Sub To",3);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutMainLoop();
return 0;
}
*/
