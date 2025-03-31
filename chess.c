
#include<stdio.h>

#include <GL/glut.h>

int BOX,x,y,flag=0;

dl(float a)
{
glColor3f(a,a,a);
glutSolidCube(2);
}

main(int argc, char** argv)
{
glutInit(&argc,argv);
glutCreateWindow("Title");
glClear(GL_COLOR_BUFFER_BIT);

BOX=glGenLists(2);

glNewList(BOX,GL_COMPILE);
dl(0);
glEndList();

glNewList(BOX+1,GL_COMPILE);
dl(1);
glEndList();

for(y=0;y<=300;y+=30)
for(x=0;x<=300;x+=30)
{
glViewport(x,y,30,30);
flag=(flag+1)%2;
if(flag==0)
glCallList(BOX);
else
glCallList(BOX+1);
}

glFlush();
glutMainLoop();
}





