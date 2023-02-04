#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#define PI 3.1416

void init2D(float r, float g, float b)
{
    glClearColor(r,g,b,0.0);
    glMatrixMode (GL_PROJECTION); /* set the projection type*/
    glOrtho(0, 500.0, 0, 500.0, 0, 10); /* to set window boundary: x minimum,x maximum, y minimum, y maximum) */
}


//void timer(int);
void circle();
float cloud_move1= 0;
float cloud_move2= 2;
float cloud_move3= 0;
float cloud_move4= 0;
float trainx = 0;
bool daytime = true;

void day();
void night();
void road();
int cloud(int rsize);
int cloud_2(int rsize);
void track_part();
void train_track();
void train();
void house_1();
void house_2();
void tree();
void house_3();
void lamppost();
void display()
{
    if(daytime == true)
        day();
    else
        night();

    road();

    glPushMatrix();
    glTranslatef(cloud_move1,0,0);
    cloud(0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud_move2,0,0);
    cloud_2(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,-50,0);
    glTranslatef(cloud_move3,1,0);
    cloud(7);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,20,0);
    glTranslatef(cloud_move4,0,0);
    cloud_2(-2);
    glPopMatrix();

    house_1();
    house_2();

    lamppost(); //lamp post 1

    glPushMatrix(); // lamp post 3
    glTranslatef(400,0,0);
    lamppost();
    glPopMatrix();

    tree();
    house_3();
    train_track();

    glPushMatrix();
    glTranslatef(trainx,0,0);
    train();
    glPopMatrix();

    glPushMatrix(); //lamp post 2
    glTranslatef(210,-100,0);
    lamppost();
    glPopMatrix();


    glutSwapBuffers();
}

void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'd':
			daytime = true;
			break;

		case 'n':
			daytime = false;
			break;

	  default:
			break;
	}
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

 cloud_move1 += 1;
    if(cloud_move1 >= 450)
      cloud_move1 = -200;



    cloud_move2 += 0.5;
    if(cloud_move2 >= 400)
        cloud_move2 = -500;

    cloud_move3 += .03;
    if(cloud_move3 >= 250)
        cloud_move3 = -500;

    cloud_move4 += 0.65;
    if(cloud_move4 >= 200)
        cloud_move4 = -400;

    trainx += 2;
    if (trainx >= 500)
    trainx = -500;
}

int main(int argc,char *argv[])
{
    std::cout << "\t\n\n\n~~~~~~~~~~Press 'D' for Day Time  and Press 'N' For Night Time~~~~~~~~~~\n\n\n";
    glutInit(&argc,argv);/* glutInit is used to initialize the GLUT library*/
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);/* specify that a single refresh buffer is used*/
    glutInitWindowSize (1000,500);
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("Train Journey");  /* title*/
    init2D(1,1,1);
    glutDisplayFunc(display);/* to specify what the window contain */
    glutKeyboardFunc(my_keyboard);
    glutTimerFunc(0,timer,0);
    glutMainLoop(); /* to show output */
    return 0;
}
