#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void df() {

int angle;
float height;

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POINTS);
for(height=0;height<=1;height+=0.1)
		for(angle=0;angle<=360;angle++)
				glVertex3f(cos(angle*3.14/180)*height,sin(angle*3.14/180)*height,height);
glEnd();

glFlush();
}

void kf(char key,int x,int y)
{
  if(key=='x')
  glRotatef(5,1,0,0);
  if(key=='y')
  glRotatef(5,0,1,0);
  if(key=='z')
  glRotatef(5,0,0,1);
  if(key==27)
  exit(0);
  glutPostRedisplay();
}
void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutCreateWindow("Cone");
  glutDisplayFunc(df);
  glutKeyboardFunc(kf);
  glutMainLoop();
}
