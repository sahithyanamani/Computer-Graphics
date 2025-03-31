#include<stdlib.h>
#include<GL/glut.h>
//float a[]={0,0,1,1};
void df()
{
  int i,j;
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(0,0.5,0);
  glVertex3f(-0.5,0,0);
  glVertex3f(-0.5,-0.75,0);
  glVertex3f(0.5,-0.75,0);
  glVertex3f(0.5,0,0);
  glEnd();
  glColor3f(1,0,1);
  glBegin(GL_POLYGON);
  glVertex3f(0.5,0,0);
  glVertex3f(0,0,-0.5);
  glVertex3f(0.5,-0.75,0);
  glEnd();
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex3f(0,0.5,0);
  glVertex3f(0,0,-0.5);
  glVertex3f(0.5,0,0);
  glEnd();
  glColor3f(0,0,1);
  glBegin(GL_POLYGON);
  glVertex3f(0,0.5,0);
  glVertex3f(0,0,-0.5);
  glVertex3f(-0.5,0,0);
  glEnd();
  glColor3f(0,1,0);
  glBegin(GL_POLYGON);
  glVertex3f(-0.5,0,0);
  glVertex3f(0,0,-0.5);
  glVertex3f(-0.5,-0.75,0);
  glEnd();
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(-0.5,-0.75,0);
  glVertex3f(0,0,-0.5);
  glVertex3f(0.5,-0.75,0);
  glEnd();
  //glEnable(GL_LIGHTING);
  //glEnable(GL_LIGHT0);
  //glLightfv(GL_LIGHT0,GL_POSITION,a);
  glFlush();
}
void kf(char key,int x,int y)
{
  if(key=='x')
  glRotatef(5,1,0,0);
  if(key=='y')
  glRotatef(5,0,1,0);
  if(key=='z')
  glRotatef(5,0,0,1);
  if(key==27)
  exit(0);
  glutPostRedisplay();


}
void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutCreateWindow("pentagonal pyramid");
  glutDisplayFunc(df);
  glutKeyboardFunc(kf);
  glutMainLoop();
}

