#include<GL/glut.h>
#include<stdio.h>

float qaLightPosition[] = {0,0,1,1};

void df()
{
glClear(GL_COLOR_BUFFER_BIT);

glutSolidSphere(0.5,360,360);

glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glLightfv(GL_LIGHT0, GL_POSITION, qaLightPosition);

glFlush();
}

void main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("Light");
glutDisplayFunc(df);
glutMainLoop();
}
