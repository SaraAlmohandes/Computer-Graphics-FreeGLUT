#include <GL/freeglut.h>
#include <GL/gl.h>
#include <math.h>

void oval()
{
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //vetical oval
    glBegin(GL_LINE_LOOP);
        glColor3f(1,1,0);
        int x = 250, y = 250,r = 150;
        float pi = 22.0/7.0;
        for (float i = 0; i < 2*pi; i += 0.00001)
        {
            glVertex2f(x+sin(i)*r*0.5, y+cos(i)*r);
        }
    glEnd();

    //horizontal oval
    glBegin(GL_LINE_LOOP);
        glColor3f(1,1,0);
        x = 250, y = 250,r = 150;
        pi = 22.0/7.0;
        for (float i = 0; i < 2*pi; i += 0.00001)
        {
            glVertex2f(x+sin(i)*r, y+cos(i)*r*0.5);
        }
    glEnd();
    glFlush();
}

void colored_oval()
{
    glClearColor(1, 1, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    //vetical oval
    glBegin(GL_POLYGON);
        glColor3f(1,1,0);
        int x = 400, y = 250, radius = 150;
        float pi = 22.0/7.0;
        for (float theta = 0; theta < 2*pi; theta += 0.00001)
        {
            glVertex2f(x+sin(theta)*radius*0.5, y+cos(theta)*radius);
        }
    glEnd();

    //horizontal oval
    glBegin(GL_POLYGON);
        glColor3f(1,1,0);
        x = 165, y = 250, radius = 150;
        pi = 22.0/7.0;
        for (float theta = 0; theta < 2*pi; theta += 0.00001)
        {
            glVertex2f(x+sin(theta)*radius, y+cos(theta)*radius*0.5);
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
    glutDisplayFunc(colored_oval);
    glutMainLoop();
    return 0;
}

