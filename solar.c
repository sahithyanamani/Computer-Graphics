#include<GL/glut.h>
#include<stdio.h>
float a=0;
void df()	{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,0);
glutWireSphere(0.2,20,20);			//Sun
	glPushMatrix();
	glTranslatef(0.6,0,0);
        glRotatef(a,0,1,0);
	glColor3f(0,1,1);
	glutWireSphere(0.2,10,10);		//Earth

		glPushMatrix();
		glTranslatef(0.3,0,0);
		glColor3f(1,1,1);
		glutWireSphere(0.1,10,10);	//Moon
		glPopMatrix();
	glPopMatrix();
glFlush();
}
void tf() {
glRotatef(5,0,1,0);
a=a+5;
glutPostRedisplay();
glutTimerFunc(100,tf,0);
}
void main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("solar system");
    glRotatef(-30,1,0,0);
    glutDisplayFunc(df);
    glutTimerFunc(100,tf,0);
    glutMainLoop();
}







