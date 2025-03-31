#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
void df()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_QUADS);
	glVertex2f(-0.5,-0.5);
	glVertex2f(-0.5,0.5);
	glVertex2f(0.5,0.5);
	glVertex2f(0.5,-0.5);
glEnd();

glFlush();
}
void kf(char key,int x,int y)
{
  if(key=='x')
  glTranslatef(0.1,0,0);
  if(key=='y')
  glTranslatef(0,0.1,0);
  if(key=='z')
  glTranslatef(0,0,0.1);
  if(key=='a')
  glRotatef(5,1,0,0);
  if(key=='b')
  glRotatef(5,0,1,0);
  if(key=='c')
  glRotatef(5,0,0,1);
  if(key=='i')
  glScalef(0.5,0.5,0.5);
  if(key=='j')
  glScalef(2,2,2);
  if(key==27)
  exit(0);
  glutPostRedisplay();

    
}
void main(int argc,char** argv)
{
glutInit(&argc,argv);
glutCreateWindow("trs");
glutDisplayFunc(df);
glutKeyboardFunc(kf);
glutMainLoop();
}