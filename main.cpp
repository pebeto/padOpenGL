#ifdef __linux__
    #include <GL/glut.h>
    #define LINUX 1
    #else
    #define LINUX 0
    #include <gl/glut.h>
#endif
#include <iostream>
#include <math.h>

bool iniciarAnimacionHammer= true; // 'Y' HAMMER
bool iniciarAnimacionSpiner= true; // 'U' SPINNER
bool iniciarAnimacionCarousel= true; // 'I' CAROUSEL
bool iniciarAnimacionSpinout= true; // 'O' SPINOUT
bool iniciarAnimacionSwimmer= true; // 'P' SWIMMER
bool iniciarAnimacionFloatingChairs= true; // 'J' FLOATING CHAIRS

int camaraPosicion = 0;

#include "src/spiner.h"
#include "src/floatingchairs.h"
#include "src/carousel.h"
#include "src/spinout.h"
#include "src/swimmer.h"
#include "src/hammer.h"

GLUquadricObj *p = gluNewQuadric();

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

int xpos= 0, ypos= 0;
float camX= 0; // 0
float camZ= -1; // -1
float camPosX= 0;
float camPosZ= 60; // 5
float camAngulo= 0;

void inicializar()
{
    glClearColor(0.529,0.807,0.98, 1.0);
    glEnable(GL_DEPTH_TEST);
    gluQuadricDrawStyle(p,GLU_FILL);
}

void graficarEjes()
{
    glBegin(GL_LINES);
        glColor3f(1,0,0);
        glVertex3f(0,0,0);
        glVertex3f(300,0,0);

        glColor3f(1,0,0);
        glVertex3f(0,0,0);
        glVertex3f(-300,0,0);

        glColor3f(0,1,0);
        glVertex3f(0,0,0);
        glVertex3f(0,300,0);

        glColor3f(0,1,0);
        glVertex3f(0,0,0);
        glVertex3f(0,-300,0);

        glColor3f(0,0,1);
        glVertex3f(0,0,0);
        glVertex3f(0,0,300);

        glColor3f(0,0,1);
        glVertex3f(0,0,0);
        glVertex3f(0,0,-300);
    glEnd();
}

void reportar(){
    if(LINUX)
        system("clear");
    else
        system("cls");
    std::cout<<"X/Z: "<<camPosX<<"/"<<camPosZ<<std::endl;
    std::cout<<"Spiner (1 | u): "<<((iniciarAnimacionSpiner) ? "ON" : "OFF")<<std::endl;
    std::cout<<"Hammer (2 | y): "<<((iniciarAnimacionHammer) ? "ON" : "OFF")<<std::endl;
    std::cout<<"Floating Chairs (3 | j): "<<((iniciarAnimacionFloatingChairs) ? "ON" : "OFF")<<std::endl;
    std::cout<<"Carousel (4 | i): "<<((iniciarAnimacionCarousel) ? "ON" : "OFF")<<std::endl;
    std::cout<<"Spinout (5 | o): "<<((iniciarAnimacionSpinout) ? "ON" : "OFF")<<std::endl;
    std::cout<<"Swimmer (6 | p): "<<((iniciarAnimacionSwimmer) ? "ON" : "OFF")<<std::endl;
}

void graficar()
{
    reportar();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    switch(camaraPosicion)
    {
        case 0:
            gluLookAt(camPosX,2,camPosZ, camPosX+camX,2,camPosZ+camZ, 0,1,0);
        break;
        case 1:
            gluLookAt(-6.04,17,-16.64, -24.21,17,-3.67, 0,1,0);
        break;
        case 2:
            gluLookAt(-11.4041, 15, 36.5183, 20, 20, 15, 0, 1, 0);
        break;
        case 3:
            gluLookAt(-6.04,9,-15, -40,5,-50, 0,1,0);
        break;
        case 4:
            gluLookAt(1.9,5,-25, 14.94,4,-49.47, 0,1,0);
        break;
        case 5:
            gluLookAt(-1.84,10,-39, -3.36-3,10,-40.9-4, 0,1,0);
        break;
        case 6:
            gluLookAt(1.21,3,-75.72, 17.55,3,-77.5, 0,1,0);
        break;
    }


    //graficarEjes();

    glPushMatrix();
        glColor3f(0.3, 0.3, 0.3);
        glScalef(10, .5, 200);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.521,0.6,0);
        glTranslatef(0,-251.5,0);
        glutSolidCube(500);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-30,0,0);
        spiner(p);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-20,0,-30);
        glScalef(2, 2, 2);
        floatingChairs(p);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(35,0,0);
        glScalef(4,4,4);
        hammer(p);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(15,0,-40);
        carousel(p);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-45,0,-76);
        spinOut(p);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(30,-1,-55);
        glRotatef(90,0,1,0);
        glScalef(2, 2, 1);
        swimmer(p);
    glPopMatrix();

    glutSwapBuffers();
}

void redimensionar(int w,int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(-50,50,-50,50,-1,1);
    gluPerspective(60,(float)w/(float)h,1,300);
}

void manejarMouse(int x, int y){
    xpos= x;
    ypos= y;
    glutPostRedisplay();
}

void manejarTeclado(unsigned char key, int x, int y){
    switch(key){
        case 'w':
            camPosX+= camX*0.5;
            camPosZ+= camZ*0.5;
            break;
        case 's':
            camPosX-= camX*0.5;
            camPosZ-= camZ*0.5;
            break;
        case 'a':
            camAngulo-= 0.1;
            camX= sin(camAngulo);
            camZ= -cos(camAngulo);
            break;
        case 'd':
            camAngulo+= 0.1;
            camX= sin(camAngulo);
            camZ= -cos(camAngulo);
            break;
        case 'y':
            if(iniciarAnimacionHammer)
                iniciarAnimacionHammer= false;
            else
                iniciarAnimacionHammer= true;
            break;
        case 'u':
            if(iniciarAnimacionSpiner)
                iniciarAnimacionSpiner= false;
            else
                iniciarAnimacionSpiner= true;
            break;
        case 'i':
            if(iniciarAnimacionCarousel)
                iniciarAnimacionCarousel= false;
            else
                iniciarAnimacionCarousel= true;
            break;
        case 'o':
            if(iniciarAnimacionSpinout)
                iniciarAnimacionSpinout= false;
            else
                iniciarAnimacionSpinout= true;
            break;
        case 'p':
            if(iniciarAnimacionSwimmer)
                iniciarAnimacionSwimmer= false;
            else
                iniciarAnimacionSwimmer= true;
            break;
        case 'j':
            if(iniciarAnimacionFloatingChairs)
                iniciarAnimacionFloatingChairs= false;
            else
                iniciarAnimacionFloatingChairs= true;
            break;
        case '1':
            if(camaraPosicion != 1)
            {
                camaraPosicion = 1;
            }
            else
            {
                camaraPosicion = 0;
            }
            break;
        case '2':
            if(camaraPosicion != 2)
                camaraPosicion= 2;
            else
                camaraPosicion= 0;
            break;
        case '3':
            if(camaraPosicion != 3)
                camaraPosicion = 3;
            else
                camaraPosicion = 0;
            break;
        case '4':
            if(camaraPosicion != 4)
            {
                camaraPosicion = 4;
            }
            else
            {
                camaraPosicion = 0;
            }
            break;
        case '5':
            if(camaraPosicion != 5)
            {
                camaraPosicion = 5;
            }
            else
            {
                camaraPosicion = 0;
            }
            break;
        case '6':
            if(camaraPosicion != 6)
                camaraPosicion = 6;
            else
                camaraPosicion = 0;
            break;

    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600,400);
    glutInitWindowPosition(100,200);
    glutCreateWindow("Hola Mundo");

    inicializar();

    glutDisplayFunc(graficar);
    glutReshapeFunc(redimensionar);
    glutKeyboardFunc(manejarTeclado);
    glutPassiveMotionFunc(manejarMouse);

    // SPINER
    glutTimerFunc(1,girarSpiner,1);
    glutTimerFunc(1,rotacionSpiner,2);

    // FLOATING CHAIRS
    glutTimerFunc(10,rotarFloatingChairs,3);

    // HAMMER
    glutTimerFunc(1, rotarGiratorio, 4);
    glutTimerFunc(1,rotarBaseBrazo,5);

    // CAROUSEL
    glutTimerFunc(500,rotarTronco,6);
    glutTimerFunc(50,rotarCarpa,7);
    glutTimerFunc(50,animarCaballos,14);

    // SPIN OUT
    glutTimerFunc(10,rotarToro,8);
    glutTimerFunc(80,rotarBrazo,9);
    glutTimerFunc(80,rotarMano,10);
    glutTimerFunc(80,trasladarXY,11);

    // SWIMMER
    glutTimerFunc(16,rotarBrazoSwimmer,12);
    glutTimerFunc(16,rotarBrazoSwimmer2,13);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return 0;
}
