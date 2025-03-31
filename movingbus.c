#include<stdio.h>
#include<GL/glut.h>
int a=0;
void df()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  glColor3f(1,0,0);
  glScalef(1.5,0.8,0.8);
  glutSolidCube(0.5);
  glPopMatrix();
  glPushMatrix();
  glTranslatef(0.2,-0.25,0);
  glRotatef(a,0,0,1);
  glColor3f(1,1,0);
  glutWireSphere(0.1,10,10);
  glPopMatrix();
  glPushMatrix();
  glTranslatef(-0.2,-0.25,0);
  glRotatef(a,0,0,1);
  glColor3f(1,1,0);
  glutWireSphere(0.1,10,10);
  glPopMatrix();
  glFlush();
}
void tf()
{ a=a+5;
  glTranslatef(0.1,0,0);
  glutPostRedisplay();
  glutTimerFunc(200,tf,0);
}

void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutCreateWindow("bus");
  glutDisplayFunc(df);
  glutTimerFunc(200,tf,0);
  glutMainLoop();
}
