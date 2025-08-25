#include <iostream>
#include <Gl/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;

void circle(float radius, float xc, float yc, int type=GL_LINE_LOOP, int lineWidth=1)
{
    glLineWidth(lineWidth);
    glBegin(type);
        for(int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i*2*pi)/200;
            float x = radius * cos(A);
            float y = radius * sin(A);
            glVertex2f(x + xc, y + yc);
        }
	glEnd();
}

void semicircle(float radius, float xc, float yc)
{
    glBegin(GL_LINE_STRIP);
        for(int i = 0; i <= 200; i++)
        {
            float pi = 3.1416;
            float A = -(i*pi)/200;
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

void star(float x0, float y0, float scale) {
    const int numPoints = 5;
    float outerRadius = scale;
    float innerRadius = scale * 0.382;

    float angleStep = 2 * M_PI / numPoints;
    float centerAngle = M_PI;

    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < numPoints * 2; i++) {
        float radius = (i % 2 == 0) ? outerRadius : innerRadius;
        float angle = centerAngle + (i * angleStep / 2);
        
        float x = x0 + radius * sin(angle);
        float y = y0 - radius * cos(angle);
        glVertex2f(x, y);
    }
    glEnd();
}


void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glLineWidth(2);
    

    glColor3f(255, 0/255.0, 0/255.0);

    // circle(0.3, 0.5, 0.5, GL_LINE_LOOP, 20);

    parabola(-1/3.0, -0.2, -0.5, 0.5);

    // float* yCoodrs = parabola(-1/2.0, -0.0, -0.5, 0.5);

    // glBegin(GL_LINE_STRIP);
    //     glVertex2f(-0.9, yCoodrs[0]);
    //     glVertex2f(-0.5, yCoodrs[0]);
    // glEnd();

    // glBegin(GL_LINE_STRIP);
    //     glVertex2f(0.9, yCoodrs[1]);
    //     glVertex2f(0.5, yCoodrs[1]);
    // glEnd();
    // delete[] yCoodrs;

    

    glBegin(GL_POLYGON);
    glColor3f(0, 107.0/255.0, 81.0/255.0);

    glVertex2f(-0.9, 0.2);
    glEnd();
    

    



    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Performance Task-1");
    glutDisplayFunc(display);

    glutMainLoop();

    
    return 0;
}