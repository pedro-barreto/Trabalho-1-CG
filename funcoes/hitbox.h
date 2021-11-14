//PEDRO HENRIQUE BARRETO DOS SANTOS - 475626
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