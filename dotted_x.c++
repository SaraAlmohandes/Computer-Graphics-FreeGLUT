#include<GL/freeglut.h>
#include<GL/gl.h>

void dotted_X ()
{
    glClearColor(1, 1, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnable(GL_POINT_SMOOTH);
    glPointSize(8);
    glBegin(GL_POINTS);
        glColor3d(0.8, 0, 0);

        for (int i = 250, j = 250; i <= 400, j >= 100; i += 10, j -= 10)
        {
            glVertex2d(i, i);
            glVertex2d(j, j);
            glVertex2d(i, j);
            glVertex2d(j, i);
        }
    glEnd();

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    glutInitWindowPosition(500, 500);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Lines");
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(dotted_X);
    glutMainLoop();
}

