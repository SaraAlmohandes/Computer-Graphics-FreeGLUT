//#include <windows.h>
//#include <GL/glut.h>

#include <GL/freeglut.h>
#include <GL/gl.h>

void dot()
{
    //To set the background color
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    //To make the point takes circle shape not square
    //Try the code without glEnable function
    glEnable(GL_POINT_SMOOTH);
    //Set your point color using RGB
    glColor3f(0, 0, 1);
    //Set yout point size
    glPointSize(10);

    //To draw the point
    glBegin(GL_POINTS);
        //Set the place of your point
        glVertex2f(250, 250);
        //place of another point
        glVertex2f(100, 100);
    glEnd();

    //To show the point on your screen
    glFlush();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    glutInitWindowPosition(500, 500);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Dot");
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(dot);
    glutMainLoop();
}

