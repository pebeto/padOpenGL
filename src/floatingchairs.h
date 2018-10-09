#ifndef FLOATINGCHAIRS_H_INCLUDED
#define FLOATINGCHAIRS_H_INCLUDED

float anguloFloatingChairs = 0;

void floatingChairs(GLUquadricObj *p)
{
    //Base
    glPushMatrix();
        glColor3d(0,1,0);
        glTranslated(0,0.3,0);
        glScaled(15,0.1,10);
        glutSolidCube(1);
    glPopMatrix();
    //Primer stack
    glPushMatrix();
        glColor3d(0.639,0.286,0.643);
        glTranslated(0,1,0);
        glRotated(90,1,0,0);
        glRotatef(anguloFloatingChairs,0,0,1);
        gluCylinder(p, 1,1,0.7,10,10);
        //Switch primer stack
        glPushMatrix();
            glColor3d(1,1,0);
            glTranslated(0,1,0.2);
            glScaled(0.5,0.1,0.1);
            glutSolidCube(1);
        glPopMatrix();
        //Segundo stack
        glPushMatrix();
            glColor3d(0.922,0.894,0.580);
            glTranslated(0,0,-1);
            glRotatef((anguloFloatingChairs*(-1.8)),0,0,1);
            gluCylinder(p, 1.05,1.05,1,10,10);
            //Switch segundo stack
            glPushMatrix();
                glColor3d(0.639,0.286,0.643);
                glTranslated(0,1,0.5);
                glScaled(0.5,0.1,0.1);
                glutSolidCube(1);
            glPopMatrix();
            //Tercer stack
            glPushMatrix();
                glColor3d(0.89,0.64,0.61);
                glTranslated(0,0,-0.75);
                glRotatef(anguloFloatingChairs*1.8,0,0,1);
                gluCylinder(p, 0.9,0.9,0.8,10,10);
                //Switch tercer stack
                glPushMatrix();
                    glColor3d(1,1,0);
                    glTranslated(0,0.88,0.3);
                    glScaled(0.5,0.1,0.1);
                    glutSolidCube(1);
                glPopMatrix();
                //Cuarto stack
                glPushMatrix();
                    glColor3d(0.098,0.188,1);
                    glTranslated(0,0,-0.9);
                    glRotatef(anguloFloatingChairs*(-1.8),0,0,1);
                    gluCylinder(p,1.0,0.95,1,10,10);
                    //Switch cuarto stack
                    glPushMatrix();
                        glColor3d(0.639,0.286,0.643);
                        glTranslated(0,0.95,0.6);
                        glScaled(0.5,0.1,0.1);
                        glutSolidCube(1);
                    glPopMatrix();
                    //Estructura de donde salen los asientos
                    glPushMatrix();
                        glColor3d(1,1,0);
                        glTranslated(0,0,-1.5);
                        gluCylinder(p, 5, 0.5, 2,10,10);
                        //Pre-sosten de asiento 1
                        glPushMatrix();
                            glColor3d(0.674,0.729,0.729);
                            glTranslated(-3.5,-1.5,0);
                            glutSolidSphere(0.7,100,100);
                             //Sosten de asiento 1
                            glPushMatrix();
                                glColor3d(0.674,0.729,0.729);
                                //glTranslated(-3,-1.5,0);
                                glRotated(-45,0,1,0);
                                gluCylinder(p,0.1,0.1,3,10,10);
                                //Asiento 1
                                glPushMatrix();
                                    glColor3d(1,0,0);
                                    glTranslated(0,0,3);
                                    glRotated(45,1,1,1);
                                    glScaled(0.5,0.8,0.1);
                                    glutSolidCube(1);
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                        //Pre-sosten de asiento 2
                        glPushMatrix();
                            glColor3d(0.674,0.729,0.729);
                            glTranslated(-3.5,1.5,0);
                            glutSolidSphere(0.7,100,100);
                            //Sosten de asiento 2
                            glPushMatrix();
                                glColor3d(0.674,0.729,0.729);
                                //glTranslated(-3,1.5,0);
                                glRotated(-45,0,1,0);
                                gluCylinder(p,0.1,0.1,3,10,10);
                                //Asiento 2
                                glPushMatrix();
                                    glColor3d(1,0,0);
                                    glTranslated(0,0,3);
                                    glRotated(45,1,1,1);
                                    glScaled(0.5,0.8,0.1);
                                    glutSolidCube(1);
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                        //Pre-sosten de asiento 3
                        glPushMatrix();
                            glColor3d(0.674,0.729,0.729);
                            glTranslated(3.5,1.5,0);
                            glutSolidSphere(0.7,100,100);
                            //Sosten de asiento 3
                            glPushMatrix();
                                glColor3d(0.674,0.729,0.729);
                                //glTranslated(3,1.5,0);
                                glRotated(45,0,1,0);
                                gluCylinder(p,0.1,0.1,3,10,10);
                                //Asiento 3
                                glPushMatrix();
                                    glColor3d(1,0,0);
                                    glTranslated(0,0,3);
                                    glRotated(-45,1,1,1);
                                    glScaled(0.5,0.8,0.1);
                                    glutSolidCube(1);
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                        //Pre-sosten de asiento 4
                        glPushMatrix();
                            glColor3d(0.674,0.729,0.729);
                            glTranslated(3.5,-1.5,0);
                            glutSolidSphere(0.7,100,100);
                            //Sosten de asiento 4
                            glPushMatrix();
                                glColor3d(0.674,0.729,0.729);
                                //glTranslated(3,-1.5,0);
                                glRotated(45,0,1,0);
                                gluCylinder(p,0.1,0.1,3,10,10);
                                //Asiento 4
                                glPushMatrix();
                                    glColor3d(1,0,0);
                                    glTranslated(0,0,3);
                                    glRotated(-45,1,1,1);
                                    glScaled(0.5,0.8,0.1);
                                    glutSolidCube(1);
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                        //Pre-sosten de asiento 5
                        glPushMatrix();
                            glColor3d(0.674,0.729,0.729);
                            glTranslated(-1.5,3.5,0);
                            glutSolidSphere(0.7,100,100);
                            //Sosten de asiento 5
                            glPushMatrix();
                                glColor3d(0.674,0.729,0.729);
                                //glTranslated(-1.5,3,0);
                                glRotated(-45,1,0,0);
                                gluCylinder(p,0.1,0.1,3,10,10);
                                //Asiento 5
                                glPushMatrix();
                                    glColor3d(1,0,0);
                                    glTranslated(0,0,3);
                                    glRotated(-45,1,1,1);
                                    glScaled(0.5,0.8,0.1);
                                    glutSolidCube(1);
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                        glPushMatrix();
                            glColor3d(0.674,0.729,0.729);
                            glTranslated(1.5,3.5,0);
                            glutSolidSphere(0.7,100,100);
                            //Sosten de asiento 6
                            glPushMatrix();
                                glColor3d(0.674,0.729,0.729);
                                //glTranslated(1.5,3,0);
                                glRotated(-45,1,0,0);
                                gluCylinder(p,0.1,0.1,3,10,10);
                                //Asiento 6
                                glPushMatrix();
                                    glColor3d(1,0,0);
                                    glTranslated(0,0,3);
                                    glRotated(-45,1,1,1);
                                    glScaled(0.5,0.8,0.1);
                                    glutSolidCube(1);
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                        //Pre-sosten de asiento 7
                        glPushMatrix();
                            glColor3d(0.674,0.729,0.729);
                            glTranslated(-1.5,-3.5,0);
                            glutSolidSphere(0.7,100,100);
                            //Sosten de asiento 7
                            glPushMatrix();
                                glColor3d(0.674,0.729,0.729);
                                //glTranslated(-1.5,-3,0);
                                glRotated(45,1,0,0);
                                gluCylinder(p,0.1,0.1,3,10,10);
                                //Asiento 7
                                glPushMatrix();
                                    glColor3d(1,0,0);
                                    glTranslated(0,0,3);
                                    glRotated(-45,1,1,1);
                                    glScaled(0.5,0.8,0.1);
                                    glutSolidCube(1);
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                        //Pre-sosten de asiento 8
                        glPushMatrix();
                            glColor3d(0.674,0.729,0.729);
                            glTranslated(1.5,-3.5,0);
                            glutSolidSphere(0.7,100,100);
                            //Sosten de asiento 8
                            glPushMatrix();
                                glColor3d(0.674,0.729,0.729);
                                //glTranslated(1.5,-3,0);
                                glRotated(45,1,0,0);
                                gluCylinder(p,0.1,0.1,3,10,10);
                                //Asiento 8
                                glPushMatrix();
                                    glColor3d(1,0,0);
                                    glTranslated(0,0,3);
                                    glRotated(-45,1,1,1);
                                    glScaled(0.5,0.8,0.1);
                                    glutSolidCube(1);
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                        //Techo
                        glPushMatrix();
                            glColor3d(1,0,0);
                            glutSolidTorus(0.5,5,200,20);
                            glPushMatrix();
                            glColor3d(1,1,0);
                            glTranslated(0,0,0.3);
                            glScaled(1.05,1.05,0.1);
                            glutSolidTorus(0.5,5,200,20);
                            glPopMatrix();
                        glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();

}

void rotarFloatingChairs(int i)
{
    if(iniciarAnimacionFloatingChairs){
        anguloFloatingChairs+=0.8;
    }
    glutPostRedisplay();
    glutTimerFunc(10,rotarFloatingChairs,i);
}


#endif // FLOATINGCHAIRS_H_INCLUDED
