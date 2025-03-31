#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
void df();
void kf(char key,int x,int y);

void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutCreateWindow("Rhombus");
  glutDisplayFunc(df);
  glutKeyboardFunc(kf);
  glutMainLoop();
}
void df()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POLYGON);
  glVertex2f(0,0.75);
  glVertex2f(0.5,0);
  glVertex2f(0,-0.75);
  glVertex2f(-0.5,0);
  glEnd();
  glFlush();
}
void kf(char key,int x,int y)
{
  if(key=='x')
  glScalef(2,2,2);
  if(key=='y')
  glScalef(0.5,0.5,0.5);
  if(key==27)
  exit(0);
  glutPostRedisplay();
}
