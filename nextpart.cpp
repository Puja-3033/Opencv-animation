

// Take this in a different file in the same project while executing
#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
# define PI 3.1416


void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void road()
	{
	//road
	glColor3f(0.66,0.66,0.66);
    glRectf(0, 100,500,190);
	}

void day()
{
    //sky
    glColor3f(0.0,0.70,.80);
    glBegin(GL_POLYGON);
        glVertex2d (500, 500);
        glVertex2d (0,500);
    glColor3f(1,1,1);
        glVertex2d (0, 250);
    glColor3f(0.0,0.9,0.9);
        glVertex2d (500, 250);
      glEnd();

      glPushMatrix();
      glColor3f(1,0.86,0);
      glTranslatef(50,250,0);
      circle(25,40);
      glPopMatrix();

      //grass
      glBegin(GL_POLYGON);
        glColor3f(0.45,0.9,0);
        glVertex2d (0,250);
	glColor3f(0.45,0.75,0);

        glVertex2d (0, 0);
        glColor3f(0,0.5,0.1);
        glVertex2d (500, 0);
        glColor3f(0.2,0.75,0.1);
        glVertex2d (500, 250);
      glEnd();
}

void night()
{
    //sky
    glColor3f(0.1,0.10,.44);
    glBegin(GL_POLYGON);
        glVertex2d (500, 500);
        glVertex2d (0,500);
    glColor3f(0,0.3,0.3);
        glVertex2d (0, 250);
    glColor3f(0.0,0.2,0.4);
        glVertex2d (500, 250);
      glEnd();

      //moon
      glPushMatrix();
      glColor3f(0,0,0.7);
      glTranslatef(0,0,3);
      circle(15,30);
      glPopMatrix();

      //grass
      glBegin(GL_POLYGON);
        glColor3f(0.0,0.5,0.1);
        glVertex2d (500,250);
        glVertex2d (0, 250);
        glColor3f(0,0.35,0.25);
        glVertex2d (0, 0);
        glVertex2d (500, 0);
      glEnd();
}

void house_1()
{
    glColor3f(0.60,0.00,0.30);
      //glRectf(350, 210, 430,310);
      glBegin(GL_POLYGON);
       glVertex2d (350, 210);
       glVertex2d (350, 380);
       glVertex2d (430, 380);
       glVertex2d (430, 210);
       glEnd();
        glColor3f(0.30,0.05,0.00);
       glBegin(GL_TRIANGLES);
       glVertex2d (390, 445);
       glVertex2d (450, 380);
       glVertex2d (330, 380);
       glEnd();
       //door
       glColor3f(0.30,0.05,0.00);
        glRectf(375,212,400,280);

        glColor3f(0.0,0.00,0.30);
        glBegin(GL_POLYGON);
       glVertex2d (360, 340);
       glVertex2d (360, 370);
       glVertex2d (380, 370);
       glVertex2d (380, 340);
       glEnd();
        glColor3f(0.0,0.00,0.30);
        glBegin(GL_POLYGON);
       glVertex2d (400, 340);
       glVertex2d (400, 370);
       glVertex2d (420, 370);
       glVertex2d (420, 340);
       glEnd();
        glColor3f(0.0,0.00,0.30);
        glBegin(GL_POLYGON);
       glVertex2d (360, 295);
       glVertex2d (360, 320);
       glVertex2d (380, 320);
       glVertex2d (380, 295);
       glEnd();
        glColor3f(0.0,0.00,0.30);
        glBegin(GL_POLYGON);
       glVertex2d (400, 295);
       glVertex2d (400, 320);
       glVertex2d (420, 320);
       glVertex2d (420, 295);
       glEnd();
}

void house_2()
{
    glColor3f(0.93,0.60,1.00);// house is pinkish color
      //glRectf(350, 210, 430,310);
      glBegin(GL_POLYGON);
       glVertex2d (432, 210);
       glVertex2d (432, 368);
       glVertex2d (480, 368);
       glVertex2d (480, 210);
       glEnd();

    glColor3f(0.30,0.05,0.00);// 2nd houses upper roof
       glBegin(GL_POLYGON);
       glVertex2d (430, 368);
       glVertex2d (430, 372);
       glVertex2d (482, 372);
       glVertex2d (482, 368);
       glEnd();
       glColor3f(1.00,1.00,0.60);// house is cream color remaining half
      //glRectf(350, 210, 430,310);
      glBegin(GL_POLYGON);
       glVertex2d (480, 210);
       glVertex2d (480, 385);
       glVertex2d (500, 385);
       glVertex2d (500, 210);
       glEnd();
        glColor3f(0.30,0.05,0.00);// 2nd houses upper roof
       glBegin(GL_POLYGON);
       glVertex2d (478, 385);
       glVertex2d (478, 389);
       glVertex2d (502, 389);
       glVertex2d (502, 385);
       glEnd();
        //door of 2nd house
       glColor3f(0.60,0.10,0.00);
        glBegin(GL_POLYGON);
       glVertex2d (482, 210);
       glVertex2d (482, 310);
       glVertex2d (495, 310);
       glVertex2d (495, 210);
       glEnd();
       //door
       glColor3f(0.30,0.05,0.00);
        glBegin(GL_POLYGON);
       glVertex2d (438, 210);
       glVertex2d (438, 300);
       glVertex2d (450, 300);
       glVertex2d (450, 210);
       glEnd();
       //2nd glasses
       glColor3f(0.30,0.05,0.00);
        glBegin(GL_POLYGON);
       glVertex2d (458, 210);
       glVertex2d (458, 300);
       glVertex2d (470, 300);
       glVertex2d (470, 210);
       glEnd();
       glColor3f(0.0,0.03,0.0);

       //house floor
      glBegin(GL_POLYGON);
       glVertex2d (340, 200);
       glVertex2d (340, 210);
       glVertex2d (500, 210);
       glVertex2d (500, 200);
       glEnd(); // house complete
}

void tree()
{
    glColor3f(0.00,0.60,0.10);
      glBegin(GL_TRIANGLES);
      glVertex2i(240,250);
      glVertex2i(273,290);
       glVertex2i(305,250);
       glVertex2i(243,282);
      glVertex2i(273,330);
       glVertex2i(302,282);
        /*glVertex2i(243,260);
         glVertex2i(253,290);
          glVertex2i(262,260);*/
      glEnd();
      // for trees leg
       glColor3f(0.40,0.00,0.07);
 glBegin(GL_POLYGON);
       glVertex2i(270,250);
      glVertex2i(277,250);
       glVertex2i(277,200);
       glVertex2i(270,200);
       glEnd();
       glColor3f(0.00,0.60,0.10);// 2nd tree
        glBegin(GL_TRIANGLES);
      glVertex2i(200,265);
      glVertex2i(233,305);
       glVertex2i(260,265);
       glVertex2i(203,300);
      glVertex2i(233,339);
       glVertex2i(257,300);
       glEnd();
       // for 2nd trees leg
       glColor3f(0.40,0.00,0.07);
 glBegin(GL_POLYGON);
       glVertex2i(230,266);
      glVertex2i(236,266);
       glVertex2i(236,210);
       glVertex2i(230,210);
       glEnd();

       //3rd tree
       glColor3f(0.27,0.80,0.00);
glBegin(GL_TRIANGLES);
      glVertex2i(70,320);
      glVertex2i(106,373);
       glVertex2i(129,320);
       glVertex2i(73,357);
      glVertex2i(106,400);
       glVertex2i(127,357);
       glEnd();
       // for 3rd trees leg
       glColor3f(0.40,0.00,0.07);
 glBegin(GL_POLYGON);
       glVertex2i(100,320);
      glVertex2i(100,230);
       glVertex2i(108,230);
       glVertex2i(108,320);
       glEnd();
}

void house_3()
{
    //house of 3rd num
      glColor3f(1.00,0.50,0.00);
      //glRectf(350, 210, 430,310);
      glBegin(GL_POLYGON);
       glVertex2d (140, 210);
       glVertex2d (140, 380);
       glVertex2d (210, 380);
       glVertex2d (210, 210);
       glEnd();
       // 3rd no house door
        glColor3f(0.40,0.20,0.00);
        glBegin(GL_POLYGON);
        glVertex2d(170,210);
         glVertex2d(170,270);
          glVertex2d(190,270);
           glVertex2d(190,210);
           glEnd();
            glColor3f(0.60,0.10,0.00);
        glBegin(GL_POLYGON);// 3rd houses left window
        glVertex2d(150,273);
         glVertex2d(150,300);
          glVertex2d(170,300);
           glVertex2d(170,273);
           glEnd();
            glColor3f(0.60,0.10,0.00);
        glBegin(GL_POLYGON);// 3rd houses upper left window
          glVertex2d(150,311);
           glVertex2d(150,338);
           glVertex2d(170,338);
         glVertex2d(170,311);
           glEnd();

           glColor3f(0.60,0.10,0.00);
        glBegin(GL_POLYGON);// 3rd houses window
        glVertex2d(190,273);
         glVertex2d(190,300);
          glVertex2d(209,300);
           glVertex2d(209,273);
           glEnd();
            glColor3f(0.60,0.10,0.00);
        glBegin(GL_POLYGON);// 3rd houses upper right window
        glVertex2d(190,306);
         glVertex2d(190,336);
          glVertex2d(209,336);
           glVertex2d(209,306);
           glEnd();
           glColor3f(0.60,0.10,0.00);



 glColor3f(1.00,0.65,0.30);// 3rd no side of house

      glBegin(GL_POLYGON);
      glVertex2d (140, 380);
       glVertex2d (125, 360);
       glVertex2d (125, 210);
       glVertex2d (140, 210);
       glEnd();
       glColor3f(1.00,0.50,0.40);// 3rd no side of house
// side door
      glBegin(GL_POLYGON);// side door of 3rd no house

        glVertex2d (137, 350);
        glVertex2d (130,345);
       glVertex2d (130, 225);
        glVertex2d (137, 225);
       glEnd();
        glColor3f(0.70,0.23,0.00); // down srairs
      //glRectf(350, 210, 430,310);
      glBegin(GL_POLYGON);
       glVertex2d (139, 210);
       glVertex2d (139, 200);
       glVertex2d (211, 200);
       glVertex2d (211, 210);
       glEnd();

       glColor3f(0.70,0.23,0.00);// 3rd no side of house's down starirs

      glBegin(GL_POLYGON);
       glVertex2d (123, 200);
       glVertex2d (123, 210);
       glVertex2d (139, 210);
       glVertex2d (139, 200);
       glEnd();// complete 3rd no house
}

void lamppost()
{
    // lamp post
glColor3f(0.90,0.60,0.00);//lamp post leg
 glBegin(GL_POLYGON);
       glVertex2i(10,190);
      glVertex2i(10,290);
       glVertex2i(20,290);
       glVertex2i(20,190);
glEnd();

       glColor3f(0.70,0.35,0.00);//lamp post leg's down
 glBegin(GL_POLYGON);
       glVertex2i(10,190);
       glVertex2i(8,185);
       glVertex2i(22,185);
       glVertex2i(20,190);
       glEnd();

       glColor3f(1.00,1.00,0.40);// lamp post light
       glBegin(GL_POLYGON);
       glVertex2i(10,290);
        glVertex2i(5,308);
       glVertex2i(25,308);
       glVertex2i(20,290);
       glEnd();
       glColor3f(0.0,0.50,0.00);// design for lamp post
     glBegin(GL_LINE_STRIP);
     glLineWidth(1.2);
      glVertex2i(10,290);
        glVertex2i(5,308);
       glVertex2i(25,308);
       glVertex2i(20,290);
       glVertex2i(10,290);
       glEnd();
}


// train track start
void track_part()
{
    glColor3f(0.3,0.1,0);
    glRectf(-2, 160,30,170); // horizontal line up
    glRectf(0, 110,4,180); //vertical line
    glRectf(8, 110,12,180); //vertical
    glRectf(16, 110,20,180); // vertical
    glRectf(24, 110,28,180); //vertical
    glRectf(-2, 120,30,130); //horizontal down

}
void train_track()
{
    	track_part();

    glPushMatrix();
       glTranslatef(32,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(64,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(96,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(128,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(160,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(192,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(224,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(256,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(288,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(320,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(352,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(384,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(416,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(448,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
       glTranslatef(480,0,0);
       track_part();
       glPopMatrix();
       glPushMatrix();
}
//train track end

void cloud(int rsize)
{
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(70,420,-5);
   circle(rsize+8,rsize+16);
    glTranslatef(10,0,0);
    circle(rsize+8,rsize+20);
    glTranslatef(15,0,0);
    circle(rsize+16,rsize+20);
    glTranslatef(10,10,0);
    circle(rsize+8,rsize+16);
    glTranslatef(-15,0,0);
    circle(rsize+12,rsize+20);
    glTranslatef(-8,0,0);
    circle(rsize+8,rsize+20);
    glPopMatrix();
}

void cloud_2(int rsize)
{

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(150,450,0);
    circle(rsize+12,rsize+25);
    glTranslatef(10,0,0);
    circle(rsize+12,rsize+25);
    glTranslatef(15,0,0);
    circle(rsize+12,rsize+25);
    glTranslatef(-10,10,0);
    circle(rsize+12,rsize+25);
    glTranslatef(-10,0,0);
    circle(rsize+12,rsize+25);
    glPopMatrix();
}
void train()
{
    glPushMatrix();
    // train
glColor3f(1.0,0,1);

glBegin(GL_QUADS);
//back
glVertex2i(10, 139);
glVertex2i(10,255);
glVertex2i(145,255);
glVertex2i(145,139);
//front

glVertex2i(155,139);
glVertex2i(155,255);
glColor3f(0.35,0.00,0.70);
glVertex2i(265,255);
glVertex2i(265,139);
glEnd();

glColor3f(0.40,0.07,0.00);
glBegin(GL_POLYGON);
glVertex2i(267,139);
glVertex2i(267,260);
glColor3f(0.20,0.13,0.00); // main front
glVertex2i(305,260);
glVertex2i(370,200);
glVertex2i(370,140);
glEnd();
//door
glColor3f(1.00,1.00,0.80);// front window
glBegin(GL_POLYGON);
   glVertex2f(275,189);
    glVertex2f(275,248);
    glVertex2f(310,248);
    glVertex2f(350,210);
    glVertex2f(350,189);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glVertex2i(6,145);//tain tail
   glVertex2i(6,220);
   glVertex2i(10,220);
   glVertex2i(10,145);
glEnd();
glPopMatrix();

glPushMatrix();   // Wheels
    glTranslatef(35,135,0);
    glColor3f(0,0,0);
    circle(10,15);
    glColor3f(1,1,1);
    circle(5,7);
    glTranslatef(40,0,0);
    glColor3f(0,0,0);
    circle(10,15);
    glColor3f(1,1,1);
    circle(5,7);
    glTranslatef(40,0,0);
    glColor3f(0,0,0);
    circle(10,15);
    glColor3f(1,1,1);
    circle(5,7);
     glTranslatef(75,0,0);
    glColor3f(0,0,0);
    circle(10,15);
    glColor3f(1,1,1);
    circle(5,7);
    glTranslatef(40,0,0);
    glColor3f(0,0,0);
    circle(10,15);// 2nd tain box's wheel
    glColor3f(1,1,1);
    circle(5,7);
    glTranslatef(70,0,0);
    glColor3f(0,0,0);
    circle(10,15);
    glColor3f(1,1,1);
    circle(5,7);
    glTranslatef(40,0,0);
    glColor3f(0,0,0);
    circle(10,15);
    glColor3f(1,1,1);
    circle(5,7);
glPopMatrix();    // wheels end

 glColor3f(1,1,1);
   glPushMatrix();//window
   glRectf(12,202,32,230);
   glRectf(36,202,56,230);
   glRectf(60,202,80,230);
   glRectf(84,202,104,230);
   glRectf(108,202,128,230);
   glRectf(12,198,128,200);
    glRectf(158,202,188,245);
   glRectf(190,202,218,245);
    glRectf(220,202,250,245);
   glColor3f(0,0,0);
   glRectf(265,160,267,220);
    glRectf(145,170,155,210);
    glRectf(145,220,155,235);
    glPopMatrix();

    glPopMatrix();

}
