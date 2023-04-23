#include <GL/freeglut.h>
#include <GL/gl.h>
#include <math.h>

void panda()
{
    glClearColor(1, 1, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT);

/*****************  Ears  *******************/
    //right ear
    glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);
        int x = 370, y = 385, r = 50;
        double const pi = 3.14;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r*.85);
        }
    glEnd();

    //left ear
    glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);
        x = 130, y = 385, r = 50;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r*.85);
        }
    glEnd();
/********************************************/

/*****************  Face  *******************/
    //outer black line
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        x = 250, y = 250, r = 170;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r*.85);
        }
    glEnd();

    //inner white circle
    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);
        x = 250, y = 250, r = 169;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r*.85);
        }
    glEnd();
/********************************************/

/*****************  Mouth  *******************/

    glLineWidth(3);

    //left black part of the moth
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        x = 220, y = 230, r = 60;
        for (double theta = 0; theta <= 2*pi; theta += 0.0000001)
        {
            glVertex2d(x+sin(theta)*r*0.6, y+cos(theta)*r);
        }
    glEnd();

    //right black part of the moth
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        x = 283, y = 230, r = 60;
        for (double theta = 0; theta <= 2*pi; theta += 0.0000001)
        {
            glVertex2d(x+sin(theta)*r*0.6, y+cos(theta)*r);
        }
    glEnd();

    //above white circle to hide extra black lines
    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);
        x = 250, y = 255, r = 50;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r);
        }
    glEnd();

    //left white circle to hide extra black line
    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);
        x = 200, y = 200, r = 20;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r*1.5, y+cos(theta)*r);
        }
    glEnd();

    //right white circle to hide extra black line
    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);
        x = 300, y = 200, r = 20;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r*1.5, y+cos(theta)*r);
        }
    glEnd();
/*******************************************/

/*****************  Eyes  *******************/
    //left black black spot around the eye
    glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);
        x = 180, y = 255, r = 60;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r*0.85, y+cos(theta)*r);
        }
    glEnd();

    //right black black spot around the eye
    glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);
        x = 320, y = 255, r = 60;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r*0.85, y+cos(theta)*r);
        }
    glEnd();

    //left white part of the eye
    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);
        x = 200, y = 260, r = 22;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r);
        }
    glEnd();

    //right white part of the eye
    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);
        x = 300, y = 260, r = 22;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r);
        }
    glEnd();

    //left black part of the eye
    glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);
        x = 200, y = 260, r = 19;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r);
        }
    glEnd();

    //right black part of the eye
    glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);
        x = 300, y = 260, r = 19;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r);
        }
    glEnd();

    //left eye luminescence
    glBegin(GL_POLYGON);
        glColor3f(1,1, 1);
        x = 190, y = 270, r = 5;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r);
        }
    glEnd();

    //right eye luminescence
    glBegin(GL_POLYGON);
        glColor3f(1,1, 1);
        x = 290, y = 270, r = 5;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r);
        }
    glEnd();
/********************************************/

/*****************  Nose  *******************/
    glBegin(GL_POLYGON);
        glColor3f(0.8, 0, 0.4);
        x = 250, y = 215, r = 18;
        for (double theta = 0; theta <= 2*pi; theta += 0.000001)
        {
            glVertex2d(x+sin(theta)*r, y+cos(theta)*r*0.7);
        }
    glEnd();
/******************************************/

    glFlush();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    glutInitWindowPosition(500, 500);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Panda");
    gluOrtho2D(0,500,0,500);
    glutDisplayFunc(panda);
    glutMainLoop();
    return 0;
}
