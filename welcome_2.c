/*#include<GL/glut.h>
#include<windows.h>
#include<stdio.h>
 void init()
 {
     glClearColor(0.5, 0.5, 1.0, 0.3);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(0.0, 200.0, 0.0, 150.0);
 }

void arrow()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,1,0);
    glBegin(GL_LINES);
    glVertex2i(10,20);
    glVertex2i(30,20);
    glEnd();
     glColor3f(1,1,0);
    glBegin(GL_LINES);
    glVertex2i(25,22.5);
    glVertex2i(30,20);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_LINES);
    glVertex2i(25,17.5);
    glVertex2i(30,20);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    arrow();
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(640,600);
    glutCreateWindow("object");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;


}
*/
