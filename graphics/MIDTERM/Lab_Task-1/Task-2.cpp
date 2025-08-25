
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

using namespace std;

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(5);
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);

    glVertex2f(-0.9, -0.9);
    glVertex2f(0.9, -0.9);
    glVertex2f(0.6, 0.4);
    glVertex2f(-0.6, 0.4);
    glVertex2f(-0.9, -0.9);


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
