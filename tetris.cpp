#include <GL/glut.h>
#include <iostream>
using namespace std;

float w = 600;
float h = 600;

float posX    = 270 , posY   = 320,
	  largura = 50 , altura = 50;

float r, g, b , peca = 1;
float rS = 0 , gS = 0 , bS = 0;

void quadrado(float posX, float posY){

	glColor3f(r,g,b);

		glBegin(GL_TRIANGLE_STRIP);

			glVertex2f(posX           , posY          );
			glVertex2f(posX           , posY + altura );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );		

		glEnd();

	glColor3f(rS,gS,bS);

		glBegin(GL_LINE_LOOP);

			glVertex2f(posX           , posY          );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );
			glVertex2f(posX           , posY + altura );

		glEnd();

}


void pecaVermelha(){

	r = 1; g = 0; b = 0;

	quadrado(posX           , posY          );
	quadrado(posX + largura , posY          );
	quadrado(posX           , posY - altura );
	quadrado(posX + largura , posY - altura );

}

void pecaVerde(){

	r = 0; g = 1; b = 0;

	quadrado(posX           , posY              );
	quadrado(posX           , posY - 1 * altura );
	quadrado(posX           , posY - 2 * altura );
	quadrado(posX + largura , posY - 2 * altura );

}

void pecaAzul(){

	r = 0; g = 0; b = 1;

	quadrado(posX           , posY              );
	quadrado(posX           , posY - 1 * altura );
	quadrado(posX           , posY - 2 * altura );
	quadrado(posX - largura , posY - 2 * altura );

}


void pecaCiana(){

	r = 0; g = 1; b = 1;

	quadrado(posX , posY              );
	quadrado(posX , posY + altura     );
	quadrado(posX , posY - altura     );
	quadrado(posX , posY - 2 * altura );

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

void inicializar() {

	glClearColor(0.2,0.5,1,1);
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

void moverPeca(int key, int x, int y){

    switch(key){

        case GLUT_KEY_LEFT:  posX -= 10; break;
        case GLUT_KEY_RIGHT: posX += 10; break;
        case GLUT_KEY_DOWN:  posY -= 10; break;
        case GLUT_KEY_UP:    posY += 10; break;

    }

    glutPostRedisplay();

}

float posYR;

void mouseClique(int button, int state, int x, int y){
	
	if(button == GLUT_LEFT && state == GLUT_DOWN){ 
        
		posYR = w - posY - altura;

		if(peca == 1){

			if(x >= posX && x <= posX + 2 * largura && y >= posYR && y <= posYR + 2 * altura){

				cout << "clicou na vermelha" << endl;
				rS = 0.7, gS = 0.7, bS = 0.7;

			}else{

				rS = 0, gS = 0, bS = 0;

			}

		}else if(peca == 2){

			if(x >= posX && x <= posX + largura && y >= posYR && y <= posYR + 3 * altura ||
			 x >= posX && x <= posX + 2 * largura && y >= posYR + 2 * altura && y <= posYR + 3* altura){

				cout << "clicou na verde" << endl;
				rS = 0.7, gS = 0.7, bS = 0.7;

			}else{

				rS = 0, gS = 0, bS = 0;

			}
			
		}else if(peca == 3){

			if(x >= posX && x <= posX + largura && y >= posYR && y <= posYR + 3 * altura ||
			 x >= posX - largura && x <= posX + largura && y >= posYR + 2 * altura && y <= posYR + 3* altura){

				cout << "clicou na azul" << endl;
				rS = 0.7, gS = 0.7, bS = 0.7;

			}else{

				rS = 0, gS = 0, bS = 0;

			}

			
		}else if(peca == 4){

			if(x >= posX && x <= posX + largura && y >= posYR - altura && y <= posYR + 3 * altura){

				cout << "clicou na ciana" << endl;
				rS = 0.7, gS = 0.7, bS = 0.7;

			}else{

				rS = 0, gS = 0, bS = 0;

			}
			
		}else if(peca == 5){

			if(x >= posX - largura && x <= posX + 2 * largura && y >= posYR && y <= posYR + altura ||
			   x >= posX && x <= posX + largura && y >= posYR + altura && y <= posYR + 2 * altura){

				cout << "clicou na amarela" << endl;
				rS = 0.7, gS = 0.7, bS = 0.7;

			}else{

				rS = 0, gS = 0, bS = 0;

			}
			
		}else if(peca == 6){

			if(x >= posX && x <= posX + 2 * largura && y >= posYR && y <= posYR + altura||
			   x >= posX - largura && x <= posX + largura && y >= posYR + altura && y <= posYR + 2 * altura){

				cout << "clicou na roxa" << endl;
				rS = 0.7, gS = 0.7, bS = 0.7;

			}else{

				rS = 0, gS = 0, bS = 0;

			}
			
		}else if(peca == 7){

			if(x >= posX - largura && x <= posX + largura && y >= posYR && y <= posYR + altura||
			   x >= posX && x <= posX + 2 * largura && y >= posYR + altura && y <= posYR + 2 * altura){

				cout << "clicou na laranja" << endl;
				rS = 0.7, gS = 0.7, bS = 0.7;

			}else{

				rS = 0, gS = 0, bS = 0;

			}
			
		}else{

			cout << "erro" << endl;

		}

    }
}

void desenha() {

	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,w,0,h,-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

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
	glutMouseFunc(mouseClique);

	glutMainLoop();

}

//cd Trabalho-1-CG
//g++ tetris.cpp -o main.exe -lopengl32 -lfreeglut
//start main.exe