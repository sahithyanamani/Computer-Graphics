
#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>

int flag=-1,count=0;

void df()
{
glClear(GL_COLOR_BUFFER_BIT);
glutSolidSphere(0.1,360,360);
glutSwapBuffers();
}

void tf()
{
 count++;
 if(count>90)
        {
	flag=flag*(-1);
	count=0;
	}
 glTranslatef(0,flag*0.01,0);
 glutPostRedisplay();
 glutTimerFunc(10,tf,0);
  
}
main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutCreateWindow("ball game");
glutDisplayFunc(df);
glutTimerFunc(10,tf,0);
glutMainLoop();
}
