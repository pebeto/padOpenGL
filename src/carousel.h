#ifndef CAROUSEL_H_INCLUDED
#define CAROUSEL_H_INCLUDED

float anguloTronco=0;
float anguloCarpa=0;
float traslacionFigurasCentro1 = 0;
float traslacionFigurasCentro2 = 0;
float anguloFigurasBorde = 0;
float bandera1 = 0;
float bandera2 = 0;

void carousel(GLUquadricObj *p)
{
    // CARRUCEL ------------------------------------------------
    glRotatef(90,1,0,0);
    glRotatef(-90,1,0,0);
    glColor3f(0.3,0.6,0.5);
    glBegin(GL_QUADS);
        glVertex3f(-10,0,10);
        glVertex3f(10,0,10);
        glVertex3f(10,0,-10);
        glVertex3f(-10,0,-10);
    glEnd();

    glPushMatrix();
    //TRONCO
        glColor3f(1,1,0);
        glRotatef(anguloTronco,0,1,0);
        glRotatef(-90,1,0,0);
        gluCylinder(p, 0.5,0.5 ,8, 16, 16);
        glPushMatrix();
        //CARPA ------------------------------------------------
            glColor3f(1,0,0);
            glRotatef(-90,1,0,0);
            glRotatef(anguloCarpa,0,1,0);
            glTranslatef(0,-8,0);
            glRotatef(90,1,0,0);
            glutSolidCone(10,2,32,32);
            //ESFERA DE LA CARPA--------------------------------
            glRotatef(-90,1,0,0);
            glTranslatef(0,-2.5,0);
            glRotatef(90,1,0,0);
            glColor3f(0.80,0.5,0);
            glutSolidSphere(0.8,16,16);
            glPushMatrix();
                //BASTON 1 -----------------------------------------VERDE
                glColor3f(0,1,0);
                glRotatef(-90,1,0,0);
                glTranslatef(0,6.5 + traslacionFigurasCentro1,-9);
                glRotatef(90,1,0,0);
                gluCylinder(p, 0.2,0.2 ,4 + traslacionFigurasCentro1, 16, 16);
                glTranslatef(-1,0,0);
                glRotatef(90,1,0,0);
                glPushMatrix();
                    // FIGURA
                    //CUERPO -----------------------------
                    glRotatef(90,0,1,0);
                    gluCylinder(p, 0.6,0.6 ,2, 16, 16);
                    glutSolidSphere(0.6,32,32);
                    glRotatef(-90,0,1,0);
                    glTranslatef(2,0,0);
                    glutSolidSphere(0.6,32,32);

                    glPushMatrix();
                        // PATAS --------------------------
                        glTranslatef(-2,0,0);
                        glRotatef(90,1,0,0);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.5,32,32);
                        glTranslatef(2,0,0);
                        glTranslatef(0,0,-1.5);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.5,32,32);
                    glPopMatrix();

                    glPushMatrix();
                        // CABEZA ------------------
                        glTranslatef(-2,0,0);
                        glRotatef(45,0,0,1);
                        glRotatef(-90,1,0,0);
                        gluCylinder(p, 0.6,0.6,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.6,32,32);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p, 0.6,0.45,1, 16, 16);
                    glPopMatrix();
                    glRotatef(-45,0,0,1);
                    glRotatef(-90,1,0,0);
                    gluCylinder(p, 0.6,0.4,1, 16, 16);
                    // COLA ------------------------
                    glTranslatef(0,0,1);
                    glutSolidSphere(0.4,32,32);
                glPopMatrix();
            glPopMatrix();


            glPushMatrix();
                //BASTON 2 ----------------------------------------- CELESTE
                glColor3f(0.5,1,1);
                glRotatef(-90,1,0,0);
                glTranslatef(9,6.5 + traslacionFigurasCentro1,0);
                glRotatef(90,1,0,0);
                gluCylinder(p, 0.2,0.2 ,4 + traslacionFigurasCentro1, 16, 16);
                glTranslatef(0,-1,0);
                glRotatef(-270,0,0,1);
                glRotatef(90,1,0,0);
                glPushMatrix();
                    //CUERPO -----------------------------
                    glRotatef(90,0,1,0);
                    gluCylinder(p, 0.6,0.6 ,2, 16, 16);
                    glutSolidSphere(0.6,32,32);
                    glRotatef(-90,0,1,0);
                    glTranslatef(2,0,0);
                    glutSolidSphere(0.6,32,32);
                    glPushMatrix();
                        // PATA --------------------------
                        glTranslatef(-1,0,0);
                        glRotatef(90,1,0,0);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,2);
                        glutSolidTorus(0.5,0.5,32,32);
                    glPopMatrix();
                     glPushMatrix();
                        // CABEZA ------------------
                        glTranslatef(-2,0,0);
                        glRotatef(45,0,0,1);
                        glRotatef(-90,1,0,0);
                        gluCylinder(p, 0.6,0.6,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.6,32,32);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p, 0.6,0.45,1, 16, 16);
                    glPopMatrix();
                    glRotatef(-45,0,0,1);
                    glRotatef(-90,1,0,0);
                    gluCylinder(p, 0.6,0.4,1, 16, 16);
                    // COLA ------------------------
                    glTranslatef(0,0,1);
                    glutSolidSphere(0.4,32,32);
                glPopMatrix();
            glPopMatrix();



            glPushMatrix();
                //BASTON 3 -----------------------------------------MORADO
                glColor3f(1,0.3,0.4);
                glRotatef(-90,1,0,0);
                glTranslatef(0,6.5 + traslacionFigurasCentro2,9);
                glRotatef(90,1,0,0);
                gluCylinder(p, 0.2,0.2 ,4 + traslacionFigurasCentro2, 16, 16);
                glTranslatef(1,0,0);
                glRotatef(180,0,0,1);
                glRotatef(90,1,0,0);

                glPushMatrix();
                    //CUERPO -----------------------------
                    glRotatef(90,0,1,0);
                    gluCylinder(p, 0.6,0.6 ,2, 16, 16);
                    glutSolidSphere(0.6,32,32);
                    glRotatef(-90,0,1,0);
                    glTranslatef(2,0,0);
                    glutSolidSphere(0.6,32,32);

                    glPushMatrix();
                        // PATAS --------------------------
                        glTranslatef(-2,0,0);
                        glRotatef(90,1,0,0);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.5,32,32);
                        glTranslatef(2,0,0);
                        glTranslatef(0,0,-1.5);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.5,32,32);
                    glPopMatrix();

                    glPushMatrix();
                        // CABEZA ------------------
                        glTranslatef(-2,0,0);
                        glRotatef(45,0,0,1);
                        glRotatef(-90,1,0,0);
                        gluCylinder(p, 0.6,0.6,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.6,32,32);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p, 0.6,0.45,1, 16, 16);
                    glPopMatrix();
                    glRotatef(-45,0,0,1);
                    glRotatef(-90,1,0,0);
                    gluCylinder(p, 0.6,0.4,1, 16, 16);
                    // COLA ------------------------
                    glTranslatef(0,0,1);
                    glutSolidSphere(0.4,32,32);
                glPopMatrix();
            glPopMatrix();


            glPushMatrix();
                //BASTON 4 -----------------------------------------ROSADO
                glColor3f(0.7,0.1,0.5);
                glRotatef(-90,1,0,0);
                glTranslatef(-9,6.5 + traslacionFigurasCentro2,0);
                glRotatef(90,1,0,0);
                gluCylinder(p, 0.2,0.2 ,4 + traslacionFigurasCentro2, 16, 16);
                glTranslatef(0,1,0);
                glRotatef(270,0,0,1);
                glRotatef(90,1,0,0);
                glPushMatrix();
                    //CUERPO -----------------------------
                    glRotatef(90,0,1,0);
                    gluCylinder(p, 0.6,0.6 ,2, 16, 16);
                    glutSolidSphere(0.6,32,32);
                    glRotatef(-90,0,1,0);
                    glTranslatef(2,0,0);
                    glutSolidSphere(0.6,32,32);
                    glPushMatrix();
                        // PATA --------------------------
                        glTranslatef(-1,0,0);
                        glRotatef(90,1,0,0);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,2);
                        glutSolidTorus(0.5,0.5,32,32);
                    glPopMatrix();
                     glPushMatrix();
                        // CABEZA ------------------
                        glTranslatef(-2,0,0);
                        glRotatef(45,0,0,1);
                        glRotatef(-90,1,0,0);
                        gluCylinder(p, 0.6,0.6,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.6,32,32);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p, 0.6,0.45,1, 16, 16);
                    glPopMatrix();
                    glRotatef(-45,0,0,1);
                    glRotatef(-90,1,0,0);
                    gluCylinder(p, 0.6,0.4,1, 16, 16);
                    // COLA ------------------------
                    glTranslatef(0,0,1);
                    glutSolidSphere(0.4,32,32);
                glPopMatrix();
            glPopMatrix();

            glPushMatrix();
                //BASTON 5 ----------------------------------------- PLOMO OSCURO
                glColor3f(0.3,0.3,0.3);
                glRotatef(-90,1,0,0);
                glTranslatef(3,6.5 + traslacionFigurasCentro2,5);
                glRotatef(90,1,0,0);
                gluCylinder(p, 0.2,0.2 ,4+traslacionFigurasCentro2, 16, 16);
                glTranslatef(1,0,0);
                glRotatef(180,0,0,1);
                glRotatef(90,1,0,0);
                glPushMatrix();
                    //CUERPO -----------------------------
                    glRotatef(90,0,1,0);
                    gluCylinder(p, 0.6,0.6 ,2, 16, 16);
                    glutSolidSphere(0.6,32,32);
                    glRotatef(-90,0,1,0);
                    glTranslatef(2,0,0);
                    glutSolidSphere(0.6,32,32);

                    glPushMatrix();
                        // PATAS --------------------------
                        glTranslatef(-2,0,0);
                        glRotatef(90,1,0,0);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.5,32,32);
                        glTranslatef(2,0,0);
                        glTranslatef(0,0,-1.5);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.5,32,32);
                    glPopMatrix();

                    glPushMatrix();
                        // CABEZA ------------------
                        glTranslatef(-2,0,0);
                        glRotatef(45,0,0,1);
                        glRotatef(-90,1,0,0);
                        gluCylinder(p, 0.6,0.6,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.6,32,32);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p, 0.6,0.45,1, 16, 16);
                    glPopMatrix();
                    glRotatef(-45,0,0,1);
                    glRotatef(-90,1,0,0);
                    gluCylinder(p, 0.6,0.4,1, 16, 16);
                    // COLA ------------------------
                    glTranslatef(0,0,1);
                    glutSolidSphere(0.4,32,32);
                glPopMatrix();
            glPopMatrix();

            glPushMatrix();
                //BASTON 6 ----------------------------------------- AZUL
                glColor3f(0,0,1);
                glRotatef(-90,1,0,0);
                glTranslatef(-3,6.5 + traslacionFigurasCentro1,5);
                glRotatef(90,1,0,0);
                gluCylinder(p, 0.2,0.2 ,4 + traslacionFigurasCentro1, 16, 16);
                glTranslatef(1,0,0);
                glRotatef(200,0,0,1);
                glRotatef(90,1,0,0);
                glPushMatrix();
                    //CUERPO -----------------------------
                    glRotatef(90,0,1,0);
                    gluCylinder(p, 0.6,0.6 ,2, 16, 16);
                    glutSolidSphere(0.6,32,32);
                    glRotatef(-90,0,1.5,0);
                    glTranslatef(2,0,0);
                    glutSolidSphere(0.6,32,32);
                    glPushMatrix();
                        // PATA --------------------------
                        glTranslatef(-1,0,0);
                        glRotatef(90,1,0,0);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,2);
                        glutSolidTorus(0.5,0.5,32,32);
                    glPopMatrix();
                     glPushMatrix();
                        // CABEZA ------------------
                        glTranslatef(-2,0,0);
                        glRotatef(45,0,0,1);
                        glRotatef(-90,1,0,0);
                        gluCylinder(p, 0.6,0.6,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.6,32,32);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p, 0.6,0.45,1, 16, 16);
                    glPopMatrix();
                    glRotatef(-45,0,0,1);
                    glRotatef(-90,1,0,0);
                    gluCylinder(p, 0.6,0.4,1, 16, 16);
                    // COLA ------------------------
                    glTranslatef(0,0,1);
                    glutSolidSphere(0.4,32,32);
                glPopMatrix();
            glPopMatrix();


            glPushMatrix();
                //BASTON 7 ----------------------------------------- CARNE
                glColor3f(0.9,0.6,0.2);
                glRotatef(-90,1,0,0);
                glTranslatef(-3,6.5 + traslacionFigurasCentro1,-5);
                glRotatef(90,1,0,0);
                gluCylinder(p, 0.2,0.2 ,4+traslacionFigurasCentro1, 16, 16);
                glTranslatef(-1,0,0);
                //glRotatef(180,0,0,1);
                glRotatef(90,1,0,0);
                glPushMatrix();
                    //CUERPO -----------------------------
                    glRotatef(90,0,1,0);
                    gluCylinder(p, 0.6,0.6 ,2, 16, 16);
                    glutSolidSphere(0.6,32,32);
                    glRotatef(-90,0,1,0);
                    glTranslatef(2,0,0);
                    glutSolidSphere(0.6,32,32);

                    glPushMatrix();
                        // PATAS --------------------------
                        glTranslatef(-2,0,0);
                        glRotatef(90,1,0,0);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.5,32,32);
                        glTranslatef(2,0,0);
                        glTranslatef(0,0,-1.5);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.5,32,32);
                    glPopMatrix();

                    glPushMatrix();
                        // CABEZA ------------------
                        glTranslatef(-2,0,0);
                        glRotatef(45,0,0,1);
                        glRotatef(-90,1,0,0);
                        gluCylinder(p, 0.6,0.6,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.6,32,32);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p, 0.6,0.45,1, 16, 16);
                    glPopMatrix();
                    glRotatef(-45,0,0,1);
                    glRotatef(-90,1,0,0);
                    gluCylinder(p, 0.6,0.4,1, 16, 16);
                    // COLA ------------------------
                    glTranslatef(0,0,1);
                    glutSolidSphere(0.4,32,32);
                glPopMatrix();
            glPopMatrix();

            glPushMatrix();
                //BASTON 8 ----------------------------------------- VIOLETA
                glColor3f(0.5,0,0.9);
                glRotatef(-90,1,0,0);
                glTranslatef(5,6.5 + traslacionFigurasCentro2,-4);
                glRotatef(90,1,0,0);
                gluCylinder(p, 0.2,0.2 ,4 + traslacionFigurasCentro2, 16, 16);
                glTranslatef(0,-0.1,0);
                glRotatef(50,0,0,1);
                glRotatef(90,1,0,0);
                glPushMatrix();
                    //CUERPO -----------------------------
                    glRotatef(90,0,1,0);
                    gluCylinder(p, 0.6,0.6 ,2, 16, 16);
                    glutSolidSphere(0.6,32,32);
                    glRotatef(-90,0,1,0);
                    glTranslatef(2,0,0);
                    glutSolidSphere(0.6,32,32);
                    glPushMatrix();
                        // PATA --------------------------
                        glTranslatef(-1,0,0);
                        glRotatef(90,1,0,0);
                        gluCylinder(p, 0.4,0.4,1.5, 16, 16);
                        glTranslatef(0,0,2);
                        glutSolidTorus(0.5,0.5,32,32);
                    glPopMatrix();
                    glPushMatrix();
                        // CABEZA ------------------
                        glTranslatef(-2,0,0);
                        glRotatef(45,0,0,1);
                        glRotatef(-90,1,0,0);
                        gluCylinder(p, 0.6,0.6,1.5, 16, 16);
                        glTranslatef(0,0,1.5);
                        glutSolidSphere(0.6,32,32);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p, 0.6,0.45,1, 16, 16);
                    glPopMatrix();
                    glRotatef(-45,0,0,1);
                    glRotatef(-90,1,0,0);
                    gluCylinder(p, 0.6,0.4,1, 16, 16);
                    // COLA ------------------------
                    glTranslatef(0,0,1);
                    glutSolidSphere(0.4,32,32);
                glPopMatrix();
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();

}

void rotarTronco(int i)
{
    if(iniciarAnimacionCarousel)
        anguloTronco=anguloTronco+2;
    glutPostRedisplay();
    glutTimerFunc(500,rotarTronco,i);
}

void rotarCarpa(int i)
{
    if(iniciarAnimacionCarousel)
        anguloCarpa=anguloCarpa+2;
    glutPostRedisplay();
    glutTimerFunc(50,rotarCarpa,i);
}

void animarCaballos(int i)
{
    if(iniciarAnimacionCarousel){
      if(bandera1 == 0)
      {
          traslacionFigurasCentro1 = traslacionFigurasCentro1 + 0.5;
          traslacionFigurasCentro2 = traslacionFigurasCentro2 - 0.5;
      }
      if(bandera1 == 1)
      {
          traslacionFigurasCentro1 = traslacionFigurasCentro1 - 0.5;
          traslacionFigurasCentro2 = traslacionFigurasCentro2 + 0.5;
      }

      if(traslacionFigurasCentro1 == 1)
          bandera1 = 1;
      if(traslacionFigurasCentro1 == 0)
          bandera1 = 0;
    }
      glutPostRedisplay();
      glutTimerFunc(500,animarCaballos,i);
}

#endif // CAROUSEL_H_INCLUDED
