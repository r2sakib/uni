#include <iostream>
#include <Gl/glut.h>
#include <windows.h>
using namespace std;

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    
    // glLineWidth(25);
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);

    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glVertex2f(1, 0.33);
    glVertex2f(-1, 0.33);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 1, 0);

    glVertex2f(-1, 0.33);
    glVertex2f(1, 0.33);
    glVertex2f(1, 0.66);
    glVertex2f(-1, 0.66);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);

    glVertex2f(-1, 0.66);
    glVertex2f(1, 0.66);
    glVertex2f(1, 1);
    glVertex2f(-1, 1);
    glEnd();

    /////////////////////////////////
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);

    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glVertex2f(1, -0.33);
    glVertex2f(-1, -0.33);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 1);

    glVertex2f(-1, -0.33);
    glVertex2f(1, -0.33);
    glVertex2f(1, -0.66);
    glVertex2f(-1, -0.66);
    glEnd();

    
    glBegin(GL_POLYGON);
    glColor3f(0, 1, 1);

    glVertex2f(-1, -0.66);
    glVertex2f(1, -0.66);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glEnd();


    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Flag");
    glutInitWindowSize(1000, 600);
    glutDisplayFunc(display);

    glutMainLoop();

    
    return 0;
}