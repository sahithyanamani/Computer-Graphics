#include<stdio.h>
#include<GL/glut.h>
int a=0;
void tf()
{
  a=(a+1)%2;
  glutPostRedisplay();
  glutTimerFunc(100,tf,50);

}
void df()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  glColor3f(a,a,a);
  glBegin(GL_POLYGON);
  glVertex2f(0,0.75);
  glVertex2f(0.5,0.5);
  glVertex2f(0.75,0.5);
  glVertex2f(0.5,0);
  glVertex2f(0.75,-0.75);
  glVertex2f(0,-0.5);
  glVertex2f(-0.75,-0.75);
  glVertex2f(-0.5,0);
  glVertex2f(-0.75,0.5);
  glVertex2f(-0.5,0.5);
  glEnd();
  glFlush();

}
void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutCreateWindow("Twinkling star");
  glutDisplayFunc(df);
  glutTimerFunc(100,tf,50);
  glutMainLoop();
}
