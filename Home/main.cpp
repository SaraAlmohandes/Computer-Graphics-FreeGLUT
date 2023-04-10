#include <GL/freeglut.h>
#include <GL/gl.h>

void home()
{
    glClearColor(0, 0, 0, 0); //Black background for night sky
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(4);
    //The roof
    glBegin(GL_TRIANGLES);
        glColor3d(0.4, 0.2, 0); //Brown
        glVertex2d(150, 300); //right vertex
        glVertex2d(250, 400); //top vertex
        glVertex2d(350, 300); //left vertex
    glEnd();

    //Home body
    glBegin(GL_QUADS);
        glColor3d(1, 1, 0); //Yellow
        glVertex2d(152, 298); //top-right vertex
        glVertex2d(152, 150); //bottom-right vertex
        glVertex2d(348, 150); //bottom-left vertex
        glVertex2d(348, 298); //top-left vertex
    glEnd();

    //Door
    glBegin(GL_QUADS);
        glColor3d(0.4, 0.1, 0.5); //Purple
        glVertex2d(230, 250); //top-right vertex
        glVertex2d(230, 154); //bottom-right vertex
        glVertex2d(270, 154); //bottom-left vertex
        glVertex2d(270, 250); //top-left vertex
    glEnd();

    //Hand of the door
    glEnable(GL_POINT_SMOOTH);
    glPointSize(6);
    glBegin(GL_POINTS);
        glColor3d(1, 1, 1); //White
        glVertex2d(260, 200);
    glEnd();

    //Left Window
    glLineWidth(3);
    glBegin(GL_POLYGON);
        glColor3d(0.4, 0.4, 1); //Light-blue
        glVertex2d(170, 280); //top-right vertex
        glVertex2d(170, 250); //bottom-right vertex
        glVertex2d(200, 250); //bottom-left vertex
        glVertex2d(200, 280); //top-left vertex
    glEnd();

    //Right Window
    glBegin(GL_POLYGON);
        glColor3d(0.4, 0.4, 1); //Light-blue
        glVertex2d(330, 280); //top-right vertex
        glVertex2d(330, 250); //bottom-right vertex
        glVertex2d(300, 250); //bottom-left vertex
        glVertex2d(300, 280); //top-left vertex
    glEnd();

    //Moon
    glEnable(GL_POINT_SMOOTH);
    glPointSize(35);
    glBegin(GL_POINTS);
        glColor3d(1, 1, 1); //White
        glVertex2d(100, 440);
    glEnd();

    //Stars
    glEnable(GL_POINT_SMOOTH);
    glPointSize(5);
    glBegin(GL_POINTS);
        glColor3d(1, 1, 1); //White
        glVertex2d(75, 365);
        glVertex2d(150, 350);
        glVertex2d(170, 440);
        glVertex2d(190, 390);
        glVertex2d(260, 450);
        glVertex2d(320, 410);
        glVertex2d(350, 470);
        glVertex2d(410, 360);
        glVertex2d(430, 420);
    glEnd();

    glFlush();
}

int main(int argv, char **argc)
{
    glutInit(&argv, argc);
    glutInitDisplayMode(GLUT_SINGLE);

    glutInitWindowPosition(500, 500);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Home");
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(home);
    glutMainLoop();
}
