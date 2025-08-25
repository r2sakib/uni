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


float _move1 = 0.0f;
float _move2 = 0.0f;

float _angle1 = 0.0f;

void drawScene() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 0);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);



    // Car body
    glPushMatrix();
    glTranslatef(_move1, 0.0f, 0.0f);
        glColor3f(1, 0, 0);
        glBegin(GL_QUADS);
            glVertex2f(-1.0f, 0.0f);
            glVertex2f(-0.5f, 0.0f);
            glVertex2f(-0.5f, 0.2f);
            glVertex2f(-1.0f, 0.2);
        glEnd();

        glColor3f(1, 1, 1);
        circle(0.07, -0.9, 0, 0, 180, GL_POLYGON);
        circle(0.07, -0.6, 0, 0, 180, GL_POLYGON);
    glPopMatrix();

    
    // wheels

    glPushMatrix();
    glTranslatef(-0.9, 0, 0); 
    glRotatef(_angle1, 0, 0, 1);
        glColor3f(0, 0, 0);
        circle(0.06, 0, 0, 0, 320, GL_POLYGON);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6, 0, 0);
    glRotatef(_angle1, 0, 0, 1);
        glColor3f(0, 0, 0);
        circle(0.06, 0, 0, 0, 320, GL_POLYGON);
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
