#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

using namespace std;

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    // COORDINATE
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);

    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);

    glVertex2f(0, -1);
    glVertex2f(0, 1);
    glEnd();


    // SQUARE
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);

    glVertex2f(-0.8, 0.2);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.2, 0.8);
    glVertex2f(-0.8, 0.8);
    glVertex2f(-0.8, 0.2);

    glEnd();

    
    // ARROW
    glBegin(GL_POLYGON);
    glColor3f(0, 0.69f, 0.313f);

    glVertex2f(0.2, 0.4);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.7, 0.6);
    glVertex2f(0.2, 0.6);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.69f, 0.313f);

    glVertex2f(0.7, 0.3);
    glVertex2f(0.9, 0.5);
    glVertex2f(0.7, 0.7);

    glEnd();


    // TRIANGLE
    glBegin(GL_POLYGON);
    glColor3f(0.439f, 0.188f, 0.628f);

    glVertex2f(-0.8, -0.5);
    glVertex2f(-0.2, -0.8);
    glVertex2f(-0.2, -0.2);
    glVertex2f(-0.8, -0.5);

    glEnd();

    // TRIANGLE
    glBegin(GL_POLYGON);
    glColor3f(0.439f, 0.188f, 0.628f);

    glVertex2f(-0.6, -0.5);
    glVertex2f(-0.2, -0.8);
    glVertex2f(-0.2, -0.2);
    glVertex2f(-0.6, -0.5);

    glEnd();


    // TRIANGLE upright
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);

    glVertex2f(0.2, -0.6);
    glVertex2f(0.8, -0.6);
    glVertex2f(0.5, -0.2);
    glVertex2f(0.2, -0.6);

    glEnd();

    
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Lab Task-1 - 2");
    glutInitWindowSize(500, 500);
    glutDisplayFunc(display);

    glutMainLoop();


    return 0;
}
