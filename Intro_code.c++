#include <GL/freeglut.h>
#include <GL/gl.h>

void mydisplay()
{

}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Basic code");
    gluOrtho2D(0,200,0,200);
    glutDisplayFunc(mydisplay);
    glutMainLoop();
    return 0;
}
