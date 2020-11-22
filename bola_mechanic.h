#ifndef BOLA_MECHANIC_H_INCLUDED
#define BOLA_MECHANIC_H_INCLUDED

class bola {
public:
    //graphic and position variable
    float theta;
    int ball_radius = 15;
    int x_position = 80;
    int y_position = 80;

    //collisions variable


    //movement speed variable
    float general_speed = 0.5;
    float xSpeed = general_speed;
    float ySpeed = general_speed;


//grafik bola
    void graphic(){
        glBegin(GL_POLYGON);
        glColor3b(0,0,0);
        for (int i= 0; i<360; i++){
            theta = i*3.142/180;
            float x_ball = ball_radius*cos(theta);
            float y_ball = ball_radius*sin(theta);
            glVertex2f((x_position+x_ball),(y_position+y_ball));
        };
        glEnd();

        //glBegin(GL_POLYGON);
    };



//pergerakan bola
    void movement(){

    };
};

#endif // BOLA_MECHANIC_H_INCLUDED
