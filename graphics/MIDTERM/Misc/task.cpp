
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

using namespace std;

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    /// RED TRIANGLE
    glBegin(GL_LINE_STRIP);
    glColor3f(1, 0, 0);

    glVertex2f(-0.66, -0.66);
    glVertex2f(0.66, -0.66);
    glVertex2f(0, 0.66);
    glVertex2f(-0.66, -0.66);
    glEnd();


    /// GREEN TRIANGLE
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 1, 0);

    glVertex2f(-0.40, -0.40);
    glVertex2f(0.40, -0.40);
    glVertex2f(0, 0.40);
    glVertex2f(-0.40, -0.40);
    glEnd();


    /// CONNECTING LINES
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);

    glVertex2f(-0.66, -0.66);
    glVertex2f(-0.40, -0.40);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);

    glVertex2f(0.66, -0.66);
    glVertex2f(0.40, -0.40);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);

    glVertex2f(0, 0.66);
    glVertex2f(0, 0.40);
    glEnd();


    // /// BLUE TRIANGLE
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 1);

    glVertex2f(-0.20, -0.20);
    glVertex2f(0.20, -0.20);
    glVertex2f(0, 0.20);
    glVertex2f(-0.20, -0.20);
    glEnd();

    /// CONNECTING LINE
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    
    glVertex2f(-0.20, -0.20);
    glVertex2f(0, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    
    glVertex2f(0.20, -0.20);
    glVertex2f(0, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    
    glVertex2f(0, 0.20);
    glVertex2f(0, 0);
    glEnd();



    
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Class Task-1");
    glutInitWindowSize(500, 500);
    glutDisplayFunc(display);

    glutMainLoop();


    return 0;
}
