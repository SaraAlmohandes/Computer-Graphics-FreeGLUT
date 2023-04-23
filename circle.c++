#include <GL/freeglut.h>
#include <GL/gl.h>
#include <math.h>

void circle()
{
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);
        glColor3f(1,1,0);
        int x = 250, y = 250, radius = 50;
        float pi = 22.0/7.0;
        for (float theta = 0; theta < 2*pi; theta += 0.00001)
        {
            glVertex2f(x+sin(theta)*radius, y+cos(theta)*radius);
        }
    glEnd();
    glFlush();
}

void colored_circle()
{
    glClearColor(1, 1, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
        glColor3f(0.8, 0, 0);
        int x = 250, y = 250, radius = 100;
        double pi = 3.14;
        for (double theta = 0; theta < 2*pi; theta += 0.00001)
        {
            glVertex2d(x+sin(theta)*radius, y+cos(theta)*radius);
        }
    glEnd();
    glFlush();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    glutInitWindowPosition(500, 500);
    glutInitWindowSize(500, 500);
    glutCreateWindow("circle");
    gluOrtho2D(0,500,0,500);
    glutDisplayFunc(colored_circle);
    glutMainLoop();
    return 0;
}

