#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
int a=0,angle;

void df()
{
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1,1,1);
glBegin(GL_POINTS);
	for(angle=0;angle<=360;angle++)
	glVertex2f(cos(angle*3.14/180),sin(angle*3.14/180));	//face
glEnd();

glColor3f(1,1,1);
glBegin(GL_POINTS);
	for(angle=180;angle<=360;angle++)
	glVertex2f(0.75*cos(angle*3.14/180),0.75*sin(angle*3.14/180));		//smile
glEnd();

glPushMatrix();
glTranslatef(-0.5,0.5,0);
glColor3f(a,a,a);
glutSolidSphere(0.1,30,30);	//left eye
glPopMatrix();

glPushMatrix();
glTranslatef(0.5,0.5,0);
glColor3f(a,a,a);
glutSolidSphere(0.1,30,30);	//right eye
glPopMatrix();

glutSwapBuffers();
}

void tf()
{
	a=(a+1)%2;
	glutPostRedisplay();
	glutTimerFunc(1000,tf,0);
}

main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutCreateWindow("smiley");
glutDisplayFunc(df);
glutTimerFunc(1000,tf,0);
glutMainLoop();
}
