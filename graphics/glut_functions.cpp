#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

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


float* parabola(float eqn_xCoeff, float eqn_const, float startX, float endX)
{
    float* yCoords = new float[2];
    float y;
    glBegin(GL_LINE_STRIP);
        for (float x = startX; x <= endX; x+=0.01) 
        {    
            y = eqn_xCoeff * (x*x) + eqn_const; 
            glVertex2f(x, y);
            if (x == startX) {yCoords[0] = y;}
        }
    glEnd();
    yCoords[1] = y;
    return yCoords;
}


void drawWheelSpoke(float radius, float xc, float yc, int angleOfSpoke, int wheelWidth) {
    glLineWidth(wheelWidth);
    for(int i = 90; i < 450; i += angleOfSpoke)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/360;
        float x = radius * cos(A);
        float y = radius * sin(A);

        glBegin(GL_LINE_STRIP);
            glVertex2f(xc, yc);
            glVertex2f(x + xc, y + yc);
        glEnd();
    }
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    
    // circle(0.4, 0, 0, 1, 0, 0
    
    // parabola(-1/3.0, -0.2, -0.5, 0.5);

    // float* yCoodrs = parabola(-1/2.0, -0.3, -0.5, 0.5);

    // glBegin(GL_LINE_STRIP);
    //     glVertex2f(-0.9, yCoodrs[0]);
    //     glVertex2f(-0.5, yCoodrs[0]);
    // glEnd();

    // glBegin(GL_LINE_STRIP);
    //     glVertex2f(0.9, yCoodrs[1]);
    //     glVertex2f(0.5, yCoodrs[1]);
    // glEnd();
    // delete[] yCoodrs;
    
    glColor3f(0, 0, 0);
    circle(4, 0, 0, 0, 360);
    drawWheelSpoke(4, 0, 0, 72, 1);
    circle(1, 0, 0, 0, 360, GL_POLYGON);
    


    glFlush();
}

void reshape(int, int);


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowSize(400, 400);
    glutCreateWindow("My Functions");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glClearColor(1, 1, 1, 1);

    glutMainLoop();

    return 0;
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    float aspect = (float)w / (float)h;
    if (aspect >= 1.0f) {
        // Wide window
        gluOrtho2D(-10.0f * aspect, 10.0f * aspect, -10.0f, 10.0f);
    } else {
        // Tall window
        gluOrtho2D(-10.0f, 10.0f, -10.0f / aspect, 10.0f / aspect);
    }

    glMatrixMode(GL_MODELVIEW);
}