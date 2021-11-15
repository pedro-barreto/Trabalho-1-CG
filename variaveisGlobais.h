//PEDRO HENRIQUE BARRETO DOS SANTOS - 475626
//WIDTH E HEIGHT DA JANELA
int w = 1400;
int h =  800;

//TAMANHO DOS QUADRADOS
float largura = 50.0 , altura = 50.0;

//POSICAO DAS PECAS
float vermelhoPosX =  70.0 , vermelhoPosY = 120.0;
float verdePosX    =  70.0 , verdePosY    = 320.0;
float azulPosX     =  70.0 , azulPosY     = 470.0;
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
float roxoR     = 0.5 , roxoG     = 0.0 , roxoB     = 1.0;
float laranjaR  = 1.0 , laranjaG  = 0.5 , laranjaB  = 0.0;


float bordaR , bordaG , bordaB ;//RGB DAS BORDAS PARA MOSTRAR QUE FORAM SELECIONADAS

//FUNCEOS GLOBAL
float  calcLarguraTela, calcAlturaTela;

//A DISTANCIA DO CLIQUE PARA O VETOR DE PRODRUCAO DA PECA, PARA EVITAR TELEPORTE
float distanciaX;
float distanciaY;