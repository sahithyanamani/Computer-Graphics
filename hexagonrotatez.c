#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
void df()
{

  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex2f(0,0.75);
  glVertex2f(-0.5,0.5);
  glVertex2f(-0.5,-0.5);
  glVertex2f(0,-0.75);
  glVertex2f(0.5,-0.5);
  glVertex2f(0.5,0.5);
  glEnd();
  glFlush();
}
void kf(char key,int x,int y)
{
  if(key=='z')
  glRotatef(5,0,0,1);
  if(key==27)
  exit(0);
  glutPostRedisplay();


}
void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutCreateWindow("hexagon");
  glutDisplayFunc(df);
  glutKeyboardFunc(kf);
  glutMainLoop();
}
