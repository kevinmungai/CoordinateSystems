#include <GL/glut.h>

/*
 * Look at:
 *
 *  1. Scaling
 *  2. Translation
 *
 *  Aspect Ratio WorldWindow(width, height) equal to ViewPort(width, height)
 *
 *
 *  sx = (ScalingFactor(A) * x) + Translations Factor(C)
 *
 *  sy = (Scaling Factor(B) * y) + Translation Factor(D)
 *
 * */


//initialize Open
void initGL(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    /*
     *  World-Window
     *
     *  gluOrtho2D(left, right, bottom, top);
     *
     **/
    gluOrtho2D(0.0, 2.0, 0.0, 2.0);

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glColor3f(0.0, 0.0, 0.0);

    /*
     * View Port
     *
     * glViewPort(left, bottom, width, height);
     *
     * */
    glViewport(0, 0, 400, 400);
}

void Display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glVertex2i(1, 1);
    glVertex2i(1, 2);
    glVertex2i(2, 2);
    glVertex2i(2, 1);
    glEnd();

    glFlush();
}

int main(int argv, char** argc) {
    glutInit(&argv, argc);
    glutCreateWindow("Coordinate Systems");
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(Display);
    initGL();
    glutMainLoop();



    return 0;
}