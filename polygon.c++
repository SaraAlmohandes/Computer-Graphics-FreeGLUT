#include <GL/freeglut.h>
#include <GL/gl.h>

//Every 4 points creates square/rectagle .. colorful inside
void square()
{
    glClearColor(1, 1, 1, 0); //Create white background
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);
    glBegin(GL_QUADS);
        glColor3d(0, 0, 0.4); //Dark-blue square
        glVertex2d(150, 150); //right-bottom point
        glVertex2d(350, 150); //left-bottom point
        glVertex2d(350, 350); //right-top point
        glVertex2d(150, 350);//left-top point
    glEnd();

    glFlush();
}

//LINE_LOOP will connect all points together .. so if you created 5th point it would create a strange shape
void rectangle() //Create triangle using LINE_LOOP
{
    glClearColor(0, 0, 0, 0); //Create black background
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
        glColor3d(0.1, 0, 0.9); //Dark-blue rectangle
        glVertex2d(125, 150); //right-bottom point
        glVertex2d(375, 150); //left-bottom point
        glVertex2d(375, 350); //right-top point
        glVertex2d(125, 350);//left-top point
    glEnd();

    glFlush();
}

//The points form a closed polygon .. colorful inside
void polygon()
{
    glClearColor(1, 1, 1, 0); //Create white background
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);
    glBegin(GL_POLYGON); //Creates colored polygon from inside
        glColor3d(1, 0.5, 1); //light-purple polygon
        glVertex2d(190, 350);
        glVertex2d(310, 350);
        glVertex2d(350, 250);
        glVertex2d(310, 150);
        glVertex2d(190, 150);
        glVertex2d(150, 250);
    glEnd();

    glFlush();
}


int main(int pargc, char **argv)
{
    glutInit(&pargc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    glutInitWindowPosition(300, 500);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Polygon");
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(polygon);
    glutMainLoop();
}

