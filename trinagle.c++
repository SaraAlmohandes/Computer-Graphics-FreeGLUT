#include <GL/freeglut.h>
#include <GL/gl.h>

//Every 2 points creates 1 line
void triangle1 () //Create triangle using LINES
{
    glClearColor(0, 0, 0, 0); //Create black background
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);
    glBegin(GL_LINES);
        glColor3d(1, 0, 1); //Pink Trinagle
        //First line .. Creating the base
        glVertex2d(200, 200);
        glVertex2d(300, 200);
        //Second line .. Creating left side
        glVertex2d(200, 200);
        glVertex2d(250, 300);
        //Third line -- Creating right side
        glVertex2d(300, 200);
        glVertex2d(250, 300);
    glEnd();

    glFlush();
}

//LINE_LOOP will connect all points together .. so if you created 4th point would not create a triangle
void triangle2() //Create triangle using LINE_LOOP
{
    glClearColor(0, 0, 0, 0); //Create black background
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
        glColor3d(0.1, 0, 0.9); //Dark blue Trinagle
        glVertex2d(200, 200); //Creating the right point
        glVertex2d(300, 200); //Creating the left point
        glVertex2d(250, 300); //Creating the top point
    glEnd();

    glFlush();
}

//Every 3 points creates a triangle .. so if you created 4th point it would create the triangle and ignore the last point
void triangle3() //Create triangle using TRIANGLES
{
    glClearColor(0, 0, 0, 0); //Create black background
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);
    glBegin(GL_TRIANGLES); //Creates colored triangle from inside
        glColor3d(1, 1, 0); //Yellow Trinagle
        glVertex2d(200, 200); //Creating the right point
        glVertex2d(300, 200); //Creating the left point
        glVertex2d(250, 300); //Creating the top point
    glEnd();

    glFlush();
}

void triangle4() //Create 2 triangles using TRIANGLE_STRIP
{
    glClearColor(0, 0, 0, 0); //Create black background
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);
    glBegin(GL_TRIANGLE_STRIP); //Creates colored triangle from inside
        glColor3d(1, 1, 0); //Yellow Trinagle
        glVertex2d(200, 200); //Creating the right point
        glVertex2d(300, 200); //Creating the left point
        glVertex2d(250, 300); //Creating the top point

        glColor3d(0, 0, 1); //Blue Triangle
        glVertex2d(350, 200); //Creating the right point
        glVertex2d(400, 200); //Creating the left point
        glVertex2d(375, 300); //Creating the top point
    glEnd();

    glFlush();
}

int main(int pargc, char **argv)
{
    glutInit(&pargc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    glutInitWindowPosition(300, 500);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Triangle");
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(triangle1);
    glutMainLoop();
}

