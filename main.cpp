#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();

        glPushMatrix(); // Furthest Triangle, Draw first
            //glRotatef(45, 0, 0, 1);
            glTranslatef(-20, 0, 0);
            glScaled(2, 1, 0);
            glColor3f(0.0, 0.0, 1.0);
            glBegin(GL_POLYGON);
                glVertex2f(10, 10);
                glVertex2f(10, 0);
                glVertex2f(-10, 0);
            glEnd();
        glPopMatrix();

        glPushMatrix(); // Middle Triangle, Draw 2nd
            glColor3f(0.0, 1.0, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(10, 10);
                glVertex2f(10, 0);
                glVertex2f(-10, 0);
            glEnd();
        glPopMatrix();

        glPushMatrix(); // Nearest Triangle, Draw last
            glTranslatef(10, 0, 0);
            glColor3f(1.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(10, 10);
                glVertex2f(10, 0);
                glVertex2f(-10, 0);
            glEnd();
        glPopMatrix();



    glPopMatrix();

    /*
    ///3 triangles
	glPushMatrix();
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
        glVertex2f(10, 10);
        glVertex2f(10, 0);
        glVertex2f(-10, 0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(20, 0, 0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
        glVertex2f(10, 10);
        glVertex2f(10, 0);
        glVertex2f(-10, 0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	//glRotatef(45, 0, 0, 1);
	glTranslatef(-20, 0, 0);
		glScaled(2, 1, 0);

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
        glVertex2f(10, 10);
        glVertex2f(10, 0);
        glVertex2f(-10, 0);
	glEnd();
	glPopMatrix();*/
	glFlush();
}

void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (800, 800);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Push Pop Matrix");
	init();
	glutDisplayFunc(display);
	//glutSpecialFunc(spe_key);//up,down,left,right
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

