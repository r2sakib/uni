#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

using namespace std;

void display() {
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex2f(-0.05-0.30, -0.75);
    glVertex2f(0.05-0.30, -0.75);
    glVertex2f(0.05-0.30, 0.8);
    glVertex2f(-0.05-0.30, 0.8);
    glVertex2f(-0.05-0.30, -0.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex2f(0.05-0.30, 0.6);
    glVertex2f(0.75-0.30, 0.6);
    glVertex2f(0.75-0.30, 0.7);
    glVertex2f(0.05-0.30, 0.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2f(0.15, 0.6);
    glVertex2f(0.15, 0.55);
    glVertex2f(0.40, 0.55);
    glVertex2f(0.40, 0.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex2f(-0.50, -0.75);
    glVertex2f(-0.10, -0.75);
    glVertex2f(-0.10, -0.9);
    glVertex2f(-0.50, -0.9);
    glEnd();

    
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Lab Task 2 - 2");
    glutInitWindowSize(500, 500);
    glutDisplayFunc(display);

    glutMainLoop();


    return 0;
}