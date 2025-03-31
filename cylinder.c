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
				glVertex3f(cos(angle*3.14/180),sin(angle*3.14/180),height);
glEnd();

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

void main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("cylinder");
glScalef(0.5,0.5,0.5);
glutKeyboardFunc(kf);
glutDisplayFunc(df);
glutMainLoop();
}
