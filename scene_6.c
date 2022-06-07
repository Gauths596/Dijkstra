/*#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<GL/glu.h>


void reshape(int w,int h)
{
    glClearColor(1,1,0.7,0.8);
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
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0.9,0.1);       //face
    glBegin(GL_QUADS);
    glVertex2i(465,390);
    glVertex2i(450,640);
    glVertex2i(700,640);
    glVertex2i(680,390);
    glEnd();

    float theta;
   float PI=3.142;
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);              //right eye(outer)
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(530+35*cos(theta),570+35*sin(theta));
  }
  glEnd();

  glColor3f(1,1,1);
  glBegin(GL_POLYGON);              //left eye(left)
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(610+35*cos(theta),570+35*sin(theta));
  }
  glEnd();

glColor3f(0.2,0.8,0.8);
  glBegin(GL_POLYGON);              //right eye(mid inner)
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(530+20*cos(theta),570+20*sin(theta));
  }
  glEnd();

glColor3f(0.2,0.8,0.8);
  glBegin(GL_POLYGON);              //left eye(mid inner)
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(610+20*cos(theta),570+20*sin(theta));
  }
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_POLYGON);              //right eye(mid inner)
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(530+7*cos(theta),570+7*sin(theta));
  }
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_POLYGON);              //left eye(mid inner)
  for(int i=0;i<360;i++)
  {
      theta=i*PI/180;
      glVertex2f(610+7*cos(theta),570+7*sin(theta));
  }
  glEnd();

  //----Left eyebrow--
  glBegin(GL_LINES);  //eye brow
  //glLineWidth(5);
  glColor3f(0,0,0);
  glVertex2i(510,602);
  glVertex2i(502,625);
  glEnd();

  glBegin(GL_LINES);   //eye brow
  //glLineWidth(5);
  glColor3f(0,0,0);
  glVertex2i(530,603);
  glVertex2i(530,626);
  glEnd();


  glBegin(GL_LINES);   //eye brow
  //glLineWidth(5);
  glColor3f(0,0,0);
  glVertex2i(550,602);
  glVertex2i(558,625);
  glEnd();

//--Right eyebrow-

 glBegin(GL_LINES);   //eye brow
  //glLineWidth(5);
  glColor3f(0,0,0);
  glVertex2i(590,602);
  glVertex2i(582,625);
  glEnd();

  glBegin(GL_LINES);   //eye brow
  //glLineWidth(5);
  glColor3f(0,0,0);
  glVertex2i(610,602);
  glVertex2i(610,625);
  glEnd();

    glBegin(GL_LINES);   //eye brow
  glLineWidth(3);
  glColor3f(0,0,0);
  glVertex2i(630,602);
  glVertex2i(638,625);
  glEnd();

  //--nose--
  glColor3f(0,0,0);
  //glLineWidth(3);
  glBegin(GL_LINE_STRIP);
  for(int i=0;i<270;i++)
  {
      theta=i*PI/180;
      glVertex2f(572+20*cos(theta),540+11*sin(theta));
  }
  glEnd();


  //----mouth
   glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);
  for(int i=0;i>=-180;i--)
  {
      theta=i*PI/180;
      glVertex2f(572+80*cos(theta),545+70*sin(theta));
  }
  glEnd();

  //Teeth
  glColor3f(1,1,1);
  glBegin(GL_QUADS);
  glVertex2i(540,440);
  glVertex2i(540,477);
  glVertex2i(570,473);
  glVertex2i(570,440);
  glEnd();

  glColor3f(1,1,1);
  glBegin(GL_QUADS);
  glVertex2i(575,440);
  glVertex2i(575,473);
  glVertex2i(605,477);
  glVertex2i(605,440);
  glEnd();

   //-------lips
     glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);
  for(int i=0;i>=-180;i--)
  {
      theta=i*PI/180;
      glVertex2f(550+21*cos(theta),430+8*sin(theta));
  }
  glEnd();

   glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);
  for(int i=0;i>=-180;i--)
  {
      theta=i*PI/180;
      glVertex2f(590+21*cos(theta),430+8*sin(theta));
  }
  glEnd();

  //Body
  glColor3f(1,1,1);
  glBegin(GL_QUADS);
  glVertex2i(465,340);
  glVertex2i(465,390);
  glVertex2i(680,390);
  glVertex2i(680,340);
  glEnd();

   glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);
   glVertex2i(465,390);
   glVertex2i(465,270);
    glVertex2i(680,270);
   glVertex2i(680,390);
   glEnd();

   glColor3f(0.5,0.2,0.2);
   glBegin(GL_QUADS);
   glVertex2i(465,270);
   glVertex2i(465,330);
   glVertex2i(680,330);
   glVertex2i(680,270);
  glEnd();


  //Collar
  glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);
  glVertex2i(495,390);
  glVertex2i(525,370);
  glVertex2i(570,385);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);
  glVertex2i(570,385);
  glVertex2i(600,370);
  glVertex2i(645,390);
  glEnd();

  //Tie
  glColor3f(1,0,0);
  glBegin(GL_LINE_STRIP);
  glVertex2i(550,375);
  glVertex2i(555,360);
  glVertex2i(585,360);
  glVertex2i(590,375);
  glEnd();

   glColor3f(1,0,0);
  glBegin(GL_LINE_LOOP);
  //glVertex2i(265,565);
   glVertex2i(540,300);
    glVertex2i(555,360);
  glVertex2i(585,360);
    glVertex2i(600,300);
  glEnd();

 glColor3f(1,0,0);
  glBegin(GL_LINE_LOOP);
  glVertex2i(540,300);
  glVertex2i(570,280);
  glVertex2i(600,300);
  glEnd();

  //belt
  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2i(475,300);
  glVertex2i(475,310);
  glVertex2i(510,310);
  glVertex2i(510,300);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2i(520,300);
  glVertex2i(520,310);
  glVertex2i(540,310);
  glVertex2i(540,300);
  glEnd();

    glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2i(600,300);
  glVertex2i(600,310);
  glVertex2i(620,310);
  glVertex2i(620,300);
  glEnd();

    glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2i(630,300);
  glVertex2i(630,310);
  glVertex2i(665,310);
  glVertex2i(665,300);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);              //shoulder
  glVertex2i(420,420);
  glVertex2i(420,430);
   glVertex2i(450,430);
   glVertex2i(450,420);
  glEnd();

  glColor3f(0,0,0);         //right leg
  glBegin(GL_QUADS);
  glVertex2i(500,100);
  glVertex2i(500,270);
  glVertex2i(510,270);
  glVertex2i(510,100);
  glEnd();

  glColor3f(0,0,0);         // left leg
  glBegin(GL_QUADS);
  glVertex2i(635,100);
  glVertex2i(635, 270);
  glVertex2i(645,270);
  glVertex2i(645,100);
  glEnd();

  glColor3f(0,0,0);         // right shoe
  glBegin(GL_LINE_STRIP);
  glVertex2i(475,60);
  glVertex2i(510,75);
  glVertex2i(510,100);
  glVertex2i(500,100);
  glVertex2i(475,95);
  glEnd();

   glColor3f(0,1,0);         // right shoe
  glBegin(GL_POLYGON);
  glVertex2i(475,60);
  glVertex2i(510,75);
  glVertex2i(510,100);
  glVertex2i(500,100);
  glVertex2i(475,95);
  glEnd();



  glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);              //shoe top part
  for(int i=0;i<=270;i++)
  {
      theta=i*PI/180;
      glVertex2f(475+20*cos(theta),77.5+20*sin(theta));
  }
  glEnd();

   glColor3f(0,1,0);
  glBegin(GL_POLYGON);              //shoe top part
  for(int i=0;i<=270;i++)
  {
      theta=i*PI/180;
      glVertex2f(475+20*cos(theta),77.5+20*sin(theta));
  }
  glEnd();


    glColor3f(0,0,0);                //left shoe
    glBegin(GL_LINE_STRIP);
    glVertex2i(675,60);
    glVertex2i(635,75);
    glVertex2i(635,100);
    glVertex2i(650,100);
    glVertex2i(675,95);
    glEnd();

    glColor3f(0,1,0);                //left shoe
    glBegin(GL_POLYGON);
    glVertex2i(675,60);
    glVertex2i(635,75);
    glVertex2i(635,100);
    glVertex2i(650,100);
    glVertex2i(675,95);
    glEnd();



    glColor3f(0,0,0);
  glBegin(GL_LINE_STRIP);              //shoe top part
  for(int i=0;i<=180;i++)
  {
      theta=i*PI/180;
      glVertex2f(675+20*sin(theta),77.5+20*cos(theta));
  }
  glEnd();

      glColor3f(0,1,0);
  glBegin(GL_POLYGON);              //shoe top part
  for(int i=0;i<=180;i++)
  {
      theta=i*PI/180;
      glVertex2f(675+20*sin(theta),77.5+20*cos(theta));
  }
  glEnd();


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
