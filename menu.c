#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
void df()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0,0);
    glColor3f(1,0,0);
	glVertex2f(-0.5,0);
	glVertex2f(-0.5,0.25);
    glColor3f(0,1,0);
	glVertex2f(-0.25,0.5);
        glVertex2f(0,0.5);
        glColor3f(0,0,1);
        glVertex2f(0.25,0.5);
        glVertex2f(0.5,0.25);
        glVertex2f(0.5,0);
glEnd();

glFlush();
}
void m(int value)
{
  if(value==10)
  glTranslatef(0.1,0,0);
  if(value==11)
  glTranslatef(0,0.1,0);
  if(value==12)
  glTranslatef(0,0,0.1);
  if(value==20)
  glRotatef(5,1,0,0);
  if(value==21)
  glRotatef(5,0,1,0);
  if(value==22)
  glRotatef(5,0,0,1);
  if(value==30)
  glScalef(0.5,0.5,0.5);
  if(value==31)
  glScalef(2,2,2);
  if(value==40)
  exit(0);
  if(value==0)
  glColor3f(1,0,0);
  if(value==1)
  glColor3f(0,1,0);
  if(value==2)
  glColor3f(0,0,1);
  glutPostRedisplay();


}
main(int argc,char** argv)
{
glutInit(&argc,argv);
glutCreateWindow("menu");
glutDisplayFunc(df);


glutCreateMenu(m);
glutAddMenuEntry("translate-x",10);
glutAddMenuEntry("translate-y",11);
glutAddMenuEntry("translate-y",11);
glutCreateMenu(m);
glutAddMenuEntry("rotate-x",20);
glutAddMenuEntry("rotate-y",21);
glutAddMenuEntry("rotate-z",22);
glutCreateMenu(m);
glutAddMenuEntry("diminish",30);
glutAddMenuEntry("zoom",31);
glutCreateMenu(m);
glutAddMenuEntry("RED",0);
glutAddMenuEntry("GREEN",1);
glutAddMenuEntry("BLUE",2);

//Main Menu
glutCreateMenu(m);
glutAddSubMenu("Translate",1);
glutAddSubMenu("Rotate",2);
glutAddSubMenu("Scale",3);
glutAddSubMenu("Colors",4);
glutAddMenuEntry("EXIT",40);

 glutAttachMenu(GLUT_RIGHT_BUTTON);

glutMainLoop();
}
