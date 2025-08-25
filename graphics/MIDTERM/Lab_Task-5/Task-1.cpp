#include <iostream>
#include <Gl/glut.h>
#include <windows.h>
using namespace std;

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    
    // glLineWidth(25);
    glBegin(GL_POLYGON);
    glColor3f(0.56, 0, 1.0);

    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, -0.715);
    glVertex2f(-1, -0.715);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.0, 0.55);

    glVertex2f(-1, -0.715);
    glVertex2f(1, -0.715);
    glVertex2f(1, -0.43);
    glVertex2f(-1, -0.43);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.0, 1);

    glVertex2f(-1, -0.43);
    glVertex2f(1, -0.43);
    glVertex2f(1, -0.145);
    glVertex2f(-1, -0.145);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 1.0, 0);

    glVertex2f(-1, -0.145);
    glVertex2f(1, -0.145);
    glVertex2f(1, 0.14);
    glVertex2f(-1, 0.14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0);

    glVertex2f(-1, 0.14);
    glVertex2f(1, 0.14);
    glVertex2f(1, 0.425);
    glVertex2f(-1, 0.425);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0);

    glVertex2f(-1, 0.425);
    glVertex2f(1, 0.425);
    glVertex2f(1, 0.71);
    glVertex2f(-1, 0.71);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0, 0);

    glVertex2f(-1, 0.71);
    glVertex2f(1, 0.71);
    glVertex2f(1, 1);
    glVertex2f(-1, 1);
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