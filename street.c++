/* Creating a street using freeglut */

#include<GL/freeglut.h>
#include<GL/gl.h>

void street ()
{
    glClearColor(0.4, 0.4, 0.4, 0); //Making the background gray
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(7);
    glBegin(GL_LINES);
        //To create white and black blocks for the first line
        //The idea is to increase i by 15 to make i even then odd and so on in otder to switch between white and black blocks
        for (int i = 100; i <= 400; i += 15)
        {
            if (i%2) //Ending the white line and starting the black one
            {
                glVertex2d(i, 300); //End point of the white block

                glColor3f(0, 0, 0);
                glVertex2d(i, 300); //Start point of the black block
            }
            else //Ending the black line and starting the white one
            {
                if (i == 100) //If it's the start point then there is no Black block to end it
                {
                    glColor3f(1, 1, 1);
                    glVertex2d(i, 300);
                }
                else
                {
                    glVertex2d(i, 300); //End point of the black block

                    glColor3f(1, 1, 1);
                    glVertex2d(i, 300); //Start point of the white block
                }
            }
        }
    glEnd();

    glBegin(GL_LINES);
        //Same as the above loop but to create the other line
        for (int i = 100; i <= 400; i += 15)
        {
            if (i%2)
            {
                glVertex2d(i, 200);

                glColor3f(0, 0, 0);
                glVertex2d(i, 200);
            }
            else
            {
                if (i == 100)
                {
                    glColor3f(1, 1, 1);
                    glVertex2d(i, 200);
                }
                else
                {
                    glVertex2d(i, 200);

                    glColor3f(1, 1, 1);
                    glVertex2d(i, 200);
                }
            }
        }
    glEnd();

    //To create white lines that is in half of the street
    glBegin(GL_LINES);
        for (int i = 120; i <= 400; i += 25)
        {
            glColor3f(1, 1, 1);
            if (!(i%2))
            {
                glVertex2d(i, 250); //Start point then end point and so on
            }

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
    glutCreateWindow("Street");
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(street);
    glutMainLoop();
}

