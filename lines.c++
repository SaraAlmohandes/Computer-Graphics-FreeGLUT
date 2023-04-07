#include<GL/freeglut.h>
#include<GL/gl.h>

void lines ()
{
    glClearColor(0, 0, 0, 0); //For black background
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
        //First line
        glColor3f(1, 0, 0); //For red line
        glVertex2f(100, 250); //Start point
        glVertex2f(400, 250); //End point

        //Second line
        glColor3f(0, 0, 1); //For blue line
        glVertex2d(100, 150); //Start point
        glVertex2d(400, 150); //End point
    glEnd();

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);

    glutInitWindowPosition(500, 500);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Lines");
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(lines);
    glutMainLoop();
}

