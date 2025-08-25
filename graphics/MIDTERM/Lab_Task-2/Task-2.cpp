#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

using namespace std;

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(-1, -1);
    glVertex2f(-0.50, -1);
    glVertex2f(-0.50, -0.50);
    glVertex2f(-1, -0.50);
    glVertex2f(-1, -1);
    
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(-0.50, -1);
    glVertex2f(-0.0, -1);
    glVertex2f(-0.0, -0.50);
    glVertex2f(-0.50, -0.50);
    glVertex2f(-0.50, -1);
    
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(0.0, -1);
    glVertex2f(0.50, -1);
    glVertex2f(0.50, -0.50);
    glVertex2f(-0.0, -0.50);
    glVertex2f(-0.0, -1);
    
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(0.50, -1);
    glVertex2f(1, -1);
    glVertex2f(1, -0.50);
    glVertex2f(0.50, -0.50);
    glVertex2f(0.50, -1);
    
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(-1, -0.50);
    glVertex2f(-0.50, -0.50);
    glVertex2f(-0.50, -0.0);
    glVertex2f(-1, -0.0);
    glVertex2f(-1, -0.50);
    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(-1, -0.0);
    glVertex2f(-0.50, -0.0);
    glVertex2f(-0.50, 0.50);
    glVertex2f(-1, 0.50);
    glVertex2f(-1, -0.0);
    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(-1, 0.50);
    glVertex2f(-0.50, 0.50);
    glVertex2f(-0.50, 1);
    glVertex2f(-1, 1);
    glVertex2f(-1, 0.50);
    
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(-0.50, -0.50);
    glVertex2f(-0.0, -0.50);
    glVertex2f(-0.0, -0.0);
    glVertex2f(-0.50, -0.0);
    glVertex2f(-0.50, -0.50);
    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(-0.50, -0.0);
    glVertex2f(-0.0, -0.0);
    glVertex2f(-0.0, 0.50);
    glVertex2f(-0.50, 0.50);
    glVertex2f(-0.50, -0.0);
    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(-0.50, 0.50);
    glVertex2f(-0.0, 0.50);
    glVertex2f(-0.0, 1);
    glVertex2f(-0.50, 1);
    glVertex2f(-0.50, 0.50);
    
    glEnd();
    

    
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(0, -0.50);
    glVertex2f(0.5, -0.50);
    glVertex2f(0.5, -0.0);
    glVertex2f(-0.0, -0.0);
    glVertex2f(-0.0, -0.50);
    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(-0, -0.0);
    glVertex2f(0.5, -0.0);
    glVertex2f(0.5, 0.50);
    glVertex2f(-0.0, 0.50);
    glVertex2f(-0.0, -0.0);
    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(0, 0.50);
    glVertex2f(0.5, 0.50);
    glVertex2f(0.5, 1);
    glVertex2f(-0.0, 1);
    glVertex2f(-0.0, 0.50);
    
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(0.5, -0.50);
    glVertex2f(1, -0.50);
    glVertex2f(1, -0.0);
    glVertex2f(0.5, -0.0);
    glVertex2f(0.5, -0.50);
    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    glVertex2f(0.5, -0.0);
    glVertex2f(1, -0.0);
    glVertex2f(1, 0.50);
    glVertex2f(0.5, 0.50);
    glVertex2f(0.5, -0.0);
    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);

    glVertex2f(0.5, 0.50);
    glVertex2f(1, 0.50);
    glVertex2f(1, 1);
    glVertex2f(0.5, 1);
    glVertex2f(0.5, 0.50);
    
    glEnd();

    

    

    
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Lab Task-2 - 2");
    glutInitWindowSize(500, 500);
    glutDisplayFunc(display);

    glutMainLoop();


    return 0;
}

