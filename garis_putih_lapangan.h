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

void gari_gawang(){
    glLineWidth(4);
    // garis luar gawang kiri
	glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
	glVertex2f(70,120);
	glVertex2f(190,120);
	glVertex2f(190,320);
	glVertex2f(70,320);

	glEnd();
    // garis gawang kiri
	glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
	glVertex2f(70,145);
	glVertex2f(140,145);
	glVertex2f(140,295);
	glVertex2f(70,295);
	glEnd();

	// garis luar gawang kanan
	glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
	glVertex2f(570,120);
	glVertex2f(450,120);
	glVertex2f(450,320);
	glVertex2f(570,320);
	glEnd();
    // garis gawang kanan
    glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(570,145);
	glVertex2f(500,145);
	glVertex2f(500,295);
	glVertex2f(570,295);
	glEnd();

}


#endif // GARIS_PUTIH_LAPANGAN_H_INCLUDED
