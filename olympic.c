#include<stdio.h>
#include<GL/glut.h>
void df()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  glColor3f(0,0,1);
  glTranslatef(-0.5,0,0);
  glutSolidTorus(0.03,0.2,50,50);
  glPopMatrix();
  glColor3f(1,1,1);
  glutSolidTorus(0.03,0.2,50,50);
  glPushMatrix();
  glColor3f(1,0,0);
  glTranslatef(0.5,0,0);
  glutSolidTorus(0.03,0.2,50,50);
  glPopMatrix();
  glPushMatrix();
  glColor3f(1,1,0);
  glTranslatef(-0.3,-0.2,0);
  glutSolidTorus(0.03,0.2,50,50);
  glPopMatrix();
  glPushMatrix();
  glColor3f(0,1,0);
  glTranslatef(0.3,-0.2,0);
  glutSolidTorus(0.03,0.2,50,50);
  glPopMatrix();
  glFlush();
}
void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutCreateWindow("olympic rings");
  glutDisplayFunc(df);
  glutMainLoop();
}
