
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

using namespace std;

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(5);
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);

    glVertex2f(-0.9, -0.9);
    glVertex2f(0.9, -0.9);
    glVertex2f(0.9, 0.2);
    glVertex2f(-0.9, 0.2);
    glVertex2f(-0.9, -0.9);

    glEnd();

    
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Lab Task-1 - 1");
    glutInitWindowSize(500, 500);
    glutDisplayFunc(display);

    glutMainLoop();


    return 0;
}
