#include <GL/glut.h>
#include<stdio.h>
float a=-0.9,b=0.9;

void df()
{
glClear(GL_COLOR_BUFFER_BIT);

glPushMatrix();
glTranslatef(a,0,0);
glColor3f(1,1,0);
glutSolidSphere(0.1,360,360);
//glutSolidCube(0.5);
glPopMatrix();

glPushMatrix();
glTranslatef(b,0,0);
glColor3f(0,1,1);
glutSolidSphere(0.1,360,360);
//glutSolidCube(0.5);
glPopMatrix();

glutSwapBuffers();
}

void tf()
{
if(a<=-0.1)
	{
	a+=0.01;
	b-=0.01;
	glutPostRedisplay();
	glutTimerFunc(10,tf,0);
	}
}

void main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutCreateWindow("collision");
glutDisplayFunc(df);
glutTimerFunc(10,tf,0);
glutMainLoop();
}
