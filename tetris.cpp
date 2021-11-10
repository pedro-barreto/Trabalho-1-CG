#include <GL/glut.h>
#include <iostream>
using namespace std;

float w = 600;
float h = 500;

float posX    = 0.00 , posY   = 0.00,
	  largura = 0.15 , altura = 0.15;

float r, g, b , peca = 1;

int rotacao = 0;

void quadrado(float posX, float posY){

	glColor3f(r,g,b);

		glBegin(GL_TRIANGLE_STRIP);

			glVertex2f(posX           , posY          );
			glVertex2f(posX           , posY + altura );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );		

		glEnd();

	glColor3f(0,0,0);

		glBegin(GL_LINE_LOOP);

			glVertex2f(posX           , posY          );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );
			glVertex2f(posX           , posY + altura );

		glEnd();

}

void pecaAzul(){

	r = 0; g = 0; b = 1;

	quadrado(posX           , posY              );
	quadrado(posX           , posY - 1 * altura );
	quadrado(posX           , posY - 2 * altura );
	quadrado(posX - largura , posY - 2 * altura );

}

void pecaVerde(){

	r = 0; g = 1; b = 0;

	quadrado(posX           , posY              );
	quadrado(posX           , posY - 1 * altura );
	quadrado(posX           , posY - 2 * altura );
	quadrado(posX + largura , posY - 2 * altura );

}

void pecaVermelha(){

	r = 1; g = 0; b = 0;

	quadrado(posX           , posY          );
	quadrado(posX + largura , posY          );
	quadrado(posX           , posY - altura );
	quadrado(posX + largura , posY - altura );

}

void pecaAmarela(){

	r = 1; g = 1; b = 0;

	quadrado(posX               , posY          );
	quadrado(posX - largura     , posY          );
	quadrado(posX + largura     , posY          );
	quadrado(posX               , posY - altura );

}

void pecaRoxa(){

	r = 0.5; g = 0; b = 1;

	quadrado(posX               , posY          );
	quadrado(posX + largura     , posY          );
	quadrado(posX               , posY - altura );
	quadrado(posX - largura     , posY - altura );

}

void pecaLaranja(){

	r = 1; g = 0.5; b = 0;

	quadrado(posX               , posY          );
	quadrado(posX - largura     , posY          );
	quadrado(posX               , posY - altura );
	quadrado(posX + largura     , posY - altura );

}

void pecaCiana(){

	r = 0; g = 1; b = 1;

	quadrado(posX , posY              );
	quadrado(posX , posY + altura     );
	quadrado(posX , posY - altura     );
	quadrado(posX , posY - 2 * altura );

}

void inicializar() {

	glClearColor(1,1,1,1);
    glLineWidth(3.0);

}

void ecolherPeca(unsigned char key, int x, int y){

	switch (key){

		case '1' : peca = 1; break;
		case '2' : peca = 2; break;
		case '3' : peca = 3; break;
		case '4' : peca = 4; break;
		case '5' : peca = 5; break;
		case '6' : peca = 6; break;
		case '7' : peca = 7; break;

	}
    
    glutPostRedisplay();
	
}

void textPecas(const char *text, int length, int x, int y){

	glMatrixMode(GL_PROJECTION);
	double *matrix = new double[16];
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	glOrtho( 0 , w , -h , 15 , -1 , 1 );
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glRasterPos2i(x,y);
	for(int i = 0; i < length; i++){

		glutBitmapCharacter(GLUT_BITMAP_9_BY_15,(int)text[i]);

	}
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);
	
}

void moverPeca(int key, int x, int y){

    switch(key){

        case GLUT_KEY_LEFT:  posX -= 0.05; break;
        case GLUT_KEY_RIGHT: posX += 0.05; break;
        case GLUT_KEY_DOWN:  posY -= 0.05; break;
        case GLUT_KEY_UP:    posY += 0.05; break;

    }

    glutPostRedisplay();

}

void desenha() {

	glClear(GL_COLOR_BUFFER_BIT);

		if(peca == 1){

			pecaVermelha();

		}else if(peca == 2){

			pecaVerde();

		}else if(peca == 3){

			pecaAzul();

		}else if(peca == 4){

			pecaCiana();
			
		}else if(peca == 5){

			pecaAmarela();
			
		}else if(peca == 6){

			pecaRoxa();	

		}else if(peca == 7){

			pecaLaranja();

		}

		std::string text;
		text = "Digite de 1 a 7 para ecolher a peca / cor";
		textPecas(text.data(),text.size(),0,0);

	glFlush();

}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
    glutInitWindowPosition(450, 150);
    glutInitWindowSize(w, h);
    glutCreateWindow("Teste");

	inicializar();

	glutDisplayFunc(desenha);

	glutKeyboardFunc(ecolherPeca);
	glutSpecialFunc(moverPeca);

	glutMainLoop();

}

//cd Trabalho-1-CG
//g++ tetris.cpp -o main.exe -lopengl32 -lfreeglut
//start main.exe