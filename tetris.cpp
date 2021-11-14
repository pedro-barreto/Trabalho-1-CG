//PEDRO HENRIQUE BARRETO DOS SANTOS - 475626
#include <GL/glut.h>
#include "variaveisGlobais.h"//TODAS AS VARIAVEIS GLOBAIS FICARAM AQUI
#include "funcoes/criarPecas.h"//A CRIACAO DO QUADRADO DAS PECAS E AS PECAS FICARAM AQUI
#include "funcoes/hitbox.h"//A FUNCAO QUE VAI VER SE O MOUSE CLICOU NA PECA FICA AQUI
#include "funcoes/arrastarPeca.h"//A FUNCAO QUE VAI PERMITIR ARRASTAR A PECA SEM LAG
#include "funcoes/mudarCorPeca.h"//A FUNCAO QUE VAI PERMITIR O USUARIO MUDAR A COR DA PECA

//FUNCAO INICIALIZAR
void inicializar(){

	glClearColor(0.2 , 0.4 , 0.8 , 1);//COR MEIO AZULADA
    glLineWidth(3.0);//AUMENTO DAS LINHAS/ARESTAS PARA DAR DESTAQUE NAS BORDAS

}

void resolucao(int widht, int height){//CALCULA O ACRESCIMO DA TELA PARA AJUSTAR O MOUSE

	calcLarguraTela = widht  - w;//DISTANCIA DA TELA MAXIMA - MENOS A INICIAL = QUANTIDADE AUMENTADA
	calcAlturaTela  = height - h;//DISTANCIA DA TELA MAXIMA - MENOS A INICIAL = QUANTIDADE AUMENTADA

}

void desenha() {//FUNCAO DESENHA PARA RENDERIZAR

	glClear(GL_COLOR_BUFFER_BIT);//SERVE PARA APAGAR O QUE TEM NA TELA

	//AJUSTE DA TELA, PARA NAO FICAR -1 A 1
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0 , w - 1, 0 , h - 1, -1 , 1 );//DEFININDO O TAMANHO DA JANELA/MUNDO

		//RENDERIZACAO DE TODAS AS PECAS
		pecaLaranja();
		pecaRoxa();
		pecaAmarela();
		pecaCiana();
		pecaAzul();
		pecaVerde(); 
		pecaVermelha();
       
    glutSwapBuffers();//DESENHA

}

//FUNCAO MAIN PARA DEFINIR A JANELA E CHAMAR TODAS AS FUNCOES ANTERIORES
int main(int argc, char** argv) {

	//CONFIGURACAO DAS TELAS
    glutInit(&argc, argv);// INICIALIZA A BIBLIOTECA GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);//CONFIGURACOES DO FRAME BUFFER
    glutInitWindowPosition(0, 0);//POSICAO QUE A TELA VAI INICIAR
    glutInitWindowSize(w, h);//TAMANHO DA TELA
    glutCreateWindow("TETRIS - 475626");//TITULO QUE FICARA NA JANELA

	//CHAMANDO AS FUNCOES ANTERIORES
	inicializar();//COR DO FUNDO E LARGURA DAS ARESTAS/LINHAS

	glutDisplayFunc(desenha);//FUNCAO DE PINTAR/IMPRIMIR
	glutReshapeFunc(resolucao);//FUNCAO PARA AJUSTAR RESOLUCAO
	glutMouseFunc(mouseClique);//FUNCAO QUE VERIFICA O CLIQUE/HITBOX DO OBJETO
	glutMotionFunc(mouseArrasto);//FUNCAO QUE IRA ARRASTAR O OBJETO
	glutKeyboardFunc(tecladoCor);//FUNCAO QUE O USUARIO IRA MUDAR A COR DO OBJETO SELECIONADO

	glutMainLoop();//DEIXANDO EM LOOP INFINITO, PARA MOSTRAR A JANELA E SEUS ATRIBUTOS

}

//cd Trabalho-1-CG
//g++ tetris.cpp -o main.exe -lopengl32 -lfreeglut
//start main.exe