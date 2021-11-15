//PEDRO HENRIQUE BARRETO DOS SANTOS - 475626
#include <iostream>
using namespace std;

void instrucoes(const char *text, int length, int x, int y){//FUNCAO PARA IMPRIMIR TEXTO NA TELA

	glMatrixMode(GL_PROJECTION);
	double *matrix = new double[16];
	glGetDoublev(GL_PROJECTION_MATRIX,matrix);
	glLoadIdentity();
	glOrtho(0,w,0,h,-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glRasterPos2i(x,y);
	for(int i = 0 ; i < length ; i++){

		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, (int)text[i]);

	}
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);

}

void escrever(){//IMPRIMINDO O TEXTO NA JANELA

	std::string text;

    glColor3f(1.0 , 1.0 , 1.0);//COR DAS LETRAS
	text = "MUDE AS CORES DAS PECAS";//TEXTO QUE QUERO IMPRIMIR
	instrucoes(text.data()  , text.size()  , 5 , h + calcAlturaTela - 20);//IMPRIMIR E COLOCAR COORDENADAS X E Y
	text = "1 - VERMELHO";
	instrucoes(text.data()  , text.size()  , 5 , h + calcAlturaTela - 40);
	text = "2 - VERDE";
	instrucoes(text.data()  , text.size()  , 5 , h + calcAlturaTela - 60);
	text = "3 - AZUL";
	instrucoes(text.data()  , text.size()  , 5 , h + calcAlturaTela - 80);
	text = "4 - CIANO";
	instrucoes(text.data()  , text.size()  , 5 , h + calcAlturaTela - 100);
	text = "5 - AMARELO";
	instrucoes(text.data()  , text.size()  , 5 , h + calcAlturaTela - 120);
	text = "6 - ROXO";
	instrucoes(text.data()  , text.size()  , 5 , h + calcAlturaTela - 140);
	text = "7 - LARANJA";
	instrucoes(text.data()  , text.size()  , 5 , h + calcAlturaTela - 160);

}