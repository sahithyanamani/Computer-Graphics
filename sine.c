#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
void main(int argc,char **argv)
{
   float angle;
   glutInit(&argc,argv);
   
   glutCreateWindow("circle");
   gluOrtho2D(0,360,-1,1);
   glClear(GL_COLOR_BUFFER_BIT);
    
   glColor3f(1,1,0);
   glBegin(GL_POINTS);
   for(angle=0;angle<=360;angle++)
   {
   glVertex2f(angle,sin(angle*3.14/180));
  }  
   glEnd();
   glFlush();
   glutMainLoop();
}