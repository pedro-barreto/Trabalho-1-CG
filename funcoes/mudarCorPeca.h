//PEDRO HENRIQUE BARRETO DOS SANTOS - 475626
void tecladoCor(unsigned char key, int x, int y){//FUNCAO QUE DE DETECTA SE A PECA ESTA SELECIONADA E PERMITE MUDAR A COR

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