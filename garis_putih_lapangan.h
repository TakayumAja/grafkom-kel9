#ifndef GARIS_PUTIH_LAPANGAN_H_INCLUDED
#define GARIS_PUTIH_LAPANGAN_H_INCLUDED

void garis_lapangan(){
    //garis tepi lapangan
    glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
	glVertex2f(70,70);
	glVertex2f(570,70);
	glVertex2f(570,370);
	glVertex2f(70,370);
	glVertex2f(70,70);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3ub(125, 130, 126);
	glVertex2f(320,70);
	glVertex2f(320,370);
	glEnd();

}


#endif // GARIS_PUTIH_LAPANGAN_H_INCLUDED
