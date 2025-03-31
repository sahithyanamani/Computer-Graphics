#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
GLfloat v[5][3]={
{-0.5,0.5,0},
{-0.5,-0.5,0},
{0.5,-0.5,0},
{0.5,0.5,0},
{0,0,-0.5},
};
GLint f[4][3]={
{0,4,3},
{2,4,1},
{3,4,2},
{1,4,0},
};
void df()
{
  int i,j;
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POLYGON);
  for(i=0;i<4;i++)
  {
     for(j=0;j<3;j++)
     {
       glColor3f(i*0,j*0.1,(i+j)*0.01);
       glVertex3fv(&v[f[i][j]][0]);
     }
  }
  glEnd();
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
  glutCreateWindow("square pyramid");
  glutDisplayFunc(df);
  glutKeyboardFunc(kf); 
  glutMainLoop();
}

 