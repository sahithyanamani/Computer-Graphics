#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void df() {

float height;
   int angle,phase;

   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1,0,1);
    glBegin(GL_POINTS);
   for(phase=0;phase<270;phase+=20)
   {for(angle=0;angle<360;angle+=20)
   {
   glVertex3f(cos(phase*3.14/180)*cos(angle*3.14/180),cos(phase*3.14/180)*sin(angle*3.14/180),sin(phase*3.14/180));
   }
   }
   glEnd();
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
  glutCreateWindow("sphere");
  glutDisplayFunc(df);
  glutKeyboardFunc(kf);
  glutMainLoop();
}
