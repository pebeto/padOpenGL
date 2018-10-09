#ifndef SPINER_H_INCLUDED
#define SPINER_H_INCLUDED

// ANIMACION CONTENEDORES
int angulo = 0;

// ANIMACION RUEDA
int anguloRueda = 0;

void spiner(GLUquadricObj *p)
{

    // EJE CENTRAL
    glPushMatrix();

        // BASE
        glPushMatrix();
            glColor3f(0,1,0);
            glScalef(20,0.5,20);
            glutSolidCube(2);
        glPopMatrix();

        // BASE 2
        glPushMatrix();
            glColor3f(0.45,0.45,1);
            glTranslatef(2.5,1,0);
            glScalef(3.3,1,13);
            glutSolidCube(2);
        glPopMatrix();

        glTranslatef(0,15,0); // PARA SUBIR LA ESTRUCTURA
        glRotatef(90,0,1,0); // PARA ROTAR LA ESTRUCTURA

        //POSTE IZQUIERDO
        glPushMatrix();
            glColor3f(0,0,1);
            glTranslatef(0,0,-16.7);
            glRotatef(90,1,0,0);
            gluCylinder(p,0.3,0.3,15,51,51);
        glPopMatrix();

        //POSTE DERECHO
        glPushMatrix();
            glColor3f(0,0,1);
            glTranslatef(0,0,16.7);
            glRotatef(90,1,0,0);
            gluCylinder(p,0.3,0.3,15,51,51);
        glPopMatrix();

        // TUBO PRINCIPAL
        glPushMatrix();
            glTranslatef(0,0,-17);
            gluCylinder(p,0.3,0.3,34,51,51);
        glPopMatrix();

        glColor3f(1,1,0);

        glRotatef(anguloRueda,0,0,1);

        // SOSTENEDOR EJE SURESTE
        glPushMatrix();
            glTranslatef(-2,-2,0);
            gluCylinder(p,0.2,0.2,5,51,51);
        glPopMatrix();

        // SOSTENEDOR EJE NOROESTE
        glPushMatrix();
            glTranslatef(2,2,0);
            gluCylinder(p,0.2,0.2,5,51,51);
        glPopMatrix();

        // SOSTENEDOR EJE NORESTE
        glPushMatrix();
            glTranslatef(-2,2,0);
            gluCylinder(p,0.2,0.2,5,51,51);
        glPopMatrix();

        // SOSTENEDOR EJE SUROESTE
        glPushMatrix();
            glTranslatef(2,-2,0);
            gluCylinder(p,0.2,0.2,5,51,51);
        glPopMatrix();

        // EJE
        glColor3f(1,0,0);
        gluCylinder(p,2.5,2.5,5,51,51);

        // PRIMERA CARA
        glPushMatrix();

            // TAPA (CONO)
            glPushMatrix();
                glRotatef(180,0,1,0);
                glutWireCone(2,1,20,10);
            glPopMatrix();

            glColor3f(1,1,0);

            // ANILLO GRANDE
            glutSolidTorus(0.5,10,51,51);

            //ANILLO PEQUEÑO
            glutSolidTorus(0.5,2.5,51,51);

            // CABLE NORTE
            glPushMatrix();
                glTranslatef(2.2,0,0);
                glRotatef(90,0,1,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE SUR
            glPushMatrix();
                glTranslatef(0,-10,0);
                glRotatef(-90,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE ESTE
            glPushMatrix();
                glTranslatef(0,2.2,0);
                glRotatef(-90,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE OESTE
            glPushMatrix();
                glTranslatef(-2.2,0,0);
                glRotatef(-90,0,1,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE NORESTE
            glPushMatrix();
                glTranslatef(2,2,0);
                glRotatef(90,0,1,0);
                glRotatef(-45,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE SURESTE
            glPushMatrix();
                glTranslatef(2,-2,0);
                glRotatef(90,0,1,0);
                glRotatef(45,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            //  CABLE NOROESTE
            glPushMatrix();
                glTranslatef(-2,2,0);
                glRotatef(-90,0,1,0);
                glRotatef(-45,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE SUROESTE
            glPushMatrix();
                glTranslatef(-2,-2,0);
                glRotatef(-90,0,1,0);
                glRotatef(45,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // SOSTENEDOR NORTE
            glPushMatrix();

                glTranslatef(0,10,0);
                gluCylinder(p,0.2,0.2,4.7,51,51);

                // CONTENEDOR NORTE
                glPushMatrix();

                    glRotatef(angulo,0,0,1);

                    glColor3f(0,0,0);
                    glScalef(1.3,0.3,1);
                    glTranslatef(0,0,2.5);
                    glutSolidCube(3);

                    glTranslatef(0,5,0);
                    glutSolidCube(3);

                    glColor3f(0,0,1);

                    glTranslatef(0,-3,0);
                    glScalef(0.8,1.5,0.8);
                    glutSolidCube(3);

                glPopMatrix();

            glPopMatrix();

            glColor3f(1,1,0);

            // SOSTENEDOR SUR
            glPushMatrix();
                glTranslatef(0,-10,0);
                gluCylinder(p,0.2,0.2,4.7,51,51);

                // CONTENEDOR SUR
                glPushMatrix();

                    glRotatef(angulo,0,0,1);

                    glColor3f(0,0,0);
                    glScalef(1.3,0.3,1);
                    glTranslatef(0,0,2.5);
                    glutSolidCube(3);

                    glTranslatef(0,5,0);
                    glutSolidCube(3);

                    glColor3f(0,0,1);
                    glTranslatef(0,-3,0);
                    glScalef(0.8,1.5,0.8);
                    glutSolidCube(3);

                glPopMatrix();

            glPopMatrix();

            glColor3f(1,1,0);

            // SOSTENEDOR ESTE
            glPushMatrix();

                glTranslatef(-10,0,0);
                gluCylinder(p,0.2,0.2,4.7,51,51);

                // CONTENEDOR ESTE
                glPushMatrix();

                    glRotatef(angulo,0,0,1);

                    glColor3f(0,0,0);
                    glScalef(1.3,0.3,1);
                    glTranslatef(0,0,2.5);
                    glutSolidCube(3);

                    glTranslatef(0,5,0);
                    glutSolidCube(3);

                    glColor3f(0,0,1);
                    glTranslatef(0,-3,0);
                    glScalef(0.8,1.5,0.8);
                    glutSolidCube(3);

                glPopMatrix();

            glPopMatrix();

            glColor3f(1,1,0);

            // SOSTENEDOR OESTE
            glPushMatrix();

                glTranslatef(10,0,0);
                gluCylinder(p,0.2,0.2,4.7,51,51);

                // CONTENEDOR OESTE
                glPushMatrix();

                    glRotatef(angulo,0,0,1);

                    glColor3f(0,0,0);
                    glScalef(1.3,0.3,1);
                    glTranslatef(0,0,2.5);
                    glutSolidCube(3);

                    glTranslatef(0,5,0);
                    glutSolidCube(3);

                    glColor3f(0,0,1);
                    glTranslatef(0,-3,0);
                    glScalef(0.8,1.5,0.8);
                    glutSolidCube(3);

                glPopMatrix();

            glPopMatrix();

        glPopMatrix();

        glColor3f(1,1,0);

        // SEGUNDA CARA
        glPushMatrix();

            glTranslatef(0,0,5);

            // TAPA (CONO)
            glPushMatrix();
                glColor3f(1,0,0);
                glutWireCone(2,1,20,10);
            glPopMatrix();

            glColor3f(1,1,0);

            // ANILLO GRANDE
            glutSolidTorus(0.5,10,51,51);

            //ANILLO PEQUEÑO
            glutSolidTorus(0.5,2.5,51,51);

            // CABLE NORTE
            glPushMatrix();
                glTranslatef(2.2,0,0);
                glRotatef(90,0,1,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE SUR
            glPushMatrix();
                glTranslatef(0,-10,0);
                glRotatef(-90,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE ESTE
            glPushMatrix();
                glTranslatef(0,2.2,0);
                glRotatef(-90,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE OESTE
            glPushMatrix();
                glTranslatef(-2.2,0,0);
                glRotatef(-90,0,1,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE NORESTE
            glPushMatrix();
                glTranslatef(2,2,0);
                glRotatef(90,0,1,0);
                glRotatef(-45,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE SURESTE
            glPushMatrix();
                glTranslatef(2,-2,0);
                glRotatef(90,0,1,0);
                glRotatef(45,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            //  CABLE NOROESTE
            glPushMatrix();
                glTranslatef(-2,2,0);
                glRotatef(-90,0,1,0);
                glRotatef(-45,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // CABLE SUROESTE
            glPushMatrix();
                glTranslatef(-2,-2,0);
                glRotatef(-90,0,1,0);
                glRotatef(45,1,0,0);
                gluCylinder(p,0.4,0.4,7.5,51,51);
            glPopMatrix();

            // SOSTENEDOR SURESTE
            glPushMatrix();
                glTranslatef(-7,-7,-5);
                gluCylinder(p,0.2,0.2,4.7,51,51);

                // CONTENEDOR SURESTE
                glPushMatrix();

                    glRotatef(angulo,0,0,1);

                    glColor3f(0,0,0);
                    glScalef(1.3,0.3,1);
                    glTranslatef(0,0,2.5);
                    glutSolidCube(3);

                    glTranslatef(0,5,0);
                    glutSolidCube(3);

                    glColor3f(0,0,1);
                    glTranslatef(0,-3,0);
                    glScalef(0.8,1.5,0.8);
                    glutSolidCube(3);

                glPopMatrix();

            glPopMatrix();

            glColor3f(1,1,0);

            // SOSTENEDOR NOROESTE
            glPushMatrix();

                glTranslatef(7,7,-5);
                gluCylinder(p,0.2,0.2,4.7,51,51);

                // CONTENEDOR NOROESTE
                glPushMatrix();

                    glRotatef(angulo,0,0,1);

                    glColor3f(0,0,0);
                    glScalef(1.3,0.3,1);
                    glTranslatef(0,0,2.5);
                    glutSolidCube(3);

                    glTranslatef(0,5,0);
                    glutSolidCube(3);

                    glColor3f(0,0,1);
                    glTranslatef(0,-3,0);
                    glScalef(0.8,1.5,0.8);
                    glutSolidCube(3);

                glPopMatrix();

            glPopMatrix();

            glColor3f(1,1,0);

            // SOSTENEDOR NORESTE
            glPushMatrix();

                glTranslatef(-7,7,-5);
                gluCylinder(p,0.2,0.2,4.7,51,51);

                // CONTENEDOR NORESTE
                glPushMatrix();

                    glRotatef(angulo,0,0,1);

                    glColor3f(0,0,0);
                    glScalef(1.3,0.3,1);
                    glTranslatef(0,0,2.5);
                    glutSolidCube(3);

                    glTranslatef(0,5,0);
                    glutSolidCube(3);

                    glColor3f(0,0,1);
                    glTranslatef(0,-3,0);
                    glScalef(0.8,1.5,0.8);
                    glutSolidCube(3);

                glPopMatrix();

            glPopMatrix();

            glColor3f(1,1,0);

            // SOSTENEDOR SUROESTE
            glPushMatrix();

                glTranslatef(7,-7,-5);
                gluCylinder(p,0.2,0.2,4.7,51,51);

                // CONTENEDOR SUROESTE
                glPushMatrix();

                    glRotatef(angulo,0,0,1);

                    glColor3f(0,0,0);
                    glScalef(1.3,0.3,1);
                    glTranslatef(0,0,2.5);
                    glutSolidCube(3);

                    glTranslatef(0,5,0);
                    glutSolidCube(3);

                    glColor3f(0,0,1);
                    glTranslatef(0,-3,0);
                    glScalef(0.8,1.5,0.8);
                    glutSolidCube(3);

                glPopMatrix();

            glPopMatrix();

        glPopMatrix();

    glPopMatrix();
}

void girarSpiner(int i)
{
    if(iniciarAnimacionSpiner)
        anguloRueda++;
    glutPostRedisplay();
    glutTimerFunc(1,girarSpiner,i);
}

void rotacionSpiner(int i)
{
    if(iniciarAnimacionSpiner)
        angulo++;
    glutPostRedisplay();
    glutTimerFunc(1,rotacionSpiner,i);
}



#endif // SPINER_H_INCLUDED
