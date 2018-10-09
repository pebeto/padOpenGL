#ifndef SWIMMER_H_INCLUDED
#define SWIMMER_H_INCLUDED

float anguloBrazo1 = 45;
float anguloBrazo2 = 135;
int ban=0;
int ban2=0;

void swimmer(GLUquadricObj *p)
{
    //Poste Base 1
    glPushMatrix();
        glColor3f(0,0,0.5);
        glRotatef(-90,1,0,0);
        gluCylinder(p, 0.5, 0.3 ,8, 16, 16);
    glPopMatrix();
    //Poste Base 2
    glPushMatrix();
        glColor3f(0,0,0.5);
        glRotatef(-90,1,0,0);
        glTranslatef(20,0,0);
        gluCylinder(p, 0.5, 0.3 ,8, 16, 16);
    glPopMatrix();
    //Tronco Base
    glPushMatrix();
        glColor3f(0,0,0.5);
        glTranslatef(-0.23,8.25,0);
        glRotatef(90,0,1,0);
        gluCylinder(p, 0.3, 0.3 , 20.5, 16, 16);
    glPopMatrix();
    //Poste1
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(1.2,9.3,0.05);
        glRotatef(anguloBrazo1,1,0,0);
        gluCylinder(p, 0.3, 0.3 , 8.5, 16, 16);
        //Cabina 1
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,1.6,7.8);
            glRotatef(90,1,0,0);
            gluCylinder(p, 1, 1 , 3, 16, 16);
        glPopMatrix();
        //Fin Mastil 1
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,2,0.2);
            glRotatef(90,1,0,0);
            gluCylinder(p, 0.4, 0.4 , 3, 16, 16);
        glPopMatrix();
    glPopMatrix();
    //Poste2
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(5.2,9.3,0.05);
        glRotatef(anguloBrazo2,1,0,0);
        gluCylinder(p, 0.3, 0.3 , 8.5, 16, 16);
        //Cabina 2
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,1.6,7.8);
            glRotatef(90,1,0,0);
            gluCylinder(p, 1, 1 , 3, 16, 16);
        glPopMatrix();
        //Fin Mastil 2
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,2,0.2);
            glRotatef(90,1,0,0);
            gluCylinder(p, 0.4, 0.4 , 3, 16, 16);
        glPopMatrix();
    glPopMatrix();
    //Poste3
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(9.2,9.3,0.05);
        glRotatef(anguloBrazo1,1,0,0);
        gluCylinder(p, 0.3, 0.3 , 8.5, 16, 16);
        //Cabina 3
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,1.6,7.8);
            glRotatef(90,1,0,0);
            gluCylinder(p, 1, 1 , 3, 16, 16);
        glPopMatrix();
        //Fin Mastil 3
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,2,0.2);
            glRotatef(90,1,0,0);
            gluCylinder(p, 0.4, 0.4 , 3, 16, 16);
        glPopMatrix();
    glPopMatrix();
    //Poste4
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(13.2,9.3,0.05);
        glRotatef(anguloBrazo2,1,0,0);
        gluCylinder(p, 0.3, 0.3 , 8.5, 16, 16);
        //Cabina 4
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,1.6,7.8);
            glRotatef(90,1,0,0);
            gluCylinder(p, 1, 1 , 3, 16, 16);
        glPopMatrix();
        //Fin Mastil 4
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,2,0.2);
            glRotatef(90,1,0,0);
            gluCylinder(p, 0.4, 0.4 , 3, 16, 16);
        glPopMatrix();
    glPopMatrix();
    //Poste5
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(17.2,9.3,0.05);
        glRotatef(anguloBrazo1,1,0,0);
        gluCylinder(p, 0.3, 0.3 , 8.5, 16, 16);
        //Cabina 5
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,1.6,7.8);
            glRotatef(90,1,0,0);
            gluCylinder(p, 1, 1 , 3, 16, 16);
        glPopMatrix();
        //Fin Mastil 5
        glPushMatrix();
            glColor3f(0,1,0);
            glTranslatef(0,2,0.2);
            glRotatef(90,1,0,0);
            gluCylinder(p, 0.4, 0.4 , 3, 16, 16);
        glPopMatrix();
    glPopMatrix();
    //Union 1
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(1.2,8.3,0.05);
        glutSolidCube(0.9);
    glPopMatrix();
    //Union 2
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(5.2,8.3,0.05);
        glutSolidCube(0.9);
    glPopMatrix();
    //Union 3
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(9.2,8.3,0.05);
        glutSolidCube(0.9);
    glPopMatrix();
    //Union 4
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(13.2,8.3,0.05);
        glutSolidCube(0.9);
    glPopMatrix();
    //Union 5
    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef(17.2,8.3,0.05);
        glutSolidCube(0.9);
    glPopMatrix();
}

void rotarBrazoSwimmer(int i)
{
    if(iniciarAnimacionSwimmer){
        if(ban==0){
            anguloBrazo1=anguloBrazo1+5;
        }
        else{
            anguloBrazo1=anguloBrazo1-5;
        }
        if(anguloBrazo1==135)
            ban=1;
        else if (anguloBrazo1==45)
            ban=0;
    }
    glutPostRedisplay();
    glutTimerFunc(1,rotarBrazoSwimmer,i);
}

void rotarBrazoSwimmer2(int i)
{
    if(iniciarAnimacionSwimmer){
         if(ban2==0){
             anguloBrazo2=anguloBrazo2-5;
         }
         else{
             anguloBrazo2=anguloBrazo2+5;
         }
         if(anguloBrazo2==45)
             ban2=1;
         else if (anguloBrazo2==135)
             ban2=0;
    }
    glutPostRedisplay();
    glutTimerFunc(1,rotarBrazoSwimmer2,i);
}



#endif // SWIMMER_H_INCLUDED
