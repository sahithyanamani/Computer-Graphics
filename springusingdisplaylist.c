#include<GL/glut.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int angle,SPIRAL=1;

float z=0;

dl()
{
glBegin(GL_POINTS);
	for(angle=0;angle<=360*5;angle++)
	{
	glVertex3f(0.5*cos(angle*3.14/180),0.5*sin(angle*3.14/180),z);
	z+=0.0005;
	}
glEnd();
}

df()
{
glClear(GL_COLOR_BUFFER_BIT);
glCallList(SPIRAL);
glFlush();
}




void kf(char key, int x, int y)
{
   switch (key) {
   case 'x':
   case 'X':
      glRotatef(30,1,0,0);
      glutPostRedisplay();
      break;
   case 'y':
   case 'Y':
      glRotatef(30,0,1,0);
      glutPostRedisplay();
      break;
   case 'z':
   case 'Z':
      glRotatef(30,0,0,1);
      glutPostRedisplay();
      break;
   case 27:
      exit(0);
      break;
   }
}

void main(int argc,char** argv)
{
glutInit(&argc,argv);
glutCreateWindow("spring");

glNewList(SPIRAL,GL_COMPILE);
dl();
glEndList();

glutDisplayFunc(df);
glutKeyboardFunc(kf);

glutMainLoop();
}
