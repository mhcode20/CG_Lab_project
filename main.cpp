#include <windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<GL/gl.h>
#include<math.h>
#include<string.h>

float carx=-38.0;       //car
float carux=-38.0;
float cary=-47.0;
float clx=0.0;          //cloud
float clxr=0.0;
float cly=0.0;
float pcx=0.0;          //poluted cloud
float pcy=0.0;
float bx=0.0;           //boat
float by=0.0;
float kx=0.0;           //kite
float ky=0.0;


void init(void){

    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50.0,50.0,-50.0,50.0);

}





void circle(GLfloat rx, GLfloat ry,GLfloat cx, GLfloat cy ){

glBegin(GL_TRIANGLE_FAN);
glVertex2f(cx,cy);

    for (int i=0;i<=100;i++){
        float angle = 2 * 3.1416f* i/-100;

        float x =rx * cosf(angle);
        float y =ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

}

void halfCircle(GLfloat rx, GLfloat ry,GLfloat cx, GLfloat cy ){

glBegin(GL_TRIANGLE_FAN);
glVertex2f(cx,cy);

    for (int i=0;i<=100;i++){
        float angle = 2 * 3.1416f* i/200;

        float x =rx * cosf(angle);
        float y =ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

}
void redCircle(GLfloat rx, GLfloat ry,GLfloat cx, GLfloat cy ){

glBegin(GL_TRIANGLE_FAN);
glVertex2f(cx,cy);

    for (int i=-90;i<=90;i++){
        float angle = 2 * 3.1416f* i/360;

        float x =rx * cosf(angle);
        float y =ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

}
void yellowCircle(GLfloat rx, GLfloat ry,GLfloat cx, GLfloat cy ){

glBegin(GL_TRIANGLE_FAN);
glVertex2f(cx,cy);

    for (int i=90;i<=270;i++){
        float angle = 2 * 3.1416f* i/-360;

        float x =rx * cosf(angle);
        float y =ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

}



void Draw(){

    glClear(GL_COLOR_BUFFER_BIT);

    // road start

    //Emon road and car

    glBegin(GL_POLYGON);
    glColor3f(0.00,0.45,0.44);

    glVertex2i(-50,-50);
    glVertex2i(50,-50);
    glVertex2i(50,-30);
    glVertex2i(-50,-30);
    glEnd();

    // road bar starts
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(-48,-41);
    glVertex2i(-44,-41);
    glVertex2i(-44,-39);
    glVertex2i(-48,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(-40,-41);
    glVertex2i(-36,-41);
    glVertex2i(-36,-39);
    glVertex2i(-40,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(-32,-41);
    glVertex2i(-28,-41);
    glVertex2i(-28,-39);
    glVertex2i(-32,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(-24,-41);
    glVertex2i(-20,-41);
    glVertex2i(-20,-39);
    glVertex2i(-24,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(-16,-41);
    glVertex2i(-12,-41);
    glVertex2i(-12,-39);
    glVertex2i(-16,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(-8,-41);
    glVertex2i(-4,-41);
    glVertex2i(-4,-39);
    glVertex2i(-8,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(0,-41);
    glVertex2i(4,-41);
    glVertex2i(4,-39);
    glVertex2i(0,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(8,-41);
    glVertex2i(12,-41);
    glVertex2i(12,-39);
    glVertex2i(8,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(16,-41);
    glVertex2i(20,-41);
    glVertex2i(20,-39);
    glVertex2i(16,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(24,-41);
    glVertex2i(28,-41);
    glVertex2i(28,-39);
    glVertex2i(24,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(32,-41);
    glVertex2i(36,-41);
    glVertex2i(36,-39);
    glVertex2i(32,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(40,-41);
    glVertex2i(44,-41);
    glVertex2i(44,-39);
    glVertex2i(40,-39);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);

    glVertex2i(48,-41);
    glVertex2i(52,-41);
    glVertex2i(52,-39);
    glVertex2i(48,-39);

    glEnd();
    // road bar end
    // road ends



    //car 1 start
glBegin(GL_POLYGON);
    glColor3f(1.0,0.00,0.93);
    glVertex2f(carx,cary);
    glVertex2f(carx+8,cary);
    glVertex2f(carx+8,cary+4);
    glVertex2f(carx,cary+4);
    glEnd();

    //car  upper body
    glBegin(GL_POLYGON);
    glColor3f(0.57,0.83,0.93);
    glVertex2f(carx+1,cary+4);
    glVertex2f(carx+7,cary+4);
    glVertex2f(carx+6,cary+6);
    glVertex2f(carx+2,cary+6);
    glEnd();

    //car wheel
    glColor3f(0.0,0.0,0.0);
    circle(1,1,carx+2,cary);

    glColor3f(0.0,0.0,0.0);
    circle(1,1,carx+6,cary);

    //car 1 ends

    //car 2 start
glBegin(GL_POLYGON);
    glColor3f(1.0,0.83,0.93);
    glVertex2f(carux+10,cary+9);
    glVertex2f(carux+18,cary+9);
    glVertex2f(carux+18,cary+13);
    glVertex2f(carux+10,cary+13);
    glEnd();

    //car  upper body
    glBegin(GL_POLYGON);
    glColor3f(0.57,0.83,0.93);
    glVertex2f(carux+11,cary+13);
    glVertex2f(carux+17,cary+13);
    glVertex2f(carux+16,cary+15);
    glVertex2f(carux+12,cary+15);
    glEnd();

    //car wheel
    glColor3f(0.0,0.0,0.0);
    circle(1,1,carux+12,cary+9);

    glColor3f(0.0,0.0,0.0);
    circle(1,1,carux+16,cary+9);

    //car 2 ends

    if(carx<50)
    carx = carx +.02;

    else
    carx = -50;

    if(carux>-80)
    carux = carux -.02;

    else
    carux = 50;

    glutPostRedisplay();

//background
glBegin(GL_QUADS);
//red color
glColor3f(1.0,1.0,1.0);
glVertex2f(-50.0,-30.0);
glVertex2f(50.0,-30.0);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(50.0, 50.0);
glVertex2f(-50.0, 50.0);
glEnd();

//walkway code
    glBegin(GL_POLYGON);
    glColor3f(0.82,0.73,0.65);

    glVertex2i(-50,-30);
    glVertex2i(50,-30);
    glVertex2i(50,-27);
    glVertex2i(-50,-27);

    glEnd();

    //bright sun

    // alamin cloud and sun


glColor3f(1.0,1.0,0.0);
    redCircle(3,4,0,46);

//light sun
glColor3f(0.96,0.69,0.07);
    yellowCircle(3,4,0,46);

    //cloud 1 code
    glColor3f(1.0,1.0,1.0);
    circle(2,3,-47+clx,35+cly);
     glColor3f(1.0,1.0,1.0);
    circle(2.5,4.5,-44+clx,35+cly);
     glColor3f(1.0,1.0,1.0);
    circle(2,3,-41+clx,35+cly);

    //cloud 2 code
    glColor3f(1.0,1.0,1.0);
    halfCircle(2,3,-27+clx,38+cly);
     glColor3f(1.0,1.0,1.0);
   halfCircle(2.5,4.5,-24+clx,38+cly);
     glColor3f(1.0,1.0,1.0);
   halfCircle(2,3,-21+clx,38+cly);

   //cloud 3 code
    glColor3f(1.0,1.0,1.0);
    circle(2,3,-3+clx,43+cly);
     glColor3f(1.0,1.0,1.0);
    circle(2.5,4.5,clx,43+cly);
     glColor3f(1.0,1.0,1.0);
    circle(2,3,3+clx,43+cly);

    //cloud 4 code
    glColor3f(0.66,0.64,0.61);
    halfCircle(2,3,27+clxr,38+cly);
     glColor3f(0.66,0.64,0.61);
   halfCircle(2,3,21+clxr,38+cly);
    glColor3f(0.66,0.64,0.61);
   halfCircle(2.5,4.5,24+clxr,38+cly);


    //cloud 5 code

     glColor3f(0.66,0.64,0.61);
    circle(2.5,4.5,44+clxr,37+cly);
    glColor3f(0.66,0.64,0.61);
    circle(2,3,41+clxr,37+cly);
    glColor3f(0.66,0.64,0.61);
    circle(2,3,47+clxr,37+cly);


//cloud moving condition
if (clx<=0)
clx+=0.005;
else
clx=-50;

if (clxr>-20)
clxr-=0.005;
else
clxr=50;
glutPostRedisplay();

//city starts

// Alamin Solaiman city

//city buildings from right

//poluted cloud start
glColor3f(0.31,0.29,0.25);
    circle(1,.5,48+pcx,15+pcy);
    circle(1,.5,48+pcx,17+pcy);
    circle(1,.5,48+pcx,19+pcy);

if (pcy<19.5)
pcy+=.005;
else
pcy=0;

glutPostRedisplay();

//poluted cloud end

//b1 start


glBegin(GL_POLYGON);
glColor3f(0,0.2,0.3);
glVertex2i(45,8);
glVertex2i(50,8);
glVertex2i(50,20);
glVertex2i(45,20);
glEnd();
//b1 ends
//b2 start
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2i(40,-8);
glVertex2i(50,-8);
glVertex2i(50,8);
glVertex2i(40,8);
glEnd();

 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3f(0.5,0.5,0.5);

 glVertex2f(40.3,-6);
 glVertex2f(49.7,-6);

 glVertex2f(40.3,-4);
 glVertex2f(49.7,-4);

 glVertex2f(40.3,-2);
 glVertex2f(49.7,-2);

 glVertex2f(40.3,0);
 glVertex2f(49.7,0);

 glVertex2f(40.3,2);
 glVertex2f(49.7,2);

 glVertex2f(40.3,4);
 glVertex2f(49.7,4);

 glVertex2f(40.3,6);
 glVertex2f(49.7,6);

glEnd();
//b2 ends


//b4 start
    glBegin(GL_POLYGON);
    glColor3f(0.91,0.45,0.19);
    glVertex2i(30,-27);
    glVertex2i(46,-27);
    glVertex2i(46,-3);
    glVertex2i(30,-3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.91,0.45,0.19);
    glVertex2i(35,-27);
    glVertex2i(41,-27);
    glVertex2i(41,2);
    glVertex2i(35,2);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.89,0.65,0.52);
    glVertex2i(33,-27);
    glVertex2i(43,-27);
    glVertex2i(43,-1);
    glVertex2i(33,-1);
    glEnd();

     //building glass 1 start
    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(34,-7);
    glVertex2f(35,-7);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(35, -5);
    glVertex2f(34, -5);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(36,-7);
    glVertex2f(37,-7);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(37, -5);
    glVertex2f(36, -5);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(38,-7);
    glVertex2f(39,-7);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(39, -5);
    glVertex2f(38, -5);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(40,-7);
    glVertex2f(41,-7);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(41, -5);
    glVertex2f(40, -5);
    glEnd();


    //building glass 1 ends


     //building glass 2 start
    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(34,-11);
    glVertex2f(35,-11);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(35, -9);
    glVertex2f(34, -9);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(36,-11);
    glVertex2f(37,-11);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(37, -9);
    glVertex2f(36, -9);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(38,-11);
    glVertex2f(39,-11);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(39, -9);
    glVertex2f(38, -9);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(40,-11);
    glVertex2f(41,-11);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(41, -9);
    glVertex2f(40, -9);
    glEnd();


    //building glass 2 ends


     //building glass 3 start
    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(34,-15);
    glVertex2f(35,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(35, -13);
    glVertex2f(34, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(36,-15);
    glVertex2f(37,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(37, -13);
    glVertex2f(36, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(38,-15);
    glVertex2f(39,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(39, -13);
    glVertex2f(38, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(40,-15);
    glVertex2f(41,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(41, -13);
    glVertex2f(40, -13);
    glEnd();


    //building glass 3 ends


        //building glass 4 start
    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(34,-19);
    glVertex2f(35,-19);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(35, -17);
    glVertex2f(34, -17);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(36,-19);
    glVertex2f(37,-19);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(37, -17);
    glVertex2f(36, -17);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(38,-19);
    glVertex2f(39,-19);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(39, -17);
    glVertex2f(38, -17);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(40,-19);
    glVertex2f(41,-19);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(41, -17);
    glVertex2f(40, -17);
    glEnd();


    //building glass 4 ends

      //building glass 5 start
    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(34,-23);
    glVertex2f(35,-23);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(35, -21);
    glVertex2f(34, -21);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(36,-23);
    glVertex2f(37,-23);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(37, -21);
    glVertex2f(36, -21);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(38,-23);
    glVertex2f(39,-23);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(39, -21);
    glVertex2f(38, -21);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(40,-23);
    glVertex2f(41,-23);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(41, -21);
    glVertex2f(40, -21);
    glEnd();


    //building glass 5 ends


//b4 ends

//b3 start
glBegin(GL_POLYGON);
glColor3f(0,.6,.7);
glVertex2i(45,-8);
glVertex2i(49,-8);
glVertex2i(49,-7);
glVertex2i(45,-7);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,.6,.7);
glVertex2i(44,-12);
glVertex2i(50,-12);
glVertex2i(50,-8);
glVertex2i(44,-8);
glEnd();

//building glass start
glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(45.5,-11);
glVertex2f(46.5,-11);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(46.5, -9);
glVertex2f(45.5, -9);
glEnd();

glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(47.5,-11);
glVertex2f(48.5,-11);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(48.5, -9);
glVertex2f(47.5, -9);
glEnd();
//building glass end


glBegin(GL_POLYGON);
glColor3f(0,.6,.7);
glVertex2i(42,-27);
glVertex2i(50,-27);
glVertex2i(50,-12);
glVertex2i(42,-12);
glEnd();

//building glass start
glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(45.5,-19);
glVertex2f(46.5,-19);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(46.5, -17);
glVertex2f(45.5, -17);
glEnd();

glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(47.5,-19);
glVertex2f(48.5,-19);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(48.5, -17);
glVertex2f(47.5, -17);
glEnd();

glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(43.5,-19);
glVertex2f(44.5,-19);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(44.5, -17);
glVertex2f(43.5, -17);
glEnd();

//building glass ends

//building glass start
    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(45.5,-15);
    glVertex2f(46.5,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(46.5, -13);
    glVertex2f(45.5, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(47.5,-15);
    glVertex2f(48.5,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(48.5, -13);
    glVertex2f(47.5, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(43.5,-15);
    glVertex2f(44.5,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(44.5, -13);
    glVertex2f(43.5, -13);
    glEnd();

//building glass ends

//building door start
    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(44,-27);
    glVertex2f(48,-27);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(48, -21);
    glVertex2f(44, -21);
    glEnd();

    glLineWidth(4);
 glBegin(GL_LINES);
 glColor3f(0.7,0.7,0.7);

 glVertex2f(46,-27);
 glColor3f(0.9,0.9,0.9);
 glVertex2f(46,-21);

 glEnd();

//building door end

//b3 ends


//b5 start

glBegin(GL_POLYGON);
glColor3f(0,.9,.5);
glVertex2i(25,-8);
glVertex2i(29,-8);
glVertex2i(29,-7);
glVertex2i(25,-7);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,.9,.5);
glVertex2i(24,-12);
glVertex2i(30,-12);
glVertex2i(30,-8);
glVertex2i(24,-8);
glEnd();

//building glass start
glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(25.5,-11);
glVertex2f(26.5,-11);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(26.5, -9);
glVertex2f(25.5, -9);
glEnd();

glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(27.5,-11);
glVertex2f(28.5,-11);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(28.5, -9);
glVertex2f(27.5, -9);
glEnd();
//building glass end


glBegin(GL_POLYGON);
glColor3f(0,.9,.5);
glVertex2i(22,-27);
glVertex2i(30,-27);
glVertex2i(30,-12);
glVertex2i(22,-12);
glEnd();

//building glass start
glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(25.5,-19);
glVertex2f(26.5,-19);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(26.5, -17);
glVertex2f(25.5, -17);
glEnd();

glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(27.5,-19);
glVertex2f(28.5,-19);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(28.5, -17);
glVertex2f(27.5, -17);
glEnd();

glBegin(GL_QUADS);
//white color
glColor3f(1.0,1.0,1.0);
glVertex2f(23.5,-19);
glVertex2f(24.5,-19);
//blue color
glColor3f(0.46,0.84,0.98);
glVertex2f(24.5, -17);
glVertex2f(23.5, -17);
glEnd();

//building glass ends

//building glass start
    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(25.5,-15);
    glVertex2f(26.5,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(26.5, -13);
    glVertex2f(25.5, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(27.5,-15);
    glVertex2f(28.5,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(28.5, -13);
    glVertex2f(27.5, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(23.5,-15);
    glVertex2f(24.5,-15);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(24.5, -13);
    glVertex2f(23.5, -13);
    glEnd();

//building glass ends

//building door start
    glBegin(GL_QUADS);
    //white color
    glColor3f(1.0,1.0,1.0);
    glVertex2f(24,-27);
    glVertex2f(28,-27);
    //blue color
    glColor3f(0.46,0.84,0.98);
    glVertex2f(28, -21);
    glVertex2f(24, -21);
    glEnd();

    glLineWidth(4);
 glBegin(GL_LINES);
 glColor3f(0.7,0.7,0.7);

 glVertex2f(26,-27);
 glColor3f(0.9,0.9,0.9);
 glVertex2f(26,-21);

 glEnd();

//building door end

//b5 end





//b6 start

 glBegin(GL_POLYGON);
    glColor3f(0.3,0.19,0.23);
    glVertex2i(8,-27);
    glVertex2i(24,-27);
    glVertex2i(24,-3);
    glVertex2i(8,-3);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3f(0.3,0.19,0.23);
    glVertex2i(13,-27);
    glVertex2i(19,-27);
    glVertex2i(19,2);
    glVertex2i(13,2);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.3,0.29,0.23);
    glVertex2i(11,-27);
    glVertex2i(21,-27);
    glVertex2i(21,-1);
    glVertex2i(11,-1);
    glEnd();

     //building glass 1 start
    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(12,-7);
    glVertex2f(13,-7);
    //blue color
    glColor3f(1,1,1);
    glVertex2f(13, -5);
    glVertex2f(12, -5);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(14,-7);
    glVertex2f(15,-7);
    //blue color
     glColor3f(1,1,1);
    glVertex2f(15, -5);
    glVertex2f(14, -5);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(16,-7);
    glVertex2f(17,-7);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(17, -5);
    glVertex2f(16, -5);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(18,-7);
    glVertex2f(19,-7);
    //blue color
     glColor3f(1,1,1);
    glVertex2f(19, -5);
    glVertex2f(18, -5);
    glEnd();


    //building glass 1 ends


     //building glass 2 start
    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(12,-11);
    glVertex2f(13,-11);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(13, -9);
    glVertex2f(12, -9);
    glEnd();

    glBegin(GL_QUADS);
    //white color
   glColor3f(0,0,0);
    glVertex2f(14,-11);
    glVertex2f(15,-11);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(15, -9);
    glVertex2f(14, -9);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(16,-11);
    glVertex2f(17,-11);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(17, -9);
    glVertex2f(16, -9);
    glEnd();

    glBegin(GL_QUADS);
    //white color
   glColor3f(0,0,0);
    glVertex2f(18,-11);
    glVertex2f(19,-11);
    //blue color
     glColor3f(1,1,1);
    glVertex2f(19, -9);
    glVertex2f(18, -9);
    glEnd();


    //building glass 2 ends


     //building glass 3 start
    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(12,-15);
    glVertex2f(13,-15);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(13, -13);
    glVertex2f(12, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(14,-15);
    glVertex2f(15,-15);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(15, -13);
    glVertex2f(14, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
  glColor3f(0,0,0);
    glVertex2f(16,-15);
    glVertex2f(17,-15);
    //blue color
     glColor3f(1,1,1);
    glVertex2f(17, -13);
    glVertex2f(16, -13);
    glEnd();

    glBegin(GL_QUADS);
    //white color
   glColor3f(0,0,0);
    glVertex2f(18,-15);
    glVertex2f(19,-15);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(19, -13);
    glVertex2f(18, -13);
    glEnd();


    //building glass 3 ends


        //building glass 4 start
    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(12,-19);
    glVertex2f(13,-19);
    //blue color
     glColor3f(1,1,1);
    glVertex2f(13, -17);
    glVertex2f(12, -17);
    glEnd();

    glBegin(GL_QUADS);
    //white color
  glColor3f(0,0,0);
    glVertex2f(14,-19);
    glVertex2f(15,-19);
    //blue color
     glColor3f(1,1,1);
    glVertex2f(15, -17);
    glVertex2f(14, -17);
    glEnd();

    glBegin(GL_QUADS);
    //white color
  glColor3f(0,0,0);
    glVertex2f(16,-19);
    glVertex2f(17,-19);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(17, -17);
    glVertex2f(16, -17);
    glEnd();

    glBegin(GL_QUADS);
    //white color
   glColor3f(0,0,0);
    glVertex2f(18,-19);
    glVertex2f(19,-19);
    //blue color
     glColor3f(1,1,1);
    glVertex2f(19, -17);
    glVertex2f(18, -17);
    glEnd();


    //building glass 4 ends

      //building glass 5 start
    glBegin(GL_QUADS);
    //white color
   glColor3f(0,0,0);
    glVertex2f(12,-23);
    glVertex2f(13,-23);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(13, -21);
    glVertex2f(12, -21);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(14,-23);
    glVertex2f(15,-23);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(15, -21);
    glVertex2f(14, -21);
    glEnd();

    glBegin(GL_QUADS);
    //white color
 glColor3f(0,0,0);
    glVertex2f(16,-23);
    glVertex2f(17,-23);
    //blue color
      glColor3f(1,1,1);
    glVertex2f(17, -21);
    glVertex2f(16, -21);
    glEnd();

    glBegin(GL_QUADS);
    //white color
    glColor3f(0,0,0);
    glVertex2f(18,-23);
    glVertex2f(19,-23);
    //blue color
    glColor3f(1,1,1);
    glVertex2f(19, -21);
    glVertex2f(18, -21);
    glEnd();


    //building glass 5 ends


//b6 end


//poluted cloud start
glColor3f(0.31,0.29,0.25);
    circle(.5,.5,4+pcx,15+pcy);
    circle(.5,.5,4+pcx,17+pcy);
    circle(.5,.5,4+pcx,19+pcy);

if (pcy<19.5)
pcy+=.005;
else
pcy=0;

glutPostRedisplay();

//poluted cloud end


//b7 start

    glBegin(GL_POLYGON);
    glColor3f(0.71,0.96,0.01);
    glVertex2i(0,-27);
    glVertex2i(8,-27);
    glColor3f(0.9,0.0,0.0);
    glVertex2i(8,10);
    glVertex2i(0,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.71,0.96,0.01);
    glVertex2i(1,10);
    glVertex2i(7,10);
    glColor3f(0.9,0.0,0.0);
    glVertex2i(7,12);
    glVertex2i(1,12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.71,0.96,0.01);
    glVertex2i(2,12);
    glVertex2i(6,12);
    glColor3f(0.9,0.0,0.0);
    glVertex2i(6,14);
    glVertex2i(2,14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.71,0.96,0.01);
    glVertex2i(3,14);
    glVertex2i(5,14);
    glColor3f(0.9,0.0,0.0);
    glVertex2i(5,16);
    glVertex2i(3,16);
    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    //white color
    glColor3f(0.71,0.96,0.01);
    glVertex2f(4,16);
    glColor3f(0.9,0.0,0.0);
    glVertex2f(4,18);



    glEnd();

//b7 end

//city tree start
glLineWidth(7);
glBegin(GL_LINES);
glColor3f(0.27,0.12,0.04);
glVertex2i(9,-28);
glVertex2i(9,-24);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.61,0.43,0.13);
    glVertex2i(7,-25);
    glVertex2i(11,-25);
    glColor3f(0.76,0.55,0.18);
    glVertex2i(9,-20);
glEnd();

glLineWidth(7);
glBegin(GL_LINES);
glColor3f(0.27,0.12,0.04);
glVertex2i(32,-28);
glVertex2i(32,-24);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.61,0.43,0.13);
    glVertex2i(30,-25);
    glVertex2i(34,-25);
    glColor3f(0.76,0.55,0.18);
    glVertex2i(32,-20);
glEnd();

glLineWidth(7);
glBegin(GL_LINES);
glColor3f(0.27,0.12,0.04);
glVertex2i(48,-28);
glVertex2i(48,-24);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.61,0.43,0.13);
    glVertex2i(46,-25);
    glVertex2i(50,-25);
    glColor3f(0.76,0.55,0.18);
    glVertex2i(48,-20);
glEnd();
//city tree end






//city end






//village start

// Meraj Tushar village and mountain

//ground start
 glBegin(GL_POLYGON);
    glColor3f(0.67,0.27,0.01);
    glVertex2i(-50,-27);
    glVertex2i(0,-27);
    glColor3f(0.89,0.57,0.37);
    glVertex2i(0,5);
    glVertex2i(-50,5);
    glEnd();
//ground ends
//river start
glBegin(GL_POLYGON);
//lower part
    glColor3f(0.36,0.94,0.90);
    glVertex2i(-50,-15);
    glVertex2i(-45,-15);
    glVertex2i(-40,-18);
    glVertex2i(-35,-15);
    glVertex2i(-30,-15);
    glVertex2i(-25,-18);
    glVertex2i(-20,-15);
    glVertex2i(-15,-15);
    glVertex2i(-10,-15);
    glVertex2i(-5,-18);
    glVertex2i(0,-15);

   //upper part

    glVertex2i(0,-5);
    glVertex2i(-5,-5);
    glVertex2i(-10,-3);
    glVertex2i(-15,-5);
    glVertex2i(-20,-3);
    glVertex2i(-25,-5);
    glVertex2i(-30,-3);
    glVertex2i(-35,-5);
    glVertex2i(-40,-3);
    glVertex2i(-45,-5);
    glVertex2i(-50,-5);


    glEnd();

//river ends
//

//boat start
    glBegin(GL_POLYGON);
        glColor3f(0.27,0.12,0.04);
        glVertex2i(-20+bx,-11+by);
        glVertex2i(-15+bx,-13+by);
        glVertex2i(-10+bx,-13+by);
        glVertex2i(-5+bx,-11+by);

    glEnd();

    glColor3f(0.88,0.2,0.84);
    halfCircle(3,4,-12.5+bx,-11+by);

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2i(-7+bx,-11+by);
    glVertex2i(-7+bx,-7+by);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0,0.5,0);
        glVertex2i(-7+bx,-9+by);
        glVertex2i(-5+bx,-9+by);
        glVertex2i(-5+bx,-7+by);
        glVertex2i(-7+bx,-7+by);

    glEnd();

    glColor3f(1,0,0);
    circle(.3,.3,-5.6+bx,-8+by);

//boat end

//boat moving code start
if (bx>-50)
bx-=+0.002;
else
bx=0;
glutPostRedisplay();


//boat moving code end





// home start
//h2
    glBegin(GL_POLYGON);
    glColor3f(0.32,0.27,0.37);
    glVertex2i(-20,-27);
    glVertex2i(-10,-27);
    glVertex2i(-10,-20);
    glVertex2i(-20,-20);
    glEnd();

//roof top
    glBegin(GL_POLYGON);
    glColor3f(0.76,0.69,0.83);
    glVertex2i(-21,-20);
    glVertex2i(-9,-20);
    glVertex2i(-15,-15);

    glEnd();
    //door
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-16,-27);
    glVertex2i(-14,-27);
    glVertex2i(-14,-23);
    glVertex2i(-16,-23);

    glEnd();

    //window left
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-19,-24);
    glVertex2i(-17,-24);
    glVertex2i(-17,-22);
    glVertex2i(-19,-22);

    glEnd();

    //window right
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-13,-24);
    glVertex2i(-11,-24);
    glVertex2i(-11,-22);
    glVertex2i(-13,-22);

    glEnd();

//h3
glBegin(GL_POLYGON);
     glColor3f(0.76,0.69,0.83);
    glVertex2i(-35,-22);
    glVertex2i(-25,-22);
    glVertex2i(-25,-15);
    glVertex2i(-35,-15);
    glEnd();

//roof top
    glBegin(GL_POLYGON);
        glColor3f(0.32,0.27,0.37);
    glVertex2i(-36,-15);
    glVertex2i(-24,-15);
    glVertex2i(-30,-10);

    glEnd();


//h1
    glBegin(GL_POLYGON);
    glColor3f(0.62,0.41,0.10);
    glVertex2i(-15,-27);
    glVertex2i(-5,-27);
    glVertex2i(-5,-20);
    glVertex2i(-15,-20);
    glEnd();

//roof top
    glBegin(GL_POLYGON);
    glColor3f(0.94,0.75,0.46);
    glVertex2i(-16,-20);
    glVertex2i(-4,-20);
    glVertex2i(-10,-15);

    glEnd();
    //door
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-11,-27);
    glVertex2i(-9,-27);
    glVertex2i(-9.5,-23);
    glVertex2i(-11,-23);

    glEnd();

    //window left
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-14,-24);
    glVertex2i(-12,-24);
    glVertex2i(-12,-22);
    glVertex2i(-14,-22);

    glEnd();

    //window right
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-8,-24);
    glVertex2i(-6,-24);
    glVertex2i(-6,-22);
    glVertex2i(-8,-22);

    glEnd();





//home ends

//mountain starts
//back mountain
     glBegin(GL_POLYGON);

        glColor3f(0.17,0.37,0.33);

    glVertex2i(-50,5);
    glVertex2i(-30,5);
    glVertex2i(-37,18);

      glColor3f(0.17,0.37,0.23);

    glVertex2i(-40,20);
    glVertex2i(-43,25);
    glVertex2i(-45,18);

        glColor3f(0.35,0.33,0.38);

    glVertex2i(-50,25);
    glVertex2i(-50,5);

    glEnd();
//front mountain
    glBegin(GL_POLYGON);

         glColor3f(0.35,0.53,0.38);

    glVertex2i(-50,5);
    glVertex2i(-25,5);
    glVertex2i(-30,10);

         glColor3f(0.35,0.53,0.38);

    glVertex2i(-35,8);
    glVertex2i(-40,12);

        glColor3f(0.35,0.43,0.58);

    glVertex2i(-45,10);
    glVertex2i(-50,5);

    glEnd();


//mountain ends

// tree 1 starts

    glBegin(GL_POLYGON);
    glColor3f(0.27,0.12,0.04);
    glVertex2i(-23,5);
    glVertex2i(-21,5);
    glColor3f(0.38,0.18,0.09);
    glVertex2i(-21,12);
    glVertex2i(-23,12);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.15,0.65,0.05);
    glVertex2i(-26.5,10);
    glVertex2i(-18.5,10);
    glColor3f(0.26,0.76,0.16);
    glVertex2i(-22.5,15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.15,0.65,0.05);
    glVertex2i(-26.5,12);
    glVertex2i(-18.5,12);
    glColor3f(0.26,0.76,0.16);
    glVertex2i(-22.5,17);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.15,0.65,0.05);
    glVertex2i(-26.5,14);
    glVertex2i(-18.5,14);
    glColor3f(0.26,0.76,0.16);
    glVertex2i(-22.5,19);
    glEnd();


//tree 1 ends

// tree 2 starts

    glBegin(GL_POLYGON);
    glColor3f(0.27,0.12,0.04);
    glVertex2i(-14,5);
    glVertex2i(-12,5);
    glColor3f(0.38,0.18,0.09);
    glVertex2i(-12,12);
    glVertex2i(-14.5,12);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.15,0.65,0.05);
    glVertex2i(-17.5,10);
    glVertex2i(-9.5,10);
    glColor3f(0.26,0.76,0.16);
    glVertex2i(-13.5,15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.15,0.65,0.05);
    glVertex2i(-17.5,12);
    glVertex2i(-9.5,12);
    glColor3f(0.26,0.76,0.16);
    glVertex2i(-13.5,17);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.15,0.65,0.05);
    glVertex2i(-17.5,14);
    glVertex2i(-9.5,14);
    glColor3f(0.26,0.76,0.16);
    glVertex2i(-13.5,19);
    glEnd();


//tree 2 ends

 //house 4
glBegin(GL_POLYGON);
    glColor3f(0.62,0.41,0.10);
    glVertex2i(-13,-2);
    glVertex2i(-3,-2);
    glVertex2i(-3,5);
    glVertex2i(-13,5);
    glEnd();

//roof top
    glBegin(GL_POLYGON);
    glColor3f(0.94,0.75,0.46);
    glVertex2i(-14,5);
    glVertex2i(-2,5);
    glVertex2i(-8,10);

    glEnd();

     //window left
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-12,3);
    glVertex2i(-11,3);
    glVertex2i(-11,4);
    glVertex2i(-12,4);

    glEnd();

    //window right
     glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-5,3);
    glVertex2i(-4,3);
    glVertex2i(-4,4);
    glVertex2i(-5,4);

    glEnd();

    //door
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-9,-2);
    glVertex2i(-7,-2);
    glVertex2i(-7,3);
    glVertex2i(-9,3);

    glEnd();


//play field start
glLineWidth(5);
glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2i(-49,-2.5);
    glVertex2i(-35,-2.5);

    glVertex2i(-35,-2.5);
    glVertex2i(-35,4);

    glVertex2i(-35,4);
    glVertex2i(-49,4);

    glVertex2i(-49,4);
    glVertex2i(-49,-2.5);

    glEnd();

    glLineWidth(5);
glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2i(-48,-1);
    glVertex2i(-48,3);

    glVertex2i(-36,-1);
    glVertex2i(-36,3);

    glVertex2i(-42,-2);
    glVertex2i(-42,4);

     glEnd();
//play field end

//village tree start
glLineWidth(7);
glBegin(GL_LINES);
glColor3f(0.27,0.12,0.04);
glVertex2i(-5,-28);
glVertex2i(-5,-24);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0,0.5,0);
    glVertex2i(-7,-25);
    glVertex2i(-3,-25);
    glColor3f(0.0,0.8,0.0);
    glVertex2i(-5,-20);
glEnd();

glLineWidth(7);
glBegin(GL_LINES);
glColor3f(0.27,0.12,0.04);
glVertex2i(-32,-28);
glVertex2i(-32,-24);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0,0.5,0);
    glVertex2i(-30,-25);
    glVertex2i(-34,-25);
    glColor3f(0.0,0.8,0.0);
    glVertex2i(-32,-20);
glEnd();

glLineWidth(7);
glBegin(GL_LINES);
glColor3f(0.27,0.12,0.04);
glVertex2i(-48,-28);
glVertex2i(-48,-24);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0,0.5,0);
    glVertex2i(-46,-25);
    glVertex2i(-50,-25);
    glColor3f(0.0,0.8,0.0);
    glVertex2i(-48,-20);
glEnd();
//village tree end




//man start
//body start
glBegin(GL_POLYGON);
    glColor3f(0.57,0.58,0.74);
    glVertex2i(-43,-26);
    glVertex2i(-40,-26);
    glVertex2i(-40,-22);
    glVertex2i(-43,-22);
glEnd();

//legs start
glLineWidth(8);
glBegin(GL_LINES);
glColor3f(1,0.91,0.86);
glVertex2i(-41,-26);
glVertex2i(-41,-27);

glVertex2i(-42,-26);
glVertex2i(-42,-27);
glEnd();

//hand start
glLineWidth(6);
glBegin(GL_LINES);
glColor3f(1,0.91,0.86);
glVertex2i(-40,-23);
glVertex2i(-39,-23);

glVertex2i(-39.5,-23);
glVertex2i(-39.5,-19);


//left hand
glVertex2i(-43,-23);
glVertex2i(-44,-23);

glVertex2i(-44.5,-23);
glVertex2i(-44.5,-19);


glColor3f(0,1,1);
glVertex2i(-45,-19.4);
glVertex2i(-38,-19.4);



glEnd();



//head start
glColor3f(1,1,1);
circle(1,1,-41.5,-21);
//man end

// kite start
    glBegin(GL_POLYGON);

    glColor3f(0.0,0.8,1.0);

    glVertex2f(-25+kx,30+ky);
    glVertex2f(-22+kx,27+ky);
    glVertex2f(-19+kx,30+ky);
    glVertex2f(-22+kx,33+ky);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.11,1.0);
    glVertex2f(-22+kx,27+ky);
    glVertex2f(-24+kx,25+ky);
    glVertex2f(-20+kx,25+ky);
    glEnd();

//kite ends

//kite rope start

glLineWidth(2);
glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2i(-44+kx,-19.4+ky);
glVertex2i(-22+kx,30+ky);
glEnd();
//kite rope end

//kite moving start
if(kx<4)
kx+=0.002;
else
kx=0;
glutPostRedisplay();
//kite moving end

//village end




glutSwapBuffers();


}


int main(int argc, char**argv){



    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1880,1000);
    glutCreateWindow("Final project");
    init();
    glutDisplayFunc(Draw);

    glutMainLoop();
    return 0;
}
