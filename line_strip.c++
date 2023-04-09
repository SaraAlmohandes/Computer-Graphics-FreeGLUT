//#include <windows.h>
//#include <GL/glut.h>

#include <GL/freeglut.h>
#include <GL/gl.h>

void dot()
{
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);
    glBegin(GL_LINES);
        glVertex2d(100, 300);
        glVertex2d(700, 300);
    glEnd();

    glBegin(GL_LINE_STRIP); //Connects every 2 lines after each other
        glColor3f(1, 1, 0);
        glVertex2d(100, 300);
        glVertex2d(150, 500);
        glVertex2d(200, 300);
        glVertex2d(250, 500);
        glVertex2d(300, 300);
        glVertex2d(350, 500);
        glVertex2d(400, 300);
        glVertex2d(450, 500);
        glVertex2d(500, 300);
        glVertex2d(550, 500);
        glVertex2d(600, 300);
        glVertex2d(650, 500);
        glVertex2d(700, 300);
    glEnd();

    glFlush();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    glutInitWindowPosition(300, 500);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Dot");
    gluOrtho2D(0, 800, 0, 800);
    glutDisplayFunc(dot);
    glutMainLoop();
}
