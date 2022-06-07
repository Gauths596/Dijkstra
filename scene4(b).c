/*#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
  float theta,r,g,b;
  float xpos=-1;
 float PI=3.142;
 int flag=0;
 char *c;
 char *a;

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

void car()
{
float theta;
   float PI=3.142;
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
    if(flag==5){
    if(xpos<=1500)
    {
        xpos+=0.3;
    }
    }
    glutPostRedisplay();
}

void boxarr()
{
 glBegin(GL_LINE_STRIP);
 glColor3f(0,0,0);
 glVertex2i(400,820);
 glVertex2i(300,820);
 glVertex2i(300,920);

 glVertex2i(400,920);
 glVertex2i(400,820);
 glVertex2i(500,820);
 glVertex2i(500,920);
 glVertex2i(400,920);
 //
 glVertex2i(500,920);
 glVertex2i(500,820);
 glVertex2i(600,820);
 glVertex2i(600,920);
 glVertex2i(500,920);

 glVertex2i(600,920);
 glVertex2i(600,820);
 glVertex2i(700,820);
 glVertex2i(700,920);
 glVertex2i(600,920);
 glEnd();

  glPushMatrix();                             //1st value
 glTranslatef(300,750,0);
  glScalef(0.4,0.4,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="0  1  2  3";*c!='\0';c++)
  {
   glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();

  glPushMatrix();                             //1st value
 glTranslatef(250,850,0);
  glScalef(0.4,0.4,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="tr";*c!='\0';c++)
  {
   glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();
}

void keys( unsigned char key,int x,int y)
{
    if(key=='1')
        flag=1;
    if(key=='2')
        flag=2;
    if(key=='3')
        flag=3;
    if(key=='4')
        flag=4;
    if(key=='5')
        flag=5;
    if(key=='6')
         flag=6;
    a=key;
    glutPostRedisplay();
}


void display()
{
     glClear(GL_COLOR_BUFFER_BIT);
 glLineWidth(7);
  glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);
  glVertex2i(300,500);  //1st cir
    glVertex2i(600,300); //2nd cir
    glVertex2i(1200,700); //6th circle
  glVertex2i(600,300); //2nd cir
  glVertex2i(1200,300); //5th cir
  glEnd();


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

               // 5th
  glBegin(GL_POLYGON);
  if(flag==5){
  if(xpos<=1400)
  {
      glColor3f(r,g,b);
       g=(rand()%10/2);
  }
  else{
    glColor3f(0.7,0.2,0.2);
  }
  }
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


  //----Node Representation---
  glPushMatrix();                               //1st node
  glTranslatef(280,480,0);
  glScalef(0.4,0.4,0);
  glLineWidth(6);
  glColor3f(0,0,0);
  for(c="A";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();


  glPushMatrix();                               //2nd node
  glTranslatef(580,280,0);
  glScalef(0.4,0.4,0);
  glLineWidth(6);
  glColor3f(0,0,0);
  for(c="D";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
   glTranslatef(-90,-210,0);

  for(c="2";*c!='\0';c++)
  {   glLineWidth(2);
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }

  glPopMatrix();
 glEnd();


 glPushMatrix();                               //5th node
  glTranslatef(1180,280,0);
  glScalef(0.4,0.4,0);
  glColor3f(0,0,0);
  glLineWidth(6);
  for(c="E";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }

   glTranslatef(0,-250,0);
   glLineWidth(2);
   if(xpos<=0.4){
  for(c="INF";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
   }
  else if(xpos>1500){
    glTranslatef(1499.9,-200,0);
    glTranslatef(-xpos,190,0.7);
    for(c="8";*c!='\0';c++)
  {    glLineWidth(2);
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
   }
  glPopMatrix();
 glEnd();



 glPushMatrix();                               //6th node
  glTranslatef(1180,680,0);
  glScalef(0.4,0.4,0);
 glLineWidth(6);
  glColor3f(0,0,0);
  for(c="C";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glTranslatef(xpos,-0.5,0.7);
   glTranslatef(0,250,0);
   if(xpos<=0.4){
  for(c="INF";*c!='\0';c++)
  {    glLineWidth(2);
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
   }
   else if(xpos>1500){
    glTranslatef(0,200,0);
    glTranslatef(-xpos,-0.5,0.7);
    for(c="11";*c!='\0';c++)
  {    glLineWidth(2);
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
   }
  glPopMatrix();
 glEnd();



 //--------Values---------
  glPushMatrix();                             //1st value
  glTranslatef(180,480,0);
  glScalef(0.4,0.4,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  for(c="0";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();

 glPushMatrix();                             // 2nd value
  glTranslatef(390,350,0);
  glScalef(0.4,0.4,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  for(c="2";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();

  glPushMatrix();                             // 5th  value
  glTranslatef(890,230,0);
  glScalef(0.4,0.4,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  for(c="6";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();

    glPushMatrix();                             // 8th  value
  glTranslatef(900,450,0);
  glScalef(0.4,0.4,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  for(c="9";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();



 //Arrows-------------

  glBegin(GL_LINE_STRIP);       //2nd arrow   (downwards)
   glLineWidth(5);
 glColor3f(0,0.1,0.6);
 glVertex2i(550,375);
 glVertex2i(550,330);
 glVertex2i(500,330);
 glEnd();

  glBegin(GL_LINE_STRIP);       //5th arrow   (horizontal bottom)
   glLineWidth(6);
 glColor3f(0,0.1,0.6);
 glVertex2i(1050,340);
 glVertex2i(1100,300);
 glVertex2i(1050,260);
 glEnd();

  glBegin(GL_LINE_STRIP);       //3rd arrow   (mid)
   glLineWidth(5);
 glColor3f(0,0.1,0.6);
 glVertex2i(1100,675);
 glVertex2i(1150,675);
 glVertex2i(1150,625);
 glEnd();


 glPushMatrix();
 glTranslatef(340,130,0);
 glScalef(0.4,0.4,0);
 glTranslatef(xpos,-0.5,0.7);
 if(flag==5 || flag==6){
 car();
 }
 glPopMatrix();
 glEnd();


 glPushMatrix();
 glScalef(0.7,0.7,0);
 glTranslatef(200,400,0);
 if(flag==1 || flag==2 || flag==3 || flag==4 || flag==5 || flag==6)
 {
      boxarr();
 }
 glPopMatrix();
 glEnd();

 glPushMatrix();
  glScalef(0.7,0.7,0);
  glTranslatef(200,-700,0);
  if(flag==6){
    boxarr();
  }
 glPopMatrix();
 glEnd();

 glPushMatrix();
glScalef(0.4,0.4,0);
 glTranslatef(900,2150,0);
 if(flag==1 || flag==2 || flag==3 || flag==4 || flag==5 || flag==6){
  for(c="A D";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
}
 glPopMatrix();
 glEnd();

 glPushMatrix();
  glTranslatef(330,100,0);
glScalef(0.4,0.4,0);
if(flag==6){
   for(c=" A D E";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
}
glPopMatrix();
 glEnd();

 glPushMatrix();                             // 5th  value
  glTranslatef(330,730,0);
  glScalef(0.3,0.3,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  if(flag==2 || flag==3 || flag==4 || flag==5 || flag==6){
  for(c="if(2+9<INF)--T\n d(v)=11";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  }
  glPopMatrix();
 glEnd();

 glPushMatrix();                             // 5th  value
  glTranslatef(330,640,0);
  glScalef(0.3,0.3,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  if(flag==3 || flag==4 || flag==5 || flag==6){
  for(c="if(2+6<INF)--T\n d(v)=8";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  }
  glPopMatrix();
 glEnd();

 glPushMatrix();                             // 5th  value
  glTranslatef(380,560,0);
  glScalef(0.3,0.3,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  if(flag==4 || flag==5 || flag==6){
  for(c="if(8<11)--T";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  }
  glPopMatrix();
 glEnd();

 glPushMatrix();
glColor3f(r,g,b);
 g=(rand()%10/2);
glTranslatef(700,70,0);
glScalef(0.3,0.3,0);
for(c="Key Pressed:";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
glPopMatrix();
glEnd();

glPushMatrix();
glRasterPos2d(1000,70);
glColor3f(r,g,b);
 g=(rand()%10/2);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,a);
glPopMatrix();
glEnd();
 glFlush();
}

int  main(int argc,char** argv){
glutInit(&argc,argv);
glutCreateWindow("DJ");
glutInitWindowSize(500,500);
glutInitWindowPosition(500,500);
glutReshapeFunc(reshape);
glutIdleFunc(idle);
glutDisplayFunc(display);
glutKeyboardFunc(keys);
glutMainLoop();
return 0;
}

*/
