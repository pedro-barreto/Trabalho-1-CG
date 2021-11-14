//PEDRO HENRIQUE BARRETO DOS SANTOS - 475626
#include <GL/glut.h>
#include <iostream>
using namespace std;

//HEIGHT E WIDTH DA JANELA
int h = 900;
int w = 1440;

//TAMANHO DAS PECAS
float largura = 50.0 , altura = 50.0;

//POSICAO DAS PECAS
float vermelhoPosX = 070.0 , vermelhoPosY = 120.0;
float verdePosX    = 070.0 , verdePosY    = 320.0;
float azulPosX     = 070.0 , azulPosY     = 470.0;
float cianoPosX    = 270.0 , cianoPosY    = 220.0;
float amarelaPosX  = 220.0 , amarelaPosY  = 360.0;
float roxoPosX     = 420.0 , roxoPosY     = 120.0;
float laranjaPosX  = 420.0 , laranjaPosY  = 320.0;

//VERIFICADOR, VAI VERIFICAR SE A PECA FOI SELECIONADA PARA PODE ROTACIONAR OU ARRASTAR
bool vermelho = false;
bool verde    = false;
bool azul     = false;
bool ciano    = false;
bool amarelo  = false;
bool roxo     = false;
bool laranja  = false;

float r , g , b ;//RGB DAS PECAS

//CORES QUE VAO SER MUDADAS AO SEREM SELECIONADAS
float vermelhoR = 1.0 , vermelhoG = 0.0 , vermelhoB = 0.0;
float verdeR    = 0.0 , verdeG    = 1.0 , verdeB    = 0.0;
float azulR     = 0.0 , azulG     = 0.0 , azulB     = 1.0;
float cianoR    = 0.0 , cianoG    = 1.0 , cianoB    = 1.0;
float amareloR  = 1.0 , amareloG  = 1.0 , amareloB  = 0.0;
float laranjaR  = 0.5 , laranjaG  = 0.0 , laranjaB  = 1.0;
float roxoR     = 1.0 , roxoG     = 0.5 , roxoB     = 0.0;

float bordaR , bordaG , bordaB ;//RGB DAS BORDAS PARA MOSTRAR QUE FORAM SELECIONADAS

//FUNCAO PARA CRIAR 1 QUADRADO, JA QUE TODAS AS PECAS SAO FEITAS COM 4 QUADRADOS
void quadrado(float posX, float posY){

	glColor3f(r,g,b);//COR QUE VAI SER DEFINIDA NA CRIACAO DAS PECAS

		glBegin(GL_QUADS);//PRODUCAO DA PECA

			//AS 4 POSICOES DO QUADRADO
			glVertex2f(posX           , posY          );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );
			glVertex2f(posX           , posY + altura );

		glEnd();

	glColor3f(bordaR,bordaG,bordaB);//COR DA BORDA QUE VAI SER DEFINIDA COM O CLICK

		glBegin(GL_LINE_LOOP);//UM LINE LOOP PARA CIRCULAR O QUADRADO(CONTORNO/BORDA)

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
	r = vermelhoR; g = vermelhoG; b = vermelhoB;

	if(vermelho){//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO

		bordaR = 1.0 , bordaG = 1.0 , bordaB = 1.0;

	}else{//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
	
		bordaR = 0.0 , bordaG = 0.0 , bordaB = 0.0;

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
	r = verdeR; g = verdeG; b = verdeB;

	if(verde){//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
	
		bordaR = 1.0 , bordaG = 1.0 , bordaB = 1.0;

	}else{//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
	
		bordaR = 0.0 , bordaG = 0.0 , bordaB = 0.0;

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
	r = azulR; g = azulG; b = azulB;

	if(azul){//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO

		bordaR = 1.0 , bordaG = 1.0 , bordaB = 1.0;

	}else{//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO

		bordaR = 0.0 , bordaG = 0.0 , bordaB = 0.0;

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
	r = cianoR; g = cianoG; b = cianoB;

	if(ciano){//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO

		bordaR = 1.0 , bordaG = 1.0 , bordaB = 1.0;

	}else{//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO

		bordaR = 0.0 , bordaG = 0.0 , bordaB = 0.0;

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
	r = amareloR; g = amareloG; b = amareloB;

	if(amarelo){//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO

		bordaR = 1.0 , bordaG = 1.0 , bordaB = 1.0;

	}else{//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		
		bordaR = 0.0 , bordaG = 0.0 , bordaB = 0.0;

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
	r = roxoR; g = roxoG; b = roxoB;

	if(roxo){//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO

		bordaR = 1.0 , bordaG = 1.0 , bordaB = 1.0;

	}else{//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO

		bordaR = 0.0 , bordaG = 0.0 , bordaB = 0.0;

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
	r = laranjaR; g = laranjaG; b = laranjaB;

	if(laranja){//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO

		bordaR = 1.0 , bordaG = 1.0 , bordaB = 1.0;

	}else{//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO

		bordaR = 0.0 , bordaG = 0.0 , bordaB = 0.0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(laranjaPosX               , laranjaPosY          );
	quadrado(laranjaPosX + 1 * largura , laranjaPosY          );
	quadrado(laranjaPosX + 1 * largura , laranjaPosY - altura );
	quadrado(laranjaPosX + 2 * largura , laranjaPosY - altura );

}

//FUNCAO INICIALIZAR
void inicializar() {

	glClearColor(0.2 , 0.4 , 0.8 , 1);//COR MEIO AZULADA
    glLineWidth(3.0);//AUMENTO DAS LINHAS/ARESTAS PARA DAR DESTAQUE NAS BORDAS

}

//FUNCEOS GLOBAL
float  calcLarguraTela, calcAlturaTela;

void resolucao(int widht, int height){//CALCULA O ACRESCIMO DA TELA PARA AJUSTAR O MOUSE

	calcLarguraTela = widht  - w;//DISTANCIA DA TELA MAXIMA - MENOS A INICIAL = QUANTIDADE AUMENTADA
	calcAlturaTela  = height - h;//DISTANCIA DA TELA MAXIMA - MENOS A INICIAL = QUANTIDADE AUMENTADA

}

//A DISTANCIA DO CLIQUE PARA O VETOR DE PRODRUCAO DA PECA, PARA EVITAR TELEPORTE
float distanciaX;
float distanciaY;

//FUNCAO MOUSE CLIQUE PARA VER SE O CLICK FOI NO HITBOX DA PECA
void mouseClique(int button, int state, int x, int y){

	if(button == GLUT_LEFT && state == GLUT_DOWN){//VERIFICA SE O USUARIO CLICOU COM O BOTAO ESQUERDO
		
		//AJUSTE DA COORDENADA Y
		float vermelhoPosYR = h - vermelhoPosY - altura + calcAlturaTela + 4;// pois é o -1 da tela e + 5 contando com as bordas
		float verdePosYR    = h - verdePosY    - altura + calcAlturaTela + 4;
		float azulPosYR     = h - azulPosY     - altura + calcAlturaTela + 4;
		float cianoPosYR    = h - cianoPosY    - altura + calcAlturaTela + 4;
		float amarelaPosYR  = h - amarelaPosY  - altura + calcAlturaTela + 4;
		float roxoPosYR     = h - roxoPosY     - altura + calcAlturaTela + 4;
		float laranjaPosYR  = h - laranjaPosY  - altura + calcAlturaTela + 4;

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

			distanciaX =     x - verdePosX;
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

			distanciaX =     x - azulPosX;
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

			distanciaX =     x - cianoPosX;
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

			distanciaX =     x - amarelaPosX;
			distanciaY = h - y - amarelaPosY;

		//VERIFICA SE A AREA/POSICAO DO ROXO FOI SELECIONADO
		}else if(x >= roxoPosX  && x <= roxoPosX  + 2 * largura && 
		         y >= roxoPosYR && y <= roxoPosYR + 1 * altura  ||
			     x >= roxoPosX  + largura && x <= roxoPosX + 3 * largura && 
				 y >= roxoPosYR - altura && y <= roxoPosYR){

			//CASO SEJA TRUE ROXO SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde    = false;
			azul     = false;
			ciano    = false;
			amarelo  = false;
			roxo     = true;
			laranja  = false;

			distanciaX =     x - roxoPosX;
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

			distanciaX =     x - laranjaPosX;
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

	glutPostRedisplay();//INFORMA QUE O FRAME BUFFER DEVE SER ATUALIZADO

}

//FUNCAO PARA MOVIMENTAR AS PECAS
void mouseArrasto(int x, int y){

	//VARIAVEIS CRIADAS PARA ORGANIZACAO
    float coord_x = x;
    float coord_y = h - y;

	//MOVIMENTACAO DA PECA LEVANDO EM CONSIDERACAO A DISTANCIA DO MOUSE E DA COORDENADA DE PRODUCAO DA PECA
	//SO IRA MOVIMENTAR CASO A PECA SEJA TRUE = SELECIONADA
	if (vermelho){//SE VERMELHO FOR TRUE = SELECINADO
		
		vermelhoPosX = coord_x - distanciaX;//COORDENADA DA PRODUCAO DA PECA = POSICAO DO MOUSE - A DISTANCIA DOS 2
		vermelhoPosY = coord_y - distanciaY;

	}else if(verde){//SE VERDE FOR TRUE = SELECINADO

		verdePosX = coord_x - distanciaX;//COORDENADA DA PRODUCAO DA PECA = POSICAO DO MOUSE - A DISTANCIA DOS 2
		verdePosY = coord_y - distanciaY;

	}else if(azul){//SE AZUL FOR TRUE = SELECINADO

		azulPosX = coord_x - distanciaX;//COORDENADA DA PRODUCAO DA PECA = POSICAO DO MOUSE - A DISTANCIA DOS 2
		azulPosY = coord_y - distanciaY;

	}else if(ciano){//SE CIANO FOR TRUE = SELECINADO

		cianoPosX = coord_x - distanciaX;//COORDENADA DA PRODUCAO DA PECA = POSICAO DO MOUSE - A DISTANCIA DOS 2
		cianoPosY = coord_y - distanciaY;//COORDENADA DA PRODUCAO DA PECA = POSICAO DO MOUSE - A DISTANCIA DOS 2

	}else if(amarelo){//SE AMARELO FOR TRUE = SELECINADO

		amarelaPosX = coord_x - distanciaX;//COORDENADA DA PRODUCAO DA PECA = POSICAO DO MOUSE - A DISTANCIA DOS 2
		amarelaPosY = coord_y - distanciaY;

	}else if(roxo){//SE ROXO FOR TRUE = SELECINADO

		roxoPosX = coord_x - distanciaX;//COORDENADA DA PRODUCAO DA PECA = POSICAO DO MOUSE - A DISTANCIA DOS 2
		roxoPosY = coord_y - distanciaY;

	}else if(laranja){//SE LARANJA FOR TRUE = SELECINADO

		laranjaPosX = coord_x - distanciaX;//COORDENADA DA PRODUCAO DA PECA = POSICAO DO MOUSE - A DISTANCIA DOS 2
		laranjaPosY = coord_y - distanciaY;

	}
    
    glutPostRedisplay();//INFORMA QUE O FRAME BUFFER DEVE SER ATUALIZADO

}

void tecladoCor(unsigned char key, int x, int y){

	if(vermelho){//SE VERMELHO FOR TRUE = SELECIONADO

		     if(key == '1'){vermelhoR = 1.0; vermelhoG = 0.0; vermelhoB = 0.0;}// 1 = VERMELHO
		else if(key == '2'){vermelhoR = 0.0; vermelhoG = 1.0; vermelhoB = 0.0;}// 2 = VERDE
		else if(key == '3'){vermelhoR = 0.0; vermelhoG = 0.0; vermelhoB = 1.0;}// 3 = AZUL
		else if(key == '4'){vermelhoR = 0.0; vermelhoG = 1.0; vermelhoB = 1.0;}// 4 = CIANO
		else if(key == '5'){vermelhoR = 1.0; vermelhoG = 1.0; vermelhoB = 0.0;}// 5 = AMARELO
		else if(key == '6'){vermelhoR = 0.5; vermelhoG = 0.0; vermelhoB = 1.0;}// 6 = ROXO
		else if(key == '7'){vermelhoR = 1.0; vermelhoG = 0.5; vermelhoB = 0.0;}// 7 = LARANJA

	}else if(verde){//SE VERDE FOR TRUE = SELECIONADO

			 if(key == '1'){verdeR = 1.0; verdeG = 0.0; verdeB = 0.0;}// 1 = VERMELHO
		else if(key == '2'){verdeR = 0.0; verdeG = 1.0; verdeB = 0.0;}// 2 = VERDE
		else if(key == '3'){verdeR = 0.0; verdeG = 0.0; verdeB = 1.0;}// 3 = AZUL
		else if(key == '4'){verdeR = 0.0; verdeG = 1.0; verdeB = 1.0;}// 4 = CIANO
		else if(key == '5'){verdeR = 1.0; verdeG = 1.0; verdeB = 0.0;}// 5 = AMARELO
		else if(key == '6'){verdeR = 0.5; verdeG = 0.0; verdeB = 1.0;}// 6 = ROXO
		else if(key == '7'){verdeR = 1.0; verdeG = 0.5; verdeB = 0.0;}// 7 = LARANJA

	}else if(azul){//SE AZUL FOR TRUE = SELECIONADO

			 if(key == '1'){azulR = 1.0; azulG = 0.0; azulB = 0.0;}// 1 = VERMELHO
		else if(key == '2'){azulR = 0.0; azulG = 1.0; azulB = 0.0;}// 2 = VERDE
		else if(key == '3'){azulR = 0.0; azulG = 0.0; azulB = 1.0;}// 3 = AZUL
		else if(key == '4'){azulR = 0.0; azulG = 1.0; azulB = 1.0;}// 4 = CIANO
		else if(key == '5'){azulR = 1.0; azulG = 1.0; azulB = 0.0;}// 5 = AMARELO
		else if(key == '6'){azulR = 0.5; azulG = 0.0; azulB = 1.0;}// 6 = ROXO
		else if(key == '7'){azulR = 1.0; azulG = 0.5; azulB = 0.0;}// 7 = LARANJA

	}else if(ciano){//SE CIANO FOR TRUE = SELECIONADO

			 if(key == '1'){cianoR = 1.0; cianoG = 0.0; cianoB = 0.0;}// 1 = VERMELHO
		else if(key == '2'){cianoR = 0.0; cianoG = 1.0; cianoB = 0.0;}// 2 = VERDE
		else if(key == '3'){cianoR = 0.0; cianoG = 0.0; cianoB = 1.0;}// 3 = AZUL
		else if(key == '4'){cianoR = 0.0; cianoG = 1.0; cianoB = 1.0;}// 4 = CIANO
		else if(key == '5'){cianoR = 1.0; cianoG = 1.0; cianoB = 0.0;}// 5 = AMARELO
		else if(key == '6'){cianoR = 0.5; cianoG = 0.0; cianoB = 1.0;}// 6 = ROXO
		else if(key == '7'){cianoR = 1.0; cianoG = 0.5; cianoB = 0.0;}// 7 = LARANJA

	}else if(amarelo){//SE AMARELO FOR TRUE = SELECIONADO

			 if(key == '1'){amareloR = 1.0; amareloG = 0.0; amareloB = 0.0;}// 1 = VERMELHO
		else if(key == '2'){amareloR = 0.0; amareloG = 1.0; amareloB = 0.0;}// 2 = VERDE
		else if(key == '3'){amareloR = 0.0; amareloG = 0.0; amareloB = 1.0;}// 3 = AZUL
		else if(key == '4'){amareloR = 0.0; amareloG = 1.0; amareloB = 1.0;}// 4 = CIANO
		else if(key == '5'){amareloR = 1.0; amareloG = 1.0; amareloB = 0.0;}// 5 = AMARELO
		else if(key == '6'){amareloR = 0.5; amareloG = 0.0; amareloB = 1.0;}// 6 = ROXO
		else if(key == '7'){amareloR = 1.0; amareloG = 0.5; amareloB = 0.0;}// 7 = LARANJA

	}else if(laranja){//SE LARANJA FOR TRUE = SELECIONADO

			 if(key == '1'){laranjaR = 1.0; laranjaG = 0.0; laranjaB = 0.0;}// 1 = VERMELHO
		else if(key == '2'){laranjaR = 0.0; laranjaG = 1.0; laranjaB = 0.0;}// 2 = VERDE
		else if(key == '3'){laranjaR = 0.0; laranjaG = 0.0; laranjaB = 1.0;}// 3 = AZUL
		else if(key == '4'){laranjaR = 0.0; laranjaG = 1.0; laranjaB = 1.0;}// 4 = CIANO
		else if(key == '5'){laranjaR = 1.0; laranjaG = 1.0; laranjaB = 0.0;}// 5 = AMARELO
		else if(key == '6'){laranjaR = 0.5; laranjaG = 0.0; laranjaB = 1.0;}// 6 = ROXO
		else if(key == '7'){laranjaR = 1.0; laranjaG = 0.5; laranjaB = 0.0;}// 7 = LARANJA

	}else if(roxo){//SE ROXO FOR TRUE = SELECIONADO

			 if(key == '1'){roxoR = 1.0; roxoG = 0.0; roxoB = 0.0;}// 1 = VERMELHO
		else if(key == '2'){roxoR = 0.0; roxoG = 1.0; roxoB = 0.0;}// 2 = VERDE
		else if(key == '3'){roxoR = 0.0; roxoG = 0.0; roxoB = 1.0;}// 3 = AZUL
		else if(key == '4'){roxoR = 0.0; roxoG = 1.0; roxoB = 1.0;}// 4 = CIANO
		else if(key == '5'){roxoR = 1.0; roxoG = 1.0; roxoB = 0.0;}// 5 = AMARELO
		else if(key == '6'){roxoR = 0.5; roxoG = 0.0; roxoB = 1.0;}// 6 = ROXO
		else if(key == '7'){roxoR = 1.0; roxoG = 0.5; roxoB = 0.0;}// 7 = LARANJA

	}

    glutPostRedisplay();//INFORMA QUE O FRAME BUFFER DEVE SER ATUALIZADO

}


void desenha() {//FUNCAO DESENHA PARA RENDERIZAR

	glClear(GL_COLOR_BUFFER_BIT);//SERVE PARA APAGAR O QUE TEM NA TELA

	//AJUSTE DA TELA, PARA NAO FICAR -1 A 1
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0 , w-1 , 0 , h-1 , -1 , 1 );//DEFININDO O TAMANHO DA JANELA/MUNDO
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

	glutMainLoop();//DEIXANDO EM LOOP INFINITO

}

//cd Trabalho-1-CG
//g++ tetris.cpp -o main.exe -lopengl32 -lfreeglut
//start main.exe