#include<GL/glut.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int angle,SPIRAL=1;

float r=1;	//r is radius

dl()
{
glBegin(GL_POINTS);
	for(angle=0;angle<=360*5;angle++)
	{
	glVertex2f(r*cos(angle*3.14/180),r*sin(angle*3.14/180));
	r-=0.0005;
	}
glEnd();
}

void df()
{
glClear(GL_COLOR_BUFFER_BIT);
glCallList(SPIRAL);
glFlush();
}

void tf()
{
glRotatef(10,0,0,1);
glutPostRedisplay();
glutTimerFunc(50,tf,0);
}

void main(int argc,char** argv)
{
glutInit(&argc,argv);
glutCreateWindow("spiral");

glNewList(SPIRAL,GL_COMPILE);
dl();
glEndList();

glutDisplayFunc(df);
glutTimerFunc(50,tf,0);
glutMainLoop();
}
