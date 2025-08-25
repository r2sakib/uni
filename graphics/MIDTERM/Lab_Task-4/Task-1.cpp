#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
using namespace std;

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, 0, 0); // Red
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.12, -0.70);
        glVertex2f(-0.07, 0.40);
        glVertex2f(0.07, 0.40);
        glVertex2f(0.12, -0.70);
    glEnd();

    glFlush();
}

//     // glLineWidth(1);
//     glColor3f(0, 0, 0); // Red
//     glBegin(GL_LINE_STRIP);
//         glVertex2f(-0.9, -0.9);
//         glVertex2f(-0.5, -0.9);
//         glVertex2f(-0.47, -0.88);
//         glVertex2f(-0.45, -0.86);
//         glVertex2f(-0.42, -0.83);
//         glVertex2f(-0.40, -0.80);
//         glVertex2f(-0.30, -0.75);
//         glVertex2f(-0.20, -0.73);
//         glVertex2f(-0.10, -0.70);
//         glVertex2f(0.00, -0.69);
//         glVertex2f(0.10, -0.70);
//         glVertex2f(0.20, -0.73);
//         glVertex2f(0.30, -0.75);
//         glVertex2f(0.40, -0.80);
//         glVertex2f(0.42, -0.83);
//         glVertex2f(0.45, -0.86);
//         glVertex2f(0.47, -0.88);
//         glVertex2f(0.5, -0.9);
//         glVertex2f(0.9, -0.9);
//     glEnd();


//     // glLineWidth(1);
//     glBegin(GL_LINE_STRIP);
//     glVertex2f(-0.12, -0.70);
//     glVertex2f(-0.07, 0.40);
//     glVertex2f(0.07, 0.40);
//     glVertex2f(0.12, -0.70);
//     glEnd();

//     glBegin(GL_LINE_STRIP);
//     glVertex2f(-0.07, 0.40);
//     glVertex2f(-0.10, 0.55);
//     glVertex2f(0.10, 0.55);
//     glVertex2f(0.07, 0.40);
//     glEnd();

//     glBegin(GL_LINE_STRIP);
//     glVertex2f(-0.07, 0.55);
//     glVertex2f(-0.07, 0.65);
//     glVertex2f(0.07, 0.65);
//     glVertex2f(0.07, 0.55);
//     glEnd();

//     glBegin(GL_LINE_STRIP);
//     glVertex2f(-0.10, 0.65);
//     glVertex2f(-0.08, 0.68);
//     glVertex2f(-0.06, 0.71);
//     glVertex2f(-0.04, 0.75);
//     glVertex2f(-0.02, 0.80);
//     glVertex2f(0.00, 0.85);
//     glVertex2f(0.02, 0.80);
//     glVertex2f(0.04, 0.75);
//     glVertex2f(0.06, 0.71);
//     glVertex2f(0.08, 0.68);
//     glVertex2f(0.10, 0.65);
//     glVertex2f(0.10, 0.65);
//     glVertex2f(-0.10, 0.65);

//     glEnd();

    
//     glFlush();
// }


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Lab Task 4 - 1");
    glutInitWindowSize(5000, 5000);
    glutDisplayFunc(display);
    glutMainLoop();


    return 0;
}