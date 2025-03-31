#include<stdio.h>
#include<GL/glut.h>
void df()
{

  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex2f(-0.5,0);
  glVertex2f(0,0.5);
  glVertex2f(0.5,0);
  glEnd();
  glFlush();
}
void tf()
{

  glTranslatef(0.1,0.1,0);
  glutPostRedisplay();
  glutTimerFunc(100,tf,50);
}
void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutCreateWindow("triangle");
  glutDisplayFunc(df);
  glutTimerFunc(100,tf,50);
  glutMainLoop();
}
