//FUNCAO PARA CRIAR 1 QUADRADO, JA QUE TODAS AS PECAS SAO FEITAS COM 4 QUADRADOS
void quadrado(float posX, float posY){

	glColor3f(r,g,b);//COR QUE VAI SER DEFINIDA NA CRIACAO DAS PECAS

		glBegin(GL_QUADS);//MANEIRA QUE VAI SER PRODUZIDA A PECA

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