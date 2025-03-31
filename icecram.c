#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
void df()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glPushMatrix();
 glTranslatef(0,-0.25,0);
 glRotatef(250,-1,0,0);
 glColor3f(1,1,0);
 glutSolidCone(0.25,0.75,20,20);
 glPushMatrix();
 glColor3f(0,1,0);
 glutSolidSphere(0.25,20,20);
 glPopMatrix();
 glPopMatrix();
 glFlush();
}
void kf(char key,int x,int y)
{

  if(key=='a')
  glRotatef(5,1,0,0);
  if(key=='b')
  glRotatef(5,0,1,0);
  if(key=='c')
  glRotatef(5,0,0,1);
  if(key=='i')
  glScalef(0.5,0.5,0.5);
  if(key=='j')
  glScalef(2,2,2);
  if(key==27)
  exit(0);
  glutPostRedisplay();


}
void main(int argc,char** argv)
{
glutInit(&argc,argv);
glutCreateWindow("icecream");
glutDisplayFunc(df);
glutKeyboardFunc(kf);
glutMainLoop();
}
