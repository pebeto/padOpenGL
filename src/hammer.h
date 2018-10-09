#ifndef HAMMER_H_INCLUDED
#define HAMMER_H_INCLUDED

int vueltas= 0;

float reposo= 0;
const float velocidadBrazo= 0.15;
bool estado;

float anguloBaseBrazo= 0;
float anguloGiratorio= 0;

void hammer(GLUquadricObj *p){
    // base
    glPushMatrix();
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 0.1, 15);
        glutSolidCube(1);
    glPopMatrix();

    // estructura
    glPushMatrix();
        // cuadro
        glColor3f(0.8, 0.8, 0);
        glScalef(1, 0.5, 2);
        glTranslatef(0, 15, 0);
        glutSolidCube(1);

        // detalles del cuadro
        glPushMatrix();
            if(anguloBaseBrazo>120 && anguloBaseBrazo<300)
                glColor3f(0.8, 0.1, 0.1);
            else
                glColor3f(0.1, 0.8, 0.1);
            glTranslatef(0, 0.9, 0.4);
            glutSolidSphere(0.2, 10, 10);

            glTranslatef(0, 0, -0.8);
            glutSolidSphere(0.2, 10, 10);
        glPopMatrix();
        // barras
        glPushMatrix();
            glColor3f(0, 0.3, 0.8);
            // lado A
            glPushMatrix();
                glTranslatef(0.4, 0, -0.3);
                glRotatef(100, 1, 0, 0);
                gluCylinder(p, 0.1, 0.1, 15, 10, 10);

                glTranslatef(-0.8, 0, 0);
                gluCylinder(p, 0.1, 0.1, 15, 10, 10);
            glPopMatrix();
            // lado B
            glPushMatrix();
                glTranslatef(0.4, 0, 0.3);
                glRotatef(80, 1, 0, 0);
                gluCylinder(p, 0.1, 0.1, 15, 10, 10);

                glTranslatef(-0.8, 0, 0);
                gluCylinder(p, 0.1, 0.1, 15, 10, 10);
            glPopMatrix();
        glPopMatrix();
        // base de brazo mecanico
        glPushMatrix();
            glColor3f(0.5, 0.5, 0);
            glScalef(0.5, 1, 0.4);
            glRotatef(anguloBaseBrazo, 0, 0, 1);
            glTranslatef(0, -1, 0);
            glutSolidCube(1);
            // brazo mecanico
            glPushMatrix();
                glRotatef(90, 1, 0, 0);
                gluCylinder(p, 0.15, 0.15, 11, 10, 10);
                // giratorio
                glPushMatrix();
                    glTranslatef(0, 0, 11);
                    glRotatef(-anguloGiratorio, 0, 0, 1);
                    glutSolidCube(1);
                    // Estructura del giratorio
                    glPushMatrix();
                        glRotatef(anguloGiratorio*2, 0, 0, 1);
                        glTranslatef(0, 0, 1);
                        glColor3f(0, 0.5, 0.8);
                        glutSolidSphere(0.6, 10, 10);
                        // Barras del giratorio
                        glPushMatrix();
                            //lado A
                            glPushMatrix();
                                glScalef(0.5, 3, 0.5);
                                glColor3f(0.4, 0.8, 0.3);
                                glTranslatef(0, 0.6, 0);
                                glutSolidCube(1);
                                glColor3f(0.8, 0.1, 0);
                                glTranslatef(0, -1.2, 0);
                                glutSolidCube(1);
                            glPopMatrix();

                            //lado B
                            glPushMatrix();
                                glColor3f(0.3, 0.7, 0.8);
                                glScalef(3, 0.5, 0.5);
                                glTranslatef(0.6, 0, 0);
                                glutSolidCube(1);
                                glColor3f(0.7, 0.3, 0.3);
                                glTranslatef(-1.2, 0, 0);
                                glutSolidCube(1);
                            glPopMatrix();
                        glPopMatrix();
                        // torus del giratorio
                        glPushMatrix();
                            glColor3f(0.8, 0.8, 0);
                            glutSolidTorus(0.3, 3.5, 10, 10);
                            // sillas del torus
                            glPushMatrix();
                                //Silla elegida
                                glPushMatrix();
                                    glColor3f(0.3, 0.7, 0.8);
                                    glScalef(0.2, 0.8, 1);
                                    glTranslatef(19, 0, 0);
                                    glutSolidCube(1);
                                    glScalef(2.5, 1, 0.2);
                                    glTranslatef(0.5, 0, 2);
                                    glutSolidCube(1);
                                glPopMatrix();
                                glPushMatrix();
                                    glColor3f(0.7, 0.3, 0.3);
                                    glScalef(0.2, 0.8, 1);
                                    glTranslatef(-19, 0, 0);
                                    glutSolidCube(1);
                                    glScalef(2.5, 1, 0.2);
                                    glTranslatef(-0.5, 0, 2);
                                    glutSolidCube(1);
                                glPopMatrix();
                                glPushMatrix();
                                    glColor3f(0.8, 0.1, 0);
                                    glScalef(0.8, 0.2, 1);
                                    glTranslatef(0, -18.4, 0);
                                    glutSolidCube(1);
                                    glScalef(1, 2.5, 0.2);
                                    glTranslatef(0, -0.5, 2);
                                    glutSolidCube(1);
                                glPopMatrix();
                                glPushMatrix();
                                    glColor3f(0.4, 0.8, 0.3);
                                    glScalef(0.8, 0.2, 1);
                                    glTranslatef(0, 18.4, 0);
                                    glutSolidCube(1);
                                    glScalef(1, 2.5, 0.2);
                                    glTranslatef(0, 0.5, 2);
                                    glutSolidCube(1);
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();
}


void rotarGiratorio(int i){
    if(iniciarAnimacionHammer){
        anguloGiratorio+=1;
        glutPostRedisplay();
    }
    if(vueltas == 7)
        reposo++;
    glutTimerFunc(1, rotarGiratorio, i);
}

void rotarBaseBrazo(int i){
    if(iniciarAnimacionHammer){
        if(anguloBaseBrazo >= 360 || anguloBaseBrazo <= -360)
            anguloBaseBrazo= 0;
        switch(vueltas){
            case 0:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo;
                    if(anguloBaseBrazo >= 30)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*2;
                    if(anguloBaseBrazo <= -30){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 1:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*3;
                    if(anguloBaseBrazo >= 50)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*4;
                    if(anguloBaseBrazo <= -50){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 2:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*5;
                    if(anguloBaseBrazo >= 90)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*6;
                    if(anguloBaseBrazo <= -90){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 3:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*7;
                    if(anguloBaseBrazo >= 120)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*8;
                    if(anguloBaseBrazo <= -120){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 4:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*9;
                    if(anguloBaseBrazo >= 150)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*10;
                    if(anguloBaseBrazo <= -150){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 5:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*11;
                    if(anguloBaseBrazo >= 170)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*12;
                    if(anguloBaseBrazo <= -170){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 6:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*13;
                    if(anguloBaseBrazo >= 180)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*14;
                    if(anguloBaseBrazo <= -180){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 7:
                if(reposo >= 500)
                    vueltas++;
                break;
            case 8: case 9: case 10:
                anguloBaseBrazo+= velocidadBrazo*15;
                if(anguloBaseBrazo == 360)
                    vueltas++;
                break;
            case 11:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*13;
                    if(anguloBaseBrazo >= 170)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*14;
                    if(anguloBaseBrazo <= -170){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 12:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*10;
                    if(anguloBaseBrazo >= 150)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*12;
                    if(anguloBaseBrazo <= -150){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 13:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*8;
                    if(anguloBaseBrazo >= 120)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*9;
                    if(anguloBaseBrazo <= -120){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 14:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*6;
                    if(anguloBaseBrazo >= 90)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*7;
                    if(anguloBaseBrazo <= -90){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 15:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*4;
                    if(anguloBaseBrazo >= 50)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*5;
                    if(anguloBaseBrazo <= -50){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 16:
                if(!estado){
                    anguloBaseBrazo+= velocidadBrazo*2;
                    if(anguloBaseBrazo >= 30)
                        estado= true;
                }
                else{
                    anguloBaseBrazo-= velocidadBrazo*3;
                    if(anguloBaseBrazo <= -30){
                        estado= false;
                        vueltas++;
                    }
                }
                break;
            case 17:
                if(anguloBaseBrazo >= 0){
                    iniciarAnimacionHammer= false;
                    anguloBaseBrazo= 0;
                    vueltas= 0;
                    reposo= 0;
                }
                else
                    anguloBaseBrazo+= velocidadBrazo;
        }
        glutPostRedisplay();
    }
    glutTimerFunc(1,rotarBaseBrazo,i);
}

#endif // HAMMER_H_INCLUDED
