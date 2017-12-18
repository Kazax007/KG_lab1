

#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>
#include <math.h>
#include <stdio.h>
#define pi 3.14159265

void Render()
{    
	double A[] = { 1.987,2.498,0 };
	double B[] = { 4,3,0 };
	double C[] = { 2,9,0 };
	double D[] = { 8,6,0 };
	double E[] = { 12,10,0 };
	double F[] = { 9,0,0 };
	double N[] = { 6,2,0 };

	glBegin(GL_TRIANGLES);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3dv(D);
	glVertex3dv(E);
	glVertex3dv(F);
	glEnd();
	/*glBegin(GL_TRIANGLES);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3dv(C);
	glVertex3dv(D);
	glVertex3dv(N);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3dv(C);
	glVertex3dv(N);
	glVertex3dv(B);
	glEnd();*/

	//вторые точки
	double A1[] = { 1.987,2.498,2 };
	double B1[] = { 4,3,2 };
	double C1[] = { 2,9,2 };
	double D1[] = { 8,6,2 };
	double E1[] = { 12,10,2 };
	double F1[] = { 9,0,2 };
	double N1[] = { 6,2,2 };
	glBegin(GL_TRIANGLES);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3dv(D1);
	glVertex3dv(E1);
	glVertex3dv(F1);
	glEnd();
	/*glBegin(GL_TRIANGLES);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3dv(C1);
	glVertex3dv(D1);
	glVertex3dv(N1);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3dv(C1);
	glVertex3dv(N1);
	glVertex3dv(B1);
	glEnd();*/

	//стороны

	glBegin(GL_QUADS);
	glColor3d(0, 0.5, 0.5);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(B1);
	glVertex3dv(A1);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0, 0.5, 0.5);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(C1);
	glVertex3dv(B1);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0, 0.5, 0.5);
	glVertex3dv(C);
	glVertex3dv(D);
	glVertex3dv(D1);
	glVertex3dv(C1);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0, 0.5, 0.5);
	glVertex3dv(D);
	glVertex3dv(E);
	glVertex3dv(E1);
	glVertex3dv(D1);
	glEnd();


	double x, y, x1, y1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0.5, 0.5, 0.5);
	glVertex3d(10.5, 5, 2);
	for (double a = -47.69; a < 14.3; a += 0.01) {
		x = 2.16667 + cos(a*pi / 180)*10.15;
		y = 7.5 + sin(a*pi / 180)*10.15;
		glVertex3d(x, y, 2);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3d(10.5, 5, 0);
	for (double a = -47.69; a < 14.3; a += 0.01) {
		x = 2.16667 + cos(a*pi / 180)*10.15;
		y = 7.5 + sin(a*pi / 180)*10.15;
		glVertex3d(x, y, 0);
	}
	glEnd();

	double S[3], T[3], U[3], O[3];

	x1 = 12;
	y1 = 10;
	glBegin(GL_QUADS);
	glColor3d(0.31, 0.5, 0.222);
	for (double a = -47.69; a < 14.3; a += 0.01) {
		x = 2.16667 + cos(a*pi / 180)*10.15;
		y = 7.5 + sin(a*pi / 180)*10.15;
		S[0] = x1;
		S[1] = y1;
		S[2] = 2;
		T[0] = x1;
		T[1] = y1;
		T[2] = 0;
		U[0] = x;
		U[1] = y;
		U[2] = 0;
		O[0] = x;
		O[1] = y;
		O[2] = 2;
		glVertex3dv(S);
		glVertex3dv(T);
		glVertex3dv(U);
		glVertex3dv(O);
		x1 = x;
		y1 = y;
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3d(8, 6, 0);
	for (double a = 43.75; a < 80; a += 0.01) {
		x = 3 + cos(a*pi / 180)*8.31;
		y = -5.75 + sin(a*pi / 180)*8.31;
		glVertex3d(x, y, 0);
	}
	double kek = x;
	double shpek = y;
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3d(4, 3, 0);
	for (double a = 80; a < 97; a += 0.01) {
		x = 3 + cos(a*pi / 180)*8.31;
		y = -5.75 + sin(a*pi / 180)*8.31;
		glVertex3d(x, y, 0);
	}
	glEnd();
	x1 = 9;
	y1 = 0;
	glBegin(GL_QUADS);
	glColor3d(0.5, 0.123, 0.222);
	for (double a = 43.75; a < 80; a += 0.01) {
		x = 3 + cos(a*pi / 180)*8.31;
		y = -5.75 + sin(a*pi / 180)*8.31;
		S[0] = x1;
		S[1] = y1;
		S[2] = 2;
		T[0] = x1;
		T[1] = y1;
		T[2] = 0;
		U[0] = x;
		U[1] = y;
		U[2] = 0;
		O[0] = x;
		O[1] = y;
		O[2] = 2;
		glVertex3dv(S);
		glVertex3dv(T);
		glVertex3dv(U);
		glVertex3dv(O);
		x1 = x;
		y1 = y;
	}
	for (double a = 80; a < 97; a += 0.01) {
		x = 3 + cos(a*pi / 180)*8.31;
		y = -5.75 + sin(a*pi / 180)*8.31;
		S[0] = x1;
		S[1] = y1;
		S[2] = 2;
		T[0] = x1;
		T[1] = y1;
		T[2] = 0;
		U[0] = x;
		U[1] = y;
		U[2] = 0;
		O[0] = x;
		O[1] = y;
		O[2] = 2;
		glVertex3dv(S);
		glVertex3dv(T);
		glVertex3dv(U);
		glVertex3dv(O);
		x1 = x;
		y1 = y;
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3d(8, 6, 2);
	for (double a = 43.75; a < 80; a += 0.01) {
		x = 3 + cos(a*pi / 180)*8.31;
		y = -5.75 + sin(a*pi / 180)*8.31;
		glVertex3d(x, y, 2);
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0.31, 0.123, 0.222);
	glVertex3d(4, 3, 2);
	for (double a = 80; a < 97; a += 0.01) {
		x = 3 + cos(a*pi / 180)*8.31;
		y = -5.75 + sin(a*pi / 180)*8.31;
		glVertex3d(x, y, 2);
	}
	glEnd();
	double lal[] = {kek, shpek, 0};
	glBegin(GL_QUADS);
	glColor3d(1, 0.5, 0.5);
	glVertex3dv(C);
	glVertex3dv(D);
	glVertex3dv(lal);
	glVertex3dv(B);
	glEnd();
	double lal1[] = { kek, shpek, 2.0};

	glBegin(GL_QUADS);
	glColor3d(0, 0.2, 0.5);
	glVertex3dv(C1);
	glVertex3dv(D1);
	glVertex3dv(lal1);
	glVertex3dv(B1);
	glEnd();
}   

