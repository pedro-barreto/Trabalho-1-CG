//PEDRO HENRIQUE BARRETO DOS SANTOS - 475626
#include <GL/glut.h>
#include <iostream>
using namespace std;

int angRotacao = 0;

//WIDTH E HEIGHT DA JANELA

float h = 900;
float w = 1440;

//TAMANHO DAS PECAS

float largura = 50 , altura = 50;

//POSICAO DAS PECAS

float vermelhoPosX = 070 , vermelhoPosY = 120;
float verdePosX    = 070 , verdePosY    = 320;
float azulPosX     = 070 , azulPosY     = 470;
float cianoPosX    = 270 , cianoPosY    = 220;
float amarelaPosX  = 220 , amarelaPosY  = 360;
float roxoPosX     = 420 , roxoPosY     = 120;
float laranjaPosX  = 420 , laranjaPosY  = 320;

//VERIFICADOR, VAI VERIFICAR SE A PECA FOI SELECIONADA PARA PODE ROTACIONAR OU ARRASTAR

bool vermelho = false;
bool verde    = false;
bool azul     = false;
bool ciano    = false;
bool amarelo  = false;
bool roxo     = false;
bool laranja  = false;


//RGB DAS PECAS
float r , g , b ;

float vermelhoR, vermelhoG, vermelhoB;

//RGB DAS BORDAS PARA MOSTRAR QUE FORAM SELECIONADAS
float rBorda = 0 , gBorda = 0 , bBorda = 0 ;

//FUNCAO PARA CRIAR 1 QUADRADO, JA QUE TODAS AS PECAS SAO FEITAS COM 4 QUADRADOS
void quadrado(float posX, float posY){

	//COR QUE VAI SER DEFINIDA NA CRIACAO DAS PECAS
	glColor3f(r,g,b);

		//FIZ UM QUADRADO COM 2 TRIANGULOS
		glBegin(GL_TRIANGLE_STRIP);

			//AS 4 POSICOES DO QUADRADO
			glVertex2f(posX           , posY          );
			glVertex2f(posX           , posY + altura );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );

		glEnd();

	//COR DA BORDA QUE VAI SER DEFINIDA COM O CLICK
	glColor3f(rBorda,gBorda,bBorda);

		//UM LINE LOOP PARA CIRCULAR O QUADRADO
		glBegin(GL_LINE_LOOP);

			//AS 4 POSICOES DO CONTORNO
			glVertex2f(posX           , posY          );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );
			glVertex2f(posX           , posY + altura );

		glEnd();

}

//PECA VERMELHA
void pecaVermelha(){

	//COR DA PECA
	r = 1; g = 0; b = 0;

	if(vermelho){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(vermelhoPosX           , vermelhoPosY          );
	quadrado(vermelhoPosX + largura , vermelhoPosY          );
	quadrado(vermelhoPosX           , vermelhoPosY - altura );
	quadrado(vermelhoPosX + largura , vermelhoPosY - altura );

}

//PECA VERDE
void pecaVerde(){

	//COR DA PECA
	r = 0; g = 1; b = 0;

	if(verde){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(verdePosX           , verdePosY              );
	quadrado(verdePosX           , verdePosY - 1 * altura );
	quadrado(verdePosX           , verdePosY - 2 * altura );
	quadrado(verdePosX + largura , verdePosY - 2 * altura );

}

//PECA AZUL
void pecaAzul(){

	//COR DA PECA
	r = 0; g = 0; b = 1;

	if(azul){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(azulPosX           , azulPosY              );
	quadrado(azulPosX + largura , azulPosY              );
	quadrado(azulPosX + largura , azulPosY + 1 * altura );
	quadrado(azulPosX + largura , azulPosY + 2 * altura );

}

//PECA CIANA
void pecaCiana(){

	//COR DA PECA
	r = 0; g = 1; b = 1;

	if(ciano){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(cianoPosX , cianoPosY              );
	quadrado(cianoPosX , cianoPosY - 1 * altura );
	quadrado(cianoPosX , cianoPosY - 2 * altura );
	quadrado(cianoPosX , cianoPosY - 3 * altura );

}

//PECA AMARELA
void pecaAmarela(){

	//COR DA PECA
	r = 1; g = 1; b = 0;

	if(amarelo){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(amarelaPosX               , amarelaPosY          );
	quadrado(amarelaPosX + 1 * largura , amarelaPosY          );
	quadrado(amarelaPosX + 2 * largura , amarelaPosY          );
	quadrado(amarelaPosX + 1 * largura , amarelaPosY - altura );

}

//PECA ROXA
void pecaRoxa(){

	//COR DA PECA
	r = 0.5; g = 0; b = 1;

	if(roxo){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(roxoPosX               , roxoPosY          );
	quadrado(roxoPosX + 1 * largura , roxoPosY          );
	quadrado(roxoPosX + 1 * largura , roxoPosY + altura );
	quadrado(roxoPosX + 2 * largura , roxoPosY + altura );

}

//PECA LARANJA
void pecaLaranja(){

	//COR DA PECA
	r = 1 ; g = 0.5 ; b = 0 ;

	if(laranja){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(laranjaPosX               , laranjaPosY          );
	quadrado(laranjaPosX + 1 * largura , laranjaPosY          );
	quadrado(laranjaPosX + 1 * largura , laranjaPosY - altura );
	quadrado(laranjaPosX + 2 * largura , laranjaPosY - altura );

}

//FUNCAO INICIALIZAR, COR DE FUNDO MEIO AZULADA E TAMANHO DAS LINHA 3, PARA DAR MAIS DESTAQUE NO CONTORNO DAS PECAS
void inicializar() {

	glClearColor(0.2,0.4,0.8,1);
    glLineWidth(3.0);

}

float  calcLarguraTela, calcAlturaTela;
//CALCULA O ACRESCIMO DA TELA PARA AJUSTAR O MOUSE
void resolucao(int widht, int height){

	calcLarguraTela = widht  - w; 
	calcAlturaTela  = height - h;

}

//A DISTANCIA DO CLIQUE PARA O VETOR DE PRODRUCAO DA PECA, PARA EVITAR TELEPORTE
float distanciaX;
float distanciaY;

//FUNCAO MOUSE
void mouseClique(int button, int state, int x, int y){

	//VERIFICA SE O USUARIO CLICOU COM O BOTAO ESQUERDO
	if(button == GLUT_LEFT && state == GLUT_DOWN){ 
		
		//AJUSTE DA COORDENADA Y
		float vermelhoPosYR = h - vermelhoPosY - altura + calcAlturaTela;
		float verdePosYR    = h - verdePosY    - altura + calcAlturaTela;
		float azulPosYR     = h - azulPosY     - altura + calcAlturaTela;
		float cianoPosYR    = h - cianoPosY    - altura + calcAlturaTela;
		float amarelaPosYR  = h - amarelaPosY  - altura + calcAlturaTela;
		float roxoPosYR     = h - roxoPosY     - altura + calcAlturaTela;
		float laranjaPosYR  = h - laranjaPosY  - altura + calcAlturaTela;

		//VERIFICA SE A AREA/POSICAO DO VEMELHO FOI SELECIONADO
		if(x >= vermelhoPosX  && x <= vermelhoPosX  + 2 * largura && 
		   y >= vermelhoPosYR && y <= vermelhoPosYR + 2 * altura){

			//CASO SEJA TRUE VERMELHO SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = true;
			verde    = false;
			azul     = false;
			ciano    = false;
			amarelo  = false;
			roxo     = false;
			laranja  = false;

			distanciaX = x     - vermelhoPosX;
			distanciaY = h - y - vermelhoPosY;

		//VERIFICA SE A AREA/POSICAO DO VERDE FOI SELECIONADO
		}else if(x >= verdePosX  && x <= verdePosX  + 1 * largura && 
		         y >= verdePosYR && y <= verdePosYR + 2 * altura  ||
			     x >= verdePosX  && x <= verdePosX  + 2 * largura && 
				 y >= verdePosYR + 2 * altura && y <= verdePosYR + 3 * altura){

			//CASO SEJA TRUE VERDE SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde    = true;
			azul     = false;
			ciano    = false;
			amarelo  = false;
			roxo     = false;
			laranja  = false;

			distanciaX = x     - verdePosX;
			distanciaY = h - y - verdePosY;

		//VERIFICA SE A AREA/POSICAO DO AZUL FOI SELECIONADO
		}else if(x >= azulPosX  + 1 * largura && x <= azulPosX  + 2 * altura &&
				 y >= azulPosYR - 2 * altura  && y <= azulPosYR + 1 * altura ||
				 x >= azulPosX  && x <= azulPosX  + 2 * largura &&
				 y >= azulPosYR && y <= azulPosYR + 1 * altura ){

			//CASO SEJA TRUE AZUL SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde    = false;
			azul     = true;
			ciano    = false;
			amarelo  = false;
			roxo     = false;
			laranja  = false;

			distanciaX = x     - azulPosX;
			distanciaY = h - y - azulPosY;

		//VERIFICA SE A AREA/POSICAO DO CIANO FOI SELECIONADO
		}else if(x >= cianoPosX  && x <= cianoPosX  + 1 * largura && 
		         y >= cianoPosYR && y <= cianoPosYR + 4 * altura){

			//CASO SEJA TRUE CIANO SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde    = false;
			azul     = false;
			ciano    = true;
			amarelo  = false;
			roxo     = false;
			laranja  = false;

			distanciaX = x     - cianoPosX;
			distanciaY = h - y - cianoPosY;

		//VERIFICA SE A AREA/POSICAO DO AMARELO FOI SELECIONADO
		}else if(x >= amarelaPosX  && x <= amarelaPosX  +  3 * largura && 
		         y >= amarelaPosYR && y <= amarelaPosYR +  1 * altura  ||
			     x >= amarelaPosX  + largura && x <= amarelaPosX  + 2 * largura && 
				 y >= amarelaPosYR + altura  && y <= amarelaPosYR + 2 * altura){

			//CASO SEJA TRUE AMARELO SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde    = false;
			azul     = false;
			ciano    = false;
			amarelo  = true;
			roxo     = false;
			laranja  = false;

			distanciaX = x     - amarelaPosX;
			distanciaY = h - y - amarelaPosY;

		//VERIFICA SE A AREA/POSICAO DO ROXO FOI SELECIONADO
		}else if(x >= roxoPosX  && x <= roxoPosX  + 2 * largura && 
		         y >= roxoPosYR && y <= roxoPosYR + 1 * altura  ||
			     x >= roxoPosX  + largura && x <= roxoPosX + 3 * largura && 
				 y >= roxoPosYR - altura  && y <= roxoPosYR){

			//CASO SEJA TRUE ROXO SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde    = false;
			azul     = false;
			ciano    = false;
			amarelo  = false;
			roxo     = true;
			laranja  = false;

			distanciaX = x     - roxoPosX;
			distanciaY = h - y - roxoPosY;

		//VERIFICA SE A AREA/POSICAO DO LARANJA FOI SELECIONADO
		}else if(x >= laranjaPosX  && x <= laranjaPosX  + 2 * largura && 
		         y >= laranjaPosYR && y <= laranjaPosYR + 1 * altura  ||
			     x >= laranjaPosX  + largura && x <= laranjaPosX  + 3 * largura && 
				 y >= laranjaPosYR + altura  && y <= laranjaPosYR + 2 * altura){

			//CASO SEJA TRUE LARANJA SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde    = false;
			azul     = false;
			ciano    = false;
			amarelo  = false;
			roxo     = false;
			laranja  = true;

			distanciaX = x     - laranjaPosX;
			distanciaY = h - y - laranjaPosY;

		//CASO NENHUMA DAS ALTERNATIVAS SEJA TRUE SERA CONSIDERADO QUE O CLICK FOI NO FUNDO
		}else{

			//JA QUE O CLICK NAO FOI EM NENHUMA PECA, TODOS SERAO DESMARCADOS
			vermelho = false;
			verde    = false;
			azul     = false;
			ciano    = false;
			amarelo  = false;
			roxo     = false;
			laranja  = false;

		}

    }

	glutPostRedisplay();

}

//FUNCAO PARA MOVIMENTAR AS PECAS
void mouseArrasto(int x, int y){

	//VARIAVEIS CRIADAS PARA ORGANIZACAO
    float coord_x = x;
    float coord_y = h - y;

	//MOVIMENTACAO DA PECA LEVANDO EM CONSIDERACAO A DISTANCIA DO MOUSE E DO VETOR DE PRODUCAO DA PECA
	if (vermelho){
		
		vermelhoPosX = coord_x - distanciaX;
		vermelhoPosY = coord_y - distanciaY;

	}else if(verde){

		verdePosX = coord_x - distanciaX;
		verdePosY = coord_y - distanciaY;

	}else if(azul){

		azulPosX = coord_x - distanciaX;
		azulPosY = coord_y - distanciaY;

	}else if(ciano){

		cianoPosX = coord_x - distanciaX;
		cianoPosY = coord_y - distanciaY;

	}else if(amarelo){

		amarelaPosX = coord_x - distanciaX;
		amarelaPosY = coord_y - distanciaY;

	}else if(roxo){

		roxoPosX = coord_x - distanciaX;
		roxoPosY = coord_y - distanciaY;

	}else if(laranja){

		laranjaPosX = coord_x - distanciaX;
		laranjaPosY = coord_y - distanciaY;

	}
    
    glutPostRedisplay();

}

void tecladoRotacao(unsigned char key, int x, int y){

    if(vermelho || verde || azul || ciano || amarelo || roxo || laranja){

        switch(key){

        case 'z': 
        case 'Z': 

			angRotacao += 10;

			if(angRotacao >= 360 ){

				angRotacao = 0;

			}

            cout << "Sentido anti-horario" << endl;

		break;

		case 'x': 
        case 'X': 

			angRotacao -= 10;

			if(angRotacao <= -360 ){

				angRotacao = 0;

			}

            cout << "Sentido horario" << endl;

		break;

        }

    }
    
    glutPostRedisplay();

}

//FUNCAO DESENHA PARA RENDERIZAR
void desenha() {

	//SERVE PARA APAGAR O QUE TEM NA TELA E DENHAR NOVAMENTE
	glClear(GL_COLOR_BUFFER_BIT);

	//SERVE PARA AJUSTAR PARA A MESMA PROPORCAO DA TELA, PARA QUE O CLICK FUNCIONE
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0 , w-1 , 0 , h-1 , -1 , 1 );

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

		//RENDERIZACAO DE TODAS AS PECAS
		pecaLaranja();

		pecaRoxa();

		pecaAmarela();

		pecaCiana();
		
		pecaAzul();

		pecaVerde(); 
 
		pecaVermelha();
                
    glutSwapBuffers();

}

//FUNCAO MAIN PARA DEFINIR A JANELA E CHAMAR TODAS AS FUNCOES ANTERIORES
int main(int argc, char** argv) {

	//CONFIGURACAO DAS TELAS
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(w, h);
    glutCreateWindow("Teste");

	//CHAMANDO AS FUNCOES ANTERIORES
	inicializar();

	glutDisplayFunc(desenha);
	glutReshapeFunc(resolucao);
	glutMouseFunc(mouseClique);
	glutMotionFunc(mouseArrasto);
	glutKeyboardFunc(tecladoRotacao);

	//DEIXANDO EM LOOP INFINITO
	glutMainLoop();

}

//cd Trabalho-1-CG
//g++ tetris.cpp -o main.exe -lopengl32 -lfreeglut
//start main.exe