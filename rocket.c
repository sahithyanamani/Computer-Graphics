#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
void df()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  glTranslatef(0,0.25,0);
  glRotatef(250,1,0,0);
  glColor3f(1,1,0);
  glutSolidCone(0.225,0.75,20,20);
  glPushMatrix();
  glRotatef(45,1,0,0);
  glColor3f(0,0,1);
  glutSolidCylinder(0.25,0.25,20,20);
  glPushMatrix();
  glTranslatef(0,-0.25,0);
  glColor3f(1,0,0);
  glutSolidCube(0.125);
  glPopMatrix();
  glPopMatrix();
  glPopMatrix();
  glFlush();
}
void kf(char key,int x,int y)
{
  if(key=='x')
  glTranslatef(0.1,0,0);
  if(key=='y')
  glTranslatef(0,0.1,0);
  if(key=='z')
  glTranslatef(0,0,0.1);
  if(key==27)
  exit(0);
  glutPostRedisplay();


}
void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutCreateWindow("rocket");
  glutDisplayFunc(df);
  glutKeyboardFunc(kf);
  glutMainLoop();
}
