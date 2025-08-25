#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

void circle(float radius, float xc, float yc, float startAngle, float endAngle, int type=GL_LINE_LOOP, int lineWidth=1)
{
    glLineWidth(lineWidth);
    glBegin(type);
        for(int i = startAngle; i < endAngle; i++)
        {
            float pi = 3.1416;
            float A = (i*2*pi)/360;
            float x = radius * cos(A);
            float y = radius * sin(A);
            glVertex2f(x + xc, y + yc);
        }
	glEnd();
}


float _angle1 = 0.0f;

void drawScene() {
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 0);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);


    // Windmill
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(-0.05f, -0.8f);
        glVertex2f(0.05f, -0.8f);
        glVertex2f(0.05f, 0.3f);
        glVertex2f(-0.05f, 0.3f);
    glEnd();

    circle(0.1, 0, 0.3, 0, 360, GL_POLYGON);

    // Windmill blades
    glPushMatrix();
    glTranslatef(0, 0.3, 0); 
	glRotatef(_angle1, 0.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.01f, 0.1f);
        glVertex2f(0.01f, 0.1f);
        glVertex2f(0.01f, 0.5f);
        glVertex2f(-0.01f, 0.5f);
	glEnd();
    glPopMatrix();



    glutSwapBuffers();
}



void update(int value) {
    _angle1 -= 2.0f;
    if(_angle1 < -360.0) {
       _angle1 = 360;
    }


    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Transformation");
    glutDisplayFunc(drawScene);
    gluOrtho2D(-2,2,-2,2);
    glutTimerFunc(60, update, 0);
    glutMainLoop();

    return 0;
}
