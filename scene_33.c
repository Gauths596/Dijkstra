 #include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
 float xpos=-10;
float theta;
float PI=3.142;
char *c;
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
    if(xpos<=120)
    {
        xpos+=0.03;
    }
    glutPostRedisplay();
}

void display()
{
    char *c;
     glClear(GL_COLOR_BUFFER_BIT);
 glLineWidth(7);
  glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);
    glVertex2i(600,300); //2nd cir
 glVertex2i(300,500);  //1st cir
   glVertex2i(600,700);  //3rd cir
  glVertex2i(1200,700); //6th circle
  glVertex2i(600,300);  //2nd cir
  glVertex2i(1200,300); //5th cir
  glVertex2i(1500,500); //4th circle
  glVertex2i(1200,700); //6th circle
  glEnd();

     float theta;
    float PI=3.142;

  glBegin(GL_POLYGON);    //1st -circle (left) mid
  if(xpos<=120){
  glColor3f(r,g,b);
  g=(rand()%9/8);
  }
  else
  {
     glColor3f(0.7,0.2,0.2);
  }
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(300+60*cos(theta),500+60*sin(theta));
  }
  glEnd();

   glColor3f(0.7,0.2,0.2); //2nd left-circle(top)
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
 glEnd();
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
  glTranslatef(-90,-200,0);
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

 glPushMatrix();                               //4th node
  glTranslatef(1480,480,0);
    glLineWidth(6);
  glScalef(0.4,0.4,0);
  glColor3f(0,0,0);
  for(c="F";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glTranslatef(150,50,0);
   glLineWidth(2);
  for(c="INF";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();


 glPushMatrix();                               //5th node
  glTranslatef(1180,280,0);
  glScalef(0.4,0.4,0);
    glLineWidth(6);
  glColor3f(0,0,0);
  for(c="E";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glTranslatef(0,-250,0);
   glLineWidth(2);
  for(c="INF";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }

  glPopMatrix();
 glEnd();


 glPushMatrix();                               //6th node
  glTranslatef(1180,680,0);
  glScalef(0.4,0.4,0);
  glColor3f(0,0,0);
    glLineWidth(6);
  for(c="C";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glTranslatef(0,250,0);
   glLineWidth(2);
  for(c="INF";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();

 //-------Heading---
 glPushMatrix();
  glTranslatef(500,1000,0);
   glTranslatef(-0.5,-xpos,-0.2);
     glLineWidth(6);
  glScalef(0.5,0.5,0);
   glColor3f(r,g,b);
   g=(rand()%10/2);
   if(xpos<90 || xpos>90){
  for(c="DIJKSTRA's ALGORITHM";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
   }
  glPopMatrix();
 glEnd();


 //-------values--------
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


  glPushMatrix();                             // 4th  value
  glTranslatef(890,730,0);
  glScalef(0.4,0.4,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  for(c="5";*c!='\0';c++)
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


  glPushMatrix();                             // 6th  value
  glTranslatef(1380,610,0);
  glScalef(0.4,0.4,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  for(c="7";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  glPopMatrix();
 glEnd();


  glPushMatrix();                             // 7th  value
  glTranslatef(1380,350,0);
  glScalef(0.4,0.4,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  for(c="3";*c!='\0';c++)
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

 glBegin(GL_LINE_STRIP);       //3rd arrow   (mid)
   glLineWidth(5);
 glColor3f(0,0.1,0.6);
 glVertex2i(1100,675);
 glVertex2i(1150,675);
 glVertex2i(1150,625);
 glEnd();

  glBegin(GL_LINE_STRIP);       //4th arrow   (horizontal top)
   glLineWidth(6);
 glColor3f(0,0.1,0.6);
 glVertex2i(1050,740);
 glVertex2i(1100,700);
 glVertex2i(1050,660);
 glEnd();

  glBegin(GL_LINE_STRIP);       //5th arrow   (horizontal bottom)
   glLineWidth(6);
 glColor3f(0,0.1,0.6);
 glVertex2i(1050,340);
 glVertex2i(1100,300);
 glVertex2i(1050,260);
 glEnd();


 glBegin(GL_LINE_STRIP);       //6th arrow   (upwards right)
   glLineWidth(6);
 glColor3f(0,0.1,0.6);
 glVertex2i(1450,570);
 glVertex2i(1450,530);
 glVertex2i(1400,530);
 glEnd();

  glBegin(GL_LINE_STRIP);       //7th arrow   (downwards right)
   glLineWidth(6);
 glColor3f(0,0.1,0.6);
 glVertex2i(1400,470);
 glVertex2i(1450,470);
 glVertex2i(1450,425);
 glEnd();


 //----------Defining----------
  glPushMatrix();
  glTranslatef(100,50,0);
   glTranslatef(-0.5,xpos,0.7);
  glScalef(0.3,0.3,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  if(xpos<120 || xpos>120){
  for(c="A-Source Point  F-Destination ";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  }
  glPopMatrix();
 glEnd();

  glPushMatrix();
  glTranslatef(100,0,0);
  glTranslatef(-0.5,xpos,0.7);
  glScalef(0.3,0.3,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  if(xpos<120 || xpos>120){
  for(c="B,C,D,E-Connecting nodes represented as Cities and Towns ";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
    }
  glPopMatrix();
 glEnd();

  glPushMatrix();
  glTranslatef(100,-50,0);
  glTranslatef(-0.5,xpos,0.7);
  glScalef(0.3,0.3,0);
  glLineWidth(4);
  glColor3f(0,0,0);
  if(xpos<120 || xpos>120){
  for(c="Edge-Time taken to reach from one vertex to another ";*c!='\0';c++)
  {
      glutStrokeCharacter(GLUT_STROKE_ROMAN,*c);
  }
  }
  glPopMatrix();
 glEnd();

  glPushMatrix();
  glTranslatef(0,300,0);
  glTranslatef(xpos,-0.5,0.7);
  glScalef(0.4,0.4,0);
  //glRotatef(0,0,0,1);
  car();
  glPopMatrix();
  glEnd();

 glFlush();
}


int  main(int argc,char** argv){
glutInit(&argc,argv);
glutCreateWindow("DJ");
glutInitWindowSize(1000,1000);
glutInitWindowPosition(0,0);
glutReshapeFunc(reshape);
glutIdleFunc(idle);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

