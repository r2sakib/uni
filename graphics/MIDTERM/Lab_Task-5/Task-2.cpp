#include <iostream>
#include <Gl/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;

void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_LINE_STRIP);
        for(int i = 0; i < 200; i++)
        {
            glColor3f(r, g, b);
            float pi = 3.1416;
            float A = (i*2*pi)/200;
            float x = radius * cos(A);
            float y = radius * sin(A);
            glVertex2f(x + xc, y + yc);
        }
	glEnd();
}

void semicircle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_LINE_STRIP);
        for(int i = 0; i <= 200; i++)
        {
            glColor3f(r, g, b);
            float pi = 3.1416;
            float A = -(i*pi)/200;
            float x = radius * cos(A);
            float y = radius * sin(A);
            glVertex2f(x + xc, y + yc);
        }
    glEnd();
}

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glLineWidth(2);

    // A
    glBegin(GL_LINE_STRIP);
    glColor3f(0.13, 0.0, 0.55);

    glVertex2f(-0.8, 0);
    glVertex2f(-0.6, 0.6);
    glVertex2f(-0.4, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.13, 0.0, 0.55);

    glVertex2f(-0.73, 0.2);
    glVertex2f(-0.47, 0.2);
    glEnd();

    // I
    glBegin(GL_LINE_STRIP);
    glColor3f(0.13, 0.0, 0.55);

    glVertex2f(-0.3, 0.0);
    glVertex2f(-0.3, 0.6);
    glEnd();


    // U
    glBegin(GL_LINE_STRIP);
    glColor3f(0.13, 0.0, 0.55);
    glVertex2f(-0.15, 0.6); 
    glVertex2f(-0.15, 0.1); 
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.13, 0.0, 0.55);
    glVertex2f(0.05, 0.6);
    glVertex2f(0.05, 0.1);
    glEnd();

    semicircle(0.1, -0.05, 0.1, 0.13, 0.0, 0.55);

    // B
    glBegin(GL_LINE_STRIP);
    glColor3f(0.13, 0.0, 0.55);

    glVertex2f(0.20, 0.0);
    glVertex2f(0.20, 0.6);
    glEnd();


    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 400);
    glutCreateWindow("Flag");
    glutDisplayFunc(display);

    glutMainLoop();

    
    return 0;
}