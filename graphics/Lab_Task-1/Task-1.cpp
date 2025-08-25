#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;



float _move1 = 0.0f;
float _move2 = 0.0f;

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 0);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);



    glPushMatrix();
    glTranslatef(_move1, 0.0f, 0.0f);
    
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.0f, 0.2);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);    
    
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.3f);
        glVertex2f(-0.5f, 0.3f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.0f, 0.5f);
    glEnd();
    glPopMatrix();


    glutSwapBuffers();
}



void update(int value) {
    _move1 += .02;
    if(_move1 > 1.3)
    {
        _move1 = -1.0f;
    }

    _move2 -= 0.02;
    if(_move2 < -1.3)
    {
        _move2 = 1.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Transformation");
    glutDisplayFunc(drawScene);
    gluOrtho2D(-2,2,-2,2);
    glutTimerFunc(60, update, 0);
    glutMainLoop();

    return 0;
}
