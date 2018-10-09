#ifndef SPINOUT_H_INCLUDED
#define SPINOUT_H_INCLUDED

float anguloToro=0;
float anguloMano=0;
float anguloBrazo=0;
float posicion=0;
float trasladarx=0;
float trasladarz=0;
int opcionBrazo=-1;
int opcion=-1;
int pasada=-1;

void spinOut(GLUquadricObj *p)
{
    //PADRE BASE

    glPushMatrix();
    glColor3f(0.5,0.5,0.5);
    glTranslatef(trasladarx,10,trasladarz);
    glRotatef(70,1,0,0);
    gluCylinder(p,0.5,2,5,16,16);
    glColor3f(0.5,0.5,0.5);
    glTranslatef(0,0,5);
    glRotatef(-70,1,0,0);
    glutSolidCube(4);
    glTranslatef(0,0,-2);
    glutSolidCube(4);
    glTranslatef(0,-4,0);
    glutSolidCube(4);
    glTranslatef(0,0,2);
    glutSolidCube(4);
    glTranslatef(0,0,-2);



    //---------------------------------------------------------

    glPushMatrix();

        //TRONCO PADRE
        if(opcionBrazo==1){
            glRotatef(anguloBrazo,0,1,0);
        }else{
            glRotatef(anguloBrazo,0,-1,0);
        }

        glColor3f(1,0,0);
        glTranslatef(0,9,0);
        glRotatef(330,1,0,0);
        gluCylinder(p,0.5,2,5,16,16);

        //TRONCO HIJO
        glPushMatrix();

            glColor3f(1,0,0);
            glTranslatef(0,0,5);
            glRotatef(-330,1,0,0);
            glRotatef(-20,1,0,0);
            gluCylinder(p,0.8,.8,10,16,16);

        //UNION TRONCO + TORO
            glPushMatrix();
                glRotatef(anguloBrazo,0,0,1);
                glColor3f(1,0,0);
                glTranslatef(0,0,10);
                //glRotatef(-330,1,0,0);
                glRotatef(20,1,0,0);
                glRotatef(-90,1,0,0);
                gluCylinder(p,0.8,.8,2.5,16,16);


                glPushMatrix();


                    glColor3f(1,0,0);
                    glTranslatef(0,0,2.5);
                    gluCylinder(p,0.8,4,1.5,16,16);

                    //TORO
                    glPushMatrix();

                        glRotatef(anguloToro,0,0,1);
                        glColor3f(0.5,0.5,0.5);
                        glTranslatef(0,0,2.5);
                        glutSolidTorus(1,4,80,80);

                        //BRAZO 1

                        glPushMatrix();
                        glColor3f(1,1,0);
                        glTranslatef(12,0,0);
                        glRotatef(90,1,0,0);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p,1,1,8,16,16);

                        //ANTEBRAZO 1
                        glPushMatrix();
                            glRotatef(anguloMano,0,0,1);
                            glColor3f(1,1,0);
                            glTranslatef(0,3,0);
                            glRotatef(90,1,0,0);
                            gluCylinder(p,1,1,4,16,16);

                        //MANO 1
                            glPushMatrix();

                                glColor3f(0,1,1);
                                glTranslatef(-3.5,0,0);
                                glRotatef(-90,1,0,0);
                                glRotatef(90,0,1,0);
                                gluCylinder(p,1.5,1.5,7,16,16);
                            glPopMatrix();

                        glPopMatrix();

                        glPopMatrix();

                        //BRAZO 2
                        glPushMatrix();
                        glColor3f(1,1,0);
                        glTranslatef(-5,0,0);
                        glRotatef(-90,0,1,0);
                        gluCylinder(p,1,1,8,16,16);

                        //ANTEBRAZO 2

                        glPushMatrix();
                        glRotatef(anguloMano,0,0,1);
                        glColor3f(1,1,0);
                        glTranslatef(-1,0,8);
                        glRotatef(90,0,1,0);
                        gluCylinder(p,1,1,4,16,16);

                        //MANO2

                            glPushMatrix();
                                glColor3f(0,1,1);
                                glTranslatef(0,3.5,4);
                                glRotatef(-90,0,1,0);
                                glRotatef(90,1,0,0);
                                gluCylinder(p,1.5,1.5,7,16,16);
                            glPopMatrix();

                        glPopMatrix();

                        glPopMatrix();


                        //BRAZO 3

                        glPushMatrix();
                        glColor3f(1,1,0);
                        glTranslatef(-6,11,0);
                        glRotatef(90,1,0,0);
                        glRotatef(35,0,1,0);
                        gluCylinder(p,1,1,9,16,16);

                        //ANTEBRAZO 3

                        glPushMatrix();
                        glRotatef(anguloToro,0,1,0);
                        glColor3f(1,1,0);
                        glTranslatef(0,-1,0);
                        glRotatef(-90,1,0,0);
                        gluCylinder(p,1,1,4,16,16);

                        //MANO 3
                        glPushMatrix();
                            glColor3f(0,1,1);
                            glTranslatef(-3.5,0,4);
                            glRotatef(90,1,0,0);
                            glRotatef(90,0,1,0);
                            gluCylinder(p,1.5,1.5,7,16,16);
                        glPopMatrix();

                        glPopMatrix();

                        glPopMatrix();

                        //BRAZO 4

                    glPushMatrix();

                        glColor3f(1,1,0);
                        glTranslatef(-1,-4,0);
                        glRotatef(90,1,0,0);
                        glRotatef(-30,0,1,0);
                        gluCylinder(p,1,1,8,16,16);

                        //ANTEBRAZO 4

                        glPushMatrix();
                            glRotatef(anguloMano,0,0,1);
                            glColor3f(1,1,0);
                            glTranslatef(0,-1,8);
                            glRotatef(-90,1,0,0);
                            //glRotatef(90,0,1,0);
                            gluCylinder(p,1,1,4,16,16);

                         //MANO 4

                         glPushMatrix();
                            glColor3f(0,1,1);
                            glTranslatef(-3.5,0,4);
                            glRotatef(90,1,0,0);
                            glRotatef(90,0,1,0);
                            gluCylinder(p,1.5,1.5,7,16,16);
                        glPopMatrix();

                        glPopMatrix();

                      glPopMatrix();

                      //BRAZO 5

                      glPushMatrix();
                        glColor3f(1,1,0);
                        glTranslatef(3.5,3.5,0);
                        glRotatef(-90,1,0,0);
                        glRotatef(30,0,1,0);
                        gluCylinder(p,1,1,8,16,16);

                        //ANTEBRAZO 5

                            glPushMatrix();
                                glRotatef(anguloToro,0,0,1);
                                glColor3f(1,1,0);
                                glTranslatef(0,1,8);
                                glRotatef(90,1,0,0);
                                //glRotatef(50,0,1,0);
                                gluCylinder(p,1,1,4,16,16);

                         //MANO 5

                         glPushMatrix();

                                glColor3f(0,1,1);
                                glTranslatef(-3.5,0,4);
                                glRotatef(-90,1,0,0);
                                glRotatef(90,0,1,0);
                                gluCylinder(p,1.5,1.5,7,16,16);
                          glPopMatrix();

                          glPopMatrix();

                      glPopMatrix();

                      //BRAZO 6

                        glPushMatrix();
                        glColor3f(1,1,0);
                        glTranslatef(7,-10,0);
                        glRotatef(-90,1,0,0);
                        glRotatef(-30,0,1,0);
                        gluCylinder(p,1,1,8,16,16);

                        //ANTEBRAZO 6
                            glPushMatrix();
                                glRotatef(anguloMano,0,1,0);
                                glColor3f(1,1,0);
                                glTranslatef(0,1,0);
                                glRotatef(90,1,0,0);
                                gluCylinder(p,1,1,4,16,16);
                            glPopMatrix();

                        //MANO 6
                            glPushMatrix();
                                glColor3f(0,1,1);
                                glTranslatef(-3.5,-4,0);
                                glRotatef(-90,1,0,0);
                                glRotatef(90,0,1,0);
                                gluCylinder(p,1.5,1.5,7,16,16);
                            glPopMatrix();

                        glPopMatrix();

                        //FIN DE TORO

                    glPopMatrix();

                glPopMatrix();

            glPopMatrix();

        glPopMatrix();

    glPopMatrix();

    //FIN DE PADRE BASE
    glPopMatrix();


    glTranslatef(0,-1,0);
    glBegin(GL_QUADS);
        glVertex3f(-20,0,20);
        glVertex3f(20,0,20);
        glVertex3f(20,0,-20);
        glVertex3f(-20,0,-20);
    glEnd();

}

void rotarToro(int i)
{
    if(iniciarAnimacionSpinout)
        anguloToro=anguloToro+4;
    glutPostRedisplay();
    glutTimerFunc(10,rotarToro,i);
}

void rotarBrazo(int i)
{
    if(iniciarAnimacionSpinout){
          if(anguloBrazo==180)
          {
              opcionBrazo=1;
          }
          else if(anguloBrazo==0){
              opcionBrazo=2;
          }
          if(opcionBrazo==1)
          {
              anguloBrazo=anguloBrazo-2;
          }else {
              anguloBrazo=anguloBrazo+2;
          }
    }
    glutPostRedisplay();
    glutTimerFunc(80,rotarBrazo,i);
}

void rotarMano(int i)
{
    if(iniciarAnimacionSpinout)
        anguloMano=anguloMano-2;
    glutPostRedisplay();
    glutTimerFunc(80,rotarMano,i);
}

void trasladarXY(int i)
{
    if(iniciarAnimacionSpinout){
        if(trasladarx==0 && trasladarz==0)
        {
            opcion=1;
            pasada=1;
        }
        else if(trasladarx==15 && trasladarz==0)
        {
            if(pasada==1)
            {
                opcion=2;
            }
            else{
                opcion=6;
            }
    
        }
        else if(trasladarx==15 && trasladarz==15)
        {
            if(pasada==1)
            {
                opcion=3;
            }
            else{
                opcion=5;
            }
        }
        else if(trasladarx==0 && trasladarz==15)
        {
            opcion=4;
            pasada=2;
        }
    
        if(opcion==1)
        {
            trasladarx++;
        }
        else if( opcion==2)
        {
            trasladarz++;
        }
        else if(opcion==3)
        {
            trasladarx--;
        }
        else if(opcion==4)
        {
            trasladarx++;
        }
        else if(opcion==5)
        {
            trasladarz--;
        }
        else if(opcion==6)
        {
            trasladarx--;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(80,trasladarXY,i);
}


#endif // SPINOUT_H_INCLUDED
