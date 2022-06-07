/*#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
 float xpos=-300;
 char *c;
 char *a;
 int flag=0;
 float PI=3.142;
float theta;
float r,g,b;

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
  glScalef(0.5,0.5,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="tr";*c!='\0';c++)
  {
   glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();


}
 void relax1()
 {
       glPushMatrix();                             //1st value
  glTranslatef(850,460,0);
  glScalef(0.4,0.4,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="Relaxation";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();
 }
 void relax2()
 {
  glPushMatrix();                             //1st value
  glTranslatef(850,460,0);
  glScalef(0.4,0.4,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="if(d(u)+d(u,v)<d(v))";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();
 }
 void relax3()
 {
       glPushMatrix();                             //1st value
  glTranslatef(850,460,0);
  glScalef(0.4,0.4,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="d(v)=d(u)+d(u,v)";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();
 }

void one()
{
  glPushMatrix();                             //1st value
  glTranslatef(850,880,0);
  glScalef(0.4,0.4,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="if(0+4<4)----F";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();

 glEnd();
}

void two()
{
      glPushMatrix();                             //1st value
  glTranslatef(850,740,0);
  glScalef(0.4,0.4,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="if(0+2<2)----F";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();
}

void three()
{

  glPushMatrix();                             //1st value
  glTranslatef(850,600,0);
  glScalef(0.4,0.4,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="Among 2 and 4";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();
}

void four()
{
  glPushMatrix();                             //1st value
  glTranslatef(850,460,0);
  glScalef(0.4,0.4,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="if(2<4)----T";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();
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
{    if(flag==6){
    if(xpos<=-170)
    {
        xpos+=0.0112;
    }
}
    glutPostRedisplay();
}

void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glLineWidth(7);
 glColor3f(0,0,0);
 glBegin(GL_LINE_STRIP);
 glVertex2i(600,300); //2nd cir
 glVertex2i(300,500);  //1st cir
 glVertex2i(600,700);  //3rd cir
 glEnd();

   float theta;
   float PI=3.142;
  glColor3f(0.7,0.2,0.2);
  glBegin(GL_POLYGON);              //1st -circle (left) mid
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(300+60*cos(theta),500+60*sin(theta));
  }
  glEnd();

       //2nd left-circle(top)
  glBegin(GL_POLYGON);
  if(flag==6){
  if(xpos<=-170)
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
  if(xpos<=1)
  for(c="D";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glTranslatef(-90,-250,0);
    glLineWidth(2);
  for(c="2";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();

 glPushMatrix();                               //3rd node
  glTranslatef(580,680,0);
  glScalef(0.4,0.4,0);
  glColor3f(0,0,0);
  glLineWidth(6);
  for(c="B";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  for(c="4";*c!='\0';c++)
  {
        glTranslatef(-90,250,0);
      glLineWidth(2);
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();


  //------values--------
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

  glPushMatrix();                             // 3rd  value
  glTranslatef(390,610,0);
  glScalef(0.4,0.4,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  for(c="4";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();


 //---------Arrows---------

 glBegin(GL_LINE_STRIP);        //1st arrow  (upwards)
 glLineWidth(5);
 glColor3f(0,0.1,0.6);
 glVertex2i(500,670);
 glVertex2i(550,670);
 glVertex2i(550,625);
 glEnd();

  glBegin(GL_LINE_STRIP);       //2nd arrow   (downwards)
   glLineWidth(5);
 glColor3f(0,0.1,0.6);
 glVertex2i(550,375);
 glVertex2i(550,330);
 glVertex2i(500,330);
 glEnd();

 //affects
 glPushMatrix();        //array box -1
 glTranslatef(-200,100,0);
  //glScalef(0.4,0.4,0);
     boxarr();
glPopMatrix();
 glEnd();


  glPushMatrix();       //array box-2
 glTranslatef(700,-700,0);
  //glScalef(0.4,0.4,0);
  if(flag==7){
     boxarr();
  }
glPopMatrix();
 glEnd();

 glPushMatrix();                             // A value in the 1st array box
  glTranslatef(130,950,0);
  glScalef(0.5,0.5,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  for(c="A";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();

  glPushMatrix();                             // A value in the 2nd array box
  glTranslatef(1030,150,0);
  glScalef(0.5,0.5,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  if(flag==7){
  for(c="A";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  }
  glPopMatrix();
 glEnd();

  glPushMatrix();                             // A value in the array
  glTranslatef(1130,150,0);
  glScalef(0.5,0.5,0);
  glLineWidth(3);
  glColor3f(0,0,0);
  if(flag==7){
  for(c="D";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  }
  glPopMatrix();
 glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0.9,0);
if(flag==1 || flag==2 || flag==3 || flag==4 || flag==5 || flag==6 || flag==7){
for(int i=0;i<=360;i++)
  {
      theta=i*PI/180;
      glVertex2f(1150+300*cos(theta),850+125*sin(theta));
  }
}
  glEnd();

glPushMatrix();
glTranslatef(300,500,0);
glScalef(0.9,0.9,0);
if(flag==1 || flag==2 || flag==3 || flag==4 || flag==5 || flag==6 ||flag==7)
   relax1();
glPopMatrix();
 glEnd();

 glPushMatrix();
glTranslatef(200,425,0);
glScalef(0.9,0.9,0);
if(flag==1 || flag==2 || flag==3 || flag==4 || flag==5 || flag==6 || flag==7)
   relax2();
glPopMatrix();
 glEnd();

 glPushMatrix();
glTranslatef(200,350,0);
glScalef(0.9,0.9,0);
if(flag==1 || flag==2 || flag==3 || flag==4 || flag==5 || flag==6 || flag==7)
  relax3();
glPopMatrix();
 glEnd();

glPushMatrix();
glTranslatef(200,-180,0);
glScalef(0.9,0.9,0);
if(flag==2  || flag==3 || flag==4 || flag==5 || flag==6 || flag==7)
one();
glPopMatrix();
glEnd();


glPushMatrix();
glTranslatef(200,-180,0);
glScalef(0.9,0.9,0);
if(flag==3 || flag==4 || flag==5 || flag==6 || flag==7)
two();
glPopMatrix();
glEnd();

glPushMatrix();
glTranslatef(200,-150,0);
glScalef(0.9,0.9,0);
if(flag==4 || flag==5 || flag==6 || flag==7)
   three();
glPopMatrix();
 glEnd();

 glPushMatrix();
glTranslatef(200,-120,0);
glScalef(0.9,0.9,0);
if(flag==5 || flag==6 || flag==7)
  four();
glPopMatrix();
 glEnd();

glPushMatrix();
glTranslatef(400,200,0);
glTranslatef(xpos,-xpos,-0.20);
glScalef(0.4,0.4,0);
glRotatef(-45,0,0,1);
if(flag==6 || flag ==7)
car();
glPopMatrix();
glEnd();

glPushMatrix();
glColor3f(r,g,b);
 g=(rand()%10/2);
glTranslatef(400,70,0);
glScalef(0.3,0.3,0);
for(c="Key Pressed:";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
glPopMatrix();
glEnd();

glPushMatrix();
glRasterPos2d(800,70);
glColor3f(r,g,b);
 g=(rand()%10/2);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,a);
glPopMatrix();
glEnd();
glFlush();

}
void keys( unsigned char key,int x,int y)
{
    if(key=='Q'||key=='q')
        flag=1;
    if(key=='W'||key=='w')
        flag=2;
    if(key=='E'||key=='e')
        flag=3;
    if(key=='R'||key=='r')
        flag=4;
    if(key=='T'||key=='t')
        flag=5;
    if(key=='Y'||key=='y')
         flag=6;
    if(key=='U'||key=='u')
         flag=7;
    a=key;
    glutPostRedisplay();
}



void trans(){
 glPushMatrix();
  glTranslatef(200,300,0);
  glScalef(1.6,1.6,0);
  display();
    glPopMatrix();
}


int  main(int argc,char** argv){
glutInit(&argc,argv);
glutCreateWindow("DJ");
glutInitWindowSize(1000,1000);
glutInitWindowPosition(0,0);
//init();
glutReshapeFunc(reshape);
glutDisplayFunc(trans);
glutKeyboardFunc(keys);
glutIdleFunc(idle);
glutMainLoop();
return 0;
}
*/
