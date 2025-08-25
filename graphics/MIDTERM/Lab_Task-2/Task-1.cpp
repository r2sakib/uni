
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

using namespace std;

void display() {
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    // COORDINATE
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glColor3f(1, 1, 1);

    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1, 1, 1);

    glVertex2f(0, -1);
    glVertex2f(0, 1);
    glEnd();

    float B = 0.082;
    float H = 0.071;

    float x = 0.0;
    float y = 0.0;
    float z = -0.041;

    for (int i = 1; i <= 12; i++) {
        int r, g, b;
        
        if (i % 3 == 1) {
            r = 1;
        } else {r = 0;}

        if (i % 3 == 2) {
            g = 1;
        } else {g = 0;}

        if (i % 3 == 0) {
            b = 1;
        } else {b = 0;}

        glBegin(GL_TRIANGLES);
        glColor3f(r, g, b);
        glVertex2f(x, y);
        x += B;
        glVertex2f(x, y);
        z += B;
        glVertex2f(z, H);
        glEnd();
    }

    B = 0.082;
    H = 0.142; // H*2

    x = 0.041;
    y = 0.082;
    z = 0;

    for (int i = 1; i <= 11; i++) {
        int r, g, b;
        
        if (i % 3 == 1) {
            r = 1;
        } else {r = 0;}

        if (i % 3 == 2) {
            g = 1;
        } else {g = 0;}

        if (i % 3 == 0) {
            b = 1;
        } else {b = 0;}

        glBegin(GL_TRIANGLES);
        glColor3f(r, g, b);
        glVertex2f(x, y);
        x += B;
        glVertex2f(x, y);
        z += B;
        glVertex2f(z, H);
        glEnd();
    }


    
    

    
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Lab Task-2 - 1");
    glutInitWindowSize(500, 500);
    glutDisplayFunc(display);

    glutMainLoop();


    return 0;
}