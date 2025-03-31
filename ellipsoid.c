#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void df() {

int phi,theta;
float height;

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POINTS);
for(phi=0;phi<=270;phi+=20)
		for(theta=0;theta<=360;theta+=20)
				glVertex3f(
				0.5*cos(phi*3.14/180)*cos(theta*3.14/180),
				0.25*cos(phi*3.14/180)*sin(theta*3.14/180),
				sin(phi*3.14/180)
				);
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
  glutCreateWindow("ellipsoid");
  glutDisplayFunc(df);
  glutKeyboardFunc(kf);
  glutMainLoop();
}
