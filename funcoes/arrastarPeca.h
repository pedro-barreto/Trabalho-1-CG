//PEDRO HENRIQUE BARRETO DOS SANTOS - 475626
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