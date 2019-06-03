#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// CONSTANTES DE POSICIONAMENTO DE TEXTO
// ALTERE AQUI
#define LINHAS 44
#define COLUNAS 165
#define CENTRO 60
 
void gotoxy(int x, int y) {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} // Esta função configura o cursor para determinada posição da tela, para que eu possa "printar" em qualquer lugar ta telaaa

main () {
	system("color 8F");
	
	keybd_event ( VK_MENU, 0x36, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
    keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 ); //Este codigo envia um Alt+Enter para o console.
    
    float vet[10];
    int quant = 0;
    int cod = 0;
    float soma = 0;
    int i;
    char resposta = 's';
    char nome[30];
    float preco = 0;
    
    char desenho = '#';
    
    // Inicia cada posicao do vetor com o valor 0
    for (i = 0; i < 10; i++) {
    	vet[i] = 0;
	}
	
/*

// ************************************************************************************************************************************************************************************

	// Estrutura que irá fazer a borda superior
	printf("%c", 201);
	for (i = 0; i < COLUNAS; i++) {
		printf("%c", 205);
	}
	printf("%c\n", 187);
,	// Fim da estrutura que irá fazer a borda superior
	
// ************************************************************************************************************************************************************************************
	
	// Estrutura que irá fazer a borda inferior
	printf("%c", 200);
	for (i = 0; i < COLUNAS; i++) {
		printf("%c", 205);
	}
	printf("%c\n", 188);
	// Fim da estrutura que irá fazer a borda inferior

// ************************************************************************************************************************************************************************************

	// Estrutura para fechar a borda na tela inteira
	for (i = 0; i < LINHAS; i++) {
		printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
		gotoxy((COLUNAS + 1), (i+2)); // Vai pra ultima coluna 
		printf("%c\n", 186); // e imprime o caractere para fechar a borda
	}
	// Fim da estrutura para fechar a borda na tela inteira

// ************************************************************************************************************************************************************************************


*/
	
	
	
	// Estrutura que irá fazer a borda superior
	printf("%c", 201);
	for (i = 0; i < COLUNAS; i++) {
		printf("%c", 205);
	}
	printf("%c\n", 187);
	// Fim da estrutura que irá fazer a borda superior
	
	printf("%c", 186);
	
	printf("                                                                                             XXXXXX\n");
	printf("     XXXXXXX   XXXXXXXXX  XXX         XXX                                                     XXXXXX\n");
	printf("     XX    XX  XXXXXXXXX  XX X       X XX                                                    XXXXXXXX\n");
	printf("     XX    XX  XX         XX  X     X  XX                                                   XXXXXXXXXX\n");
	printf("     XX    XX  XX         XX   X   X   XX                                                  XXXXXXXXXXXX\n");
	printf("     XXXXXXX   XXXXXX     XX    X X    XX                                                 XXXXXXXXXXXXXX\n");
	printf("     XXXXXXX   XXXXXX     XX     X     XX                                                XXXXXXXXXXXXXXXX\n");
	printf("     XX    XX  XX         XX           XX                                              XXXXXXXXXXXXXXXXXXXX\n");
	printf("     XX    XX  XX         XX           XX                                             XXXXXXXXXXXXXXXXXXXXXX\n");
	printf("     XX    XX  XXXXXXXXX  XX           XX                                             XXXXXXXXXXXXXXXXXXXXXX\n");
	printf("     XXXXXXX   XXXXXXXXX  XX           XX                                            XX    XX    X    X    XX\n");
	printf("                                                                                     XX XXXXX XX X XXXX XX XX\n");
	printf("           XX             XX  XX  XXX       XX  XXXXXXX       XXXXXX                 XX XXXXX XX X XXXX XX XX\n");
	printf("            XX           XX       XX X      XX  XX     XX   XX      XX               XX XXXXX XX X XXXX    XX\n");
	printf("             XX         XX    XX  XX  X     XX  XX     XX   XX      XX               XX XXXXX XX X XXXX XX XX\n");
	printf("              XX       XX     XX  XX   X    XX  XX     XX   XX      XX               XX    XX    X    X XX XX\n");
	printf("               XX     XX      XX  XX    X   XX  XX     XX   XX      XX               XXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                XX   XX       XX  XX     X  XX  XX     XX   XX      XX               XXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                 XX XX        XX  XX      X XX  XX     XX   XX      XX               XXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                  XXX         XX  XX       XXX  XXXXXXX       XXXXXX                  XXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                                                                      XXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                                                                      XXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                            X                                         XXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                           XXX                                       XXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                         XXXXXXX                                     XXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                      XXXXXXXXXXXXX                                  XXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                   XXXXXXXXXXXXXXXXXXX                              XX    X    XX  XXXX    XXX\n");
	printf("                               XXXXXXXXXXXXXXXXXXXXXXXXXXX                          XX XXXX XX XX  XXXX XX XXX\n");
	printf("                              XXXXX   XXXXXXXXXXXXXXXXXXXXX                         XX XXXX XX XX  XXXX XX XXX\n");
	printf("                             XXXXXX  XXXXXXXXXXXXXXXXXXXXXXX                        XX XXXX XX XX  XXXX    XXX\n");
	printf("                            XXXXXX  XXXXXXXXXXXXXXXXXXXXXXXXX                       XX XXXX XX XX  XXXX XX XXX\n");
	printf("                            XXXXXX  XXXXXXXXXXXXXXXXXXXXXXXXX                      XXX    X    XX     X XX XXXX\n");
	printf("                            XXXXXXX  XXXXXXXXXXXXXXXXXXXXXXXX                      XXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                            XXXXXXX  XXXXXXXXXXXXXXXXXXXXXXXX                      XXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                             XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                       XXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                XXXXXXXXXXXXXXXXXXXXXXXXXX                         XXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                  XXXXXXXXXXXXXXXXXXXXXX                           XXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("                                    XXXXXXXXXXXXXXXXXX                              XXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	
	
	gotoxy(5, 43);
	printf("OLA! POR FAVOR, NOS INFORME O SEU NOME: ");
	
	
	gotoxy((COLUNAS +1), 1); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	// Estrutura para fechar a borda na tela inteira
	for (i = 0; i < LINHAS; i++) {
		printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
		gotoxy((COLUNAS + 1), (i+2)); // Vai pra ultima coluna 
		printf("%c\n", 186); // e imprime o caractere para fechar a borda
	}
	// Fim da estrutura para fechar a borda na tela inteira
	
	// Estrutura que irá fazer a borda inferior
	printf("%c", 200);
	for (i = 0; i < COLUNAS; i++) {
		printf("%c", 205);
	}
	printf("%c\n", 188);
	// Fim da estrutura que irá fazer a borda inferior
	
// ************************************************************************************************************************************************************************************
	gotoxy(45, 43); // vai para a posição a frente da string e pede o nome
	gets(nome);

// ************************************************************************************************************************************************************************************
	
	system("cls");
	system("color 8F");
	
	menu:
	// Estrutura que irá fazer a borda superior
	printf("%c", 201);
	for (i = 0; i < COLUNAS; i++) {
		printf("%c", 205);
	}
	printf("%c\n", 187);
	// Fim da estrutura que irá fazer a borda superior
	
// ************************************************************************************************************************************************************************************
	
	// BOAS VINDAS
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	
	gotoxy(CENTRO, 1); // Posiciona o cursor mais proximo do centro da tela
	
    printf("SEJA BEM VINDO A LANCHONETE UNIPAM, %s", nome);
    gotoxy((COLUNAS + 1), 1); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
    
    printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
    
    gotoxy((CENTRO + 3), 2); // Posiciona o cursor mais proximo do centro da tela
    
    printf("TEMOS VARIAS OPCOES PARA SEU LANCHE\n\n");
    gotoxy((COLUNAS + 1), 2); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
    
    printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
    
    gotoxy((CENTRO - 11), 3); // Posiciona o cursor mais proximo do centro da tela
    
    printf("DE ACORDO COM O NOSSO CARDAPIO DIGITE O CODIGO DO LANCHE DESEJADO\n\n");
    gotoxy((COLUNAS + 1), 3); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
// ************************************************************************************************************************************************************************************

	// MENU
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
    printf("1  - PAO DE QUEIJO                        R$ 2.00\n");
    gotoxy((COLUNAS + 1), 4); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("2  - PAO DE QUEIJO RECHEADO               R$ 2.50\n");
	gotoxy((COLUNAS + 1), 5); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("3  - PAO FRANCES                          R$ 1.00\n");
	gotoxy((COLUNAS + 1), 6); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("4  - PAO FRANCES RECHEADO                 R$ 1.60\n");
	gotoxy((COLUNAS + 1), 7); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("5  - SALGADO FRITO                        R$ 3.00\n");
	gotoxy((COLUNAS + 1), 8); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("6  - SALGADO ASSADO                       R$ 3.50\n");
	gotoxy((COLUNAS + 1), 9); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("7  - REFRIGERANTE 1 LITRO                 R$ 5.00\n");
	gotoxy((COLUNAS + 1), 10); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("8  - REFRIGERANTE 500ML                   R$ 3.00\n");
	gotoxy((COLUNAS + 1), 11); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("9  - SUCOS (NATURAIS - R$ 3.50)           R$ 2.70\n");
	gotoxy((COLUNAS + 1), 12); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
// ************************************************************************************************************************************************************************************

	// ESCOLHA

    while ((resposta == 's') || (resposta == 'S')) {
    	fflush(stdin);
    	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
    	gotoxy((COLUNAS + 1), 13); // Vai pra ultima coluna 
		printf("%c\n", 186); // e imprime o caractere para fechar a borda
    	escolha:
    		
    	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
		printf("Digite o codigo do lanche que voce deseja: ", 186);
		gotoxy((COLUNAS + 1), 14); // Vai pra ultima coluna 
		printf("%c\n", 186); // e imprime o caractere para fechar a borda
		
// ************************************************************************************************************************************************************************************

		// FAZ AS BORDAS LATERAIS ATE O FINAL DA PAGINA

		// Estrutura para fechar a borda na tela inteira
		for (i = 0; i < LINHAS; i++) {
			printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha

			gotoxy((COLUNAS + 1), (i+2)); // Vai pra ultima coluna 
			printf("%c\n", 186); // e imprime o caractere para fechar a borda
		}
		
// ************************************************************************************************************************************************************************************
		
		// FAZ A PARTE INFERIOR DA BORDA
				
		// Estrutura que irá fazer a borda inferior
		printf("%c", 200);
		for (i = 0; i < COLUNAS; i++) {
			printf("%c", 205);
		}
		printf("%c\n", 188);
		// Fim da estrutura que irá fazer a borda inferior
		
// ************************************************************************************************************************************************************************************
	

		gotoxy(45, 14);
		scanf("%i", &cod);
    	
    	fflush(stdin);
    	
		if ((cod < 1) || (cod > 10)) {
			printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
    		
			printf("CODIGO INVALIDO. TENTE NOVAMENTE");
			gotoxy((COLUNAS + 1), 15); // Vai pra ultima coluna 
			printf("%c\n", 186); // e imprime o caractere para fechar a borda
			
			printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
			system("pause");
			gotoxy((COLUNAS + 1), 16); // Vai pra ultima coluna 
			printf("%c\n", 186); // e imprime o caractere para fechar a borda
			system("cls");
			goto menu;
			
		}
		
// ************************************************************************************************************************************************************************************
		
		// SE O CÓDIGO DIGITADO ACIMA NÃO FOR INVÁLIDO, EXECUTA O ELSE (E O SWITCH)
		
		else {
			switch (cod) {
				
				// Cliente compra: PAO DE QUEIJO
				
				case 1: {
					preco = 2;
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					
					printf("Digite a quantidade desejada: ");
					
					gotoxy((COLUNAS + 1), 15); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(32, 15);
					scanf("%i", &quant);
					
					vet[0] = vet[0] + (preco * quant);
					//printf("O preco dos pao de queijo e: R$ %.2f\n", vet[0]);
					break;
				}
				
// ************************************************************************************************************************************************************************************				
				
				// Cliente compra: PAO DE QUEIJO RECHEADO
				
				case 2: {
					preco = 2.50;
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					
					printf("Digite a quantidade desejada: ");
					
					gotoxy((COLUNAS + 1), 16); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(32, 15);
					scanf("%i", &quant);
					vet[1] = vet[1] + (preco * quant);
					//printf("O preco dos pao de quijo recheado e: R$ %.2f\n", vet[1]);
					break;
				}
				
// ************************************************************************************************************************************************************************************				
				
				// Cliente compra: PAO FRANCES
				
				case 3: {
					preco = 1;
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					
					printf("Digite a quantidade desejada: ");
					
					gotoxy((COLUNAS + 1), 16); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(32, 15);
					scanf("%i", &quant);
					vet[2] = vet[2] + (preco * quant);
					//printf("O preco das rosquinhas e: R$ %.2f\n", vet[2]);
					break;
				}
				
// ************************************************************************************************************************************************************************************				
				
				// Cliente compra: PAO FRANCES RECHEADO
				
				case 4: {
					preco = 1.60;
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					
					printf("Digite a quantidade desejada: ");
					
					gotoxy((COLUNAS + 1), 16); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(32, 15);
					scanf("%i", &quant);
					vet[3] = vet[3] + (preco * quant);
					//printf("O preco dos pao fraces e: R$ %.2f\n", vet[3]);
					break;
				}
				
// ************************************************************************************************************************************************************************************				
				
				// Cliente compra: SALGADO FRITO
				
				case 5: {
					frito:
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					
					printf("SELECIONE O SALGADO DESEJADO: \n");
					
					gotoxy((COLUNAS + 1), 16); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("1 - COXINHA\n");
					
					gotoxy((COLUNAS + 1), 17); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linhA
					printf("2 - PASTEL\n");
					
					gotoxy((COLUNAS + 1), 18); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("3 - ENROLADINHO DE SALSICHA\n");
					
					gotoxy((COLUNAS + 1), 18); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("4 - KIBE\n");
					
					gotoxy((COLUNAS + 1), 19); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("5 - BOLINHA DE QUEIJO\n");
					
					gotoxy((COLUNAS + 1), 20); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("Escolha: ");
					
					gotoxy((COLUNAS + 1), 21); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(10, 21);
					fflush(stdin);
					scanf("%i", &cod);
					
					if ((cod < 1) || (cod > 5)) {
						printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
						printf("CODIGO INVALIDO. TENTE NOVAMENTE.\n");
						
						gotoxy((COLUNAS + 1), 23); // Vai pra ultima coluna 
						printf("%c\n", 186); // e imprime o caractere para fechar a borda
						goto frito;
					}
					
					else {
						fflush(stdin);
						printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
						printf("Digite a quantidade desejada: ");
						
						gotoxy((COLUNAS + 1), 23); // Vai pra ultima coluna 
						printf("%c\n", 186); // e imprime o caractere para fechar a borda
						
						gotoxy(32, 22);
						scanf("%i", &quant);
						
						preco = 3;
						vet[4] = vet[4] + (preco * quant);
						//printf("O preco dos pao frances recheado e: R$ %.2f\n", vet[4]);
						break;
					}
				}
				
// ************************************************************************************************************************************************************************************				
				
				// Cliente compra: SALGADO ASSADO
				
				case 6: {
					assado:
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("SELECIONE O SALGADO DESEJADO: \n");
					
					gotoxy((COLUNAS + 1), 16); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("1 - ESFIHA\n");
					
					gotoxy((COLUNAS + 1), 17); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("2 - EMPADA\n");
					
					gotoxy((COLUNAS + 1), 18); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("3 - MINI PIZZA\n");
					
					gotoxy((COLUNAS + 1), 19); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("4 - HAMBURGUINHO\n");
					
					gotoxy((COLUNAS + 1), 20); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("5 - ENROLADINHO DE QUEIJO\n");
					
					gotoxy((COLUNAS + 1), 21); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("Escolha: ");
					
					gotoxy((COLUNAS + 1), 22); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(10, 22);
					scanf("%i", &cod);
					
					if ((cod < 1) || (cod > 5)) {
						
						printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
						printf("CODIGO INVALIDO. TENTE NOVAMENTE.\n");
						
						gotoxy((COLUNAS + 1), 23); // Vai pra ultima coluna 
						printf("%c\n", 186); // e imprime o caractere para fechar a borda
						goto assado;
					}
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("Digite a quantidade desejada: ");
					
					gotoxy((COLUNAS + 1), 23); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(31, 23);
					scanf("%i", &quant);
					
					preco = 3.50;
					vet[5] = vet[5] + (preco * quant);
					//printf("O preco dos salgados e: R$ %.2f\n", vet[5]);
					break;
				}
				
// ************************************************************************************************************************************************************************************				
				
				// Cliente compra: REFIGERANTE 1L
				
				case 7: {
					refrigerante:
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("SELECIONE O REFRIGERANTE DE 1 LITRO \n\n");
					
					gotoxy((COLUNAS + 1), 16); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("1 - COCA-COLA\n");
					gotoxy((COLUNAS + 1), 17); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("2 - GUARANA ANTARTICA\n");
					
					gotoxy((COLUNAS + 1), 18); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("3 - GUARANA MINEIRO\n");
					
					gotoxy((COLUNAS + 1), 19); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("4 - FANTA\n");
					
					gotoxy((COLUNAS + 1), 20); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("5 - FANTA UVA\n");
					
					gotoxy((COLUNAS + 1), 21); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("Escolha: ");
					
					gotoxy((COLUNAS + 1), 22); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(10, 22);
					scanf("%i", &cod);
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("Digite a quantidade desejada: ");
					
					gotoxy((COLUNAS + 1), 23); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(31, 23);
					scanf("%i", &quant);
										
					
					if ((cod < 1) || (cod > 7)) {
						
						printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
						printf("CODIGO INVALIDO, TENTE NOVAMENTE\n");
						
						gotoxy((COLUNAS + 1), 22); // Vai pra ultima coluna 
						printf("%c\n", 186); // e imprime o caractere para fechar a borda
						
	;					goto refrigerante;
					}
					
					else {
						preco = 5;
						vet[6] = vet[6] + (preco * quant);
						//printf("O preco das bebidas 1L e: R$ %.2f\n", vet[7]);
						break;
						goto novopedido;
					}
				}
				
// ************************************************************************************************************************************************************************************

				// Cliente compra: REFRIGERANTE 500ML
				case 8: {
					refri:
						
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("SELECIONE O REFRIGERANTE DE 500ML \n\n");
					
					gotoxy((COLUNAS + 1), 16); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("1 - COCA-COLA\n");
					
					gotoxy((COLUNAS + 1), 17); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("2 - GUARANA ANTARTICA\n");
					
					gotoxy((COLUNAS + 1), 18); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("3 - GUARANA MINEIRO\n");
					
					gotoxy((COLUNAS + 1), 19); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("4 - FANTA\n");
					
					gotoxy((COLUNAS + 1), 20); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("5 - FANTA UVA\n");
					
					gotoxy((COLUNAS + 1), 21); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("Escolha: ");
					
					gotoxy((COLUNAS + 1), 22); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(10, 22);
					scanf("%i", &cod);
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("Digite a quantidade desejada: ");
					
					gotoxy((COLUNAS + 1), 23); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(31, 23);
					scanf("%i", &quant);
					
					if ((cod < 1) || (cod > 5)) {
						printf("CODIGO INVALIDO, TENTE NOVAMENTE\n");
						goto refri;
					}
					
					else {
						preco = 3;
						vet[7] = vet[7] + (preco * quant);
						//printf("O preco das bebidas 1L e: R$ %.2f\n", vet[7]);
						break;
						goto novopedido;
					}
				}

// ************************************************************************************************************************************************************************************
				// Cliente compra: SUCOS
				case 9: {
					suco:
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("SELECIONE O SUCO \n\n");
					gotoxy((COLUNAS + 1), 16); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("1 - NATURAL DE LIMAO\n");
					gotoxy((COLUNAS + 1), 17); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("2 - NATURAL DE LARANJA\n");
					gotoxy((COLUNAS + 1), 18); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("3 - NATURAL DE ABACAXI\n");
					gotoxy((COLUNAS + 1), 19); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					/
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("4 - NATURAL DE MARACUJA\n");
					gotoxy((COLUNAS + 1), 20); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("5 - NATURAL DE MORANGO\n");
					gotoxy((COLUNAS + 1), 21); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("6 - SUCO DEL VALLE 1L\n");
					gotoxy((COLUNAS + 1), 22); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("7 - SUCO DEL VALLE 500ML\n");
					gotoxy((COLUNAS + 1), 23); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
					printf("Escolha: ");
					gotoxy((COLUNAS + 1), 24); // Vai pra ultima coluna 
					printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
					gotoxy(10, 24);
					scanf("%i", &cod);
					
					fflush(stdin);
					if ((cod < 1) || (cod > 7)) {
						printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
						printf("CODIGO INVALIDO, TENTE NOVAMENTE\n");
						gotoxy((COLUNAS + 1), 25); // Vai pra ultima coluna 
						printf("%c\n", 186); // e imprime o caractere para fechar a borda
						
						goto suco;
					}
					else {
						printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
						printf("Digite a quantidade desejada: ");
						gotoxy((COLUNAS + 1), 25); // Vai pra ultima coluna 
						printf("%c\n", 186); // e imprime o caractere para fechar a borda
					
						gotoxy(31, 25);
						scanf("%i", &quant);
					
					}
					
					if ((cod == 1) || (cod == 2) || (cod == 3) || (cod == 4) || (cod == 5)) {
						preco = 3.50;
					}
					
					else {
						preco = 2.70;
					}
					
					vet[8] = vet[8] + (preco * quant);
					//printf("O preco das balas e: R$ %.2f\n", vet[9]);
					break;
				}
			}
		}
		
// ************************************************************************************************************************************************************************************
		
		// DESEJA FAZER UM NOVO PEDIDO??
		
		fflush(stdin);
		
		novopedido:
		resposta = 's';
		
		printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
		printf("\n");
		gotoxy((COLUNAS + 1), 26); // Vai pra ultima coluna 
		printf("%c\n", 186); // e imprime o caractere para fechar a borda
		
		printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
		printf("\n");
		gotoxy((COLUNAS + 1), 27); // Vai pra ultima coluna 
		printf("%c\n", 186); // e imprime o caractere para fechar a borda
		
		printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
		printf("Deseja fazer um novo pedido? (S/N)");
		gotoxy((COLUNAS + 1), 28); // Vai pra ultima coluna 
		printf("%c\n", 186); // e imprime o caractere para fechar a borda
		
		gotoxy(35, 28);
		scanf("%c", &resposta);
		
		if ((resposta == 's') || (resposta == 'S')) {
			system("cls");
			goto menu;
		}
		
		else if ((resposta != 's') && (resposta != 'S') && (resposta != 'n') && (resposta != 'N')) {
			fflush(stdin);
			
			printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
			printf("RESPOSTA INVALIDA. TENTE NOVAMENTE\n");
			gotoxy((COLUNAS + 1), 29); // Vai pra ultima coluna 
			printf("%c\n", 186); // e imprime o caractere para fechar a borda
		
			goto novopedido;
		}
	}
	
	for (i = 0; i < 10; i++) {
		soma = soma + vet[i];
	}

// ************************************************************************************************************************************************************************************

	system("cls");
	
	// Estrutura que irá fazer a borda superior
	printf("%c", 201);
	for (i = 0; i < COLUNAS; i++) {
		printf("%c", 205);
	}
	printf("%c\n", 187);
	// Fim da estrutura que irá fazer a borda superior

// ************************************************************************************************************************************************************************************

	// FINALIZA O PROGRAMA INFORMANDO AO CLIENTE QUAL É O PREÇO DA CONTA
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("\n");
	gotoxy((COLUNAS + 1), 1); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	gotoxy((CENTRO + 5), 2);
	printf("FIM DO PEDIDO");
	gotoxy((COLUNAS + 1), 2); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("\n");
	gotoxy((COLUNAS + 1), 3); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	gotoxy((CENTRO - 3), 3);
	printf("O VALOR TOTAL DA CONTA E: %.2f", soma);
	gotoxy((COLUNAS + 1), 4); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("\n");
	gotoxy((COLUNAS + 1), 5); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("\n");
	gotoxy((COLUNAS + 1), 6); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	gotoxy((CENTRO - 3), 7);
	printf("OBRIGADO PELA PREFERENCIA %s", nome);
	gotoxy((COLUNAS + 1), 7); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("\n");
	gotoxy((COLUNAS + 1), 8); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	printf("\n");
	gotoxy((COLUNAS + 1), 9); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
	printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
	gotoxy((CENTRO + 5), 10);
	printf("VOLTE SEMPRE!!");
	gotoxy((COLUNAS + 1), 10); // Vai pra ultima coluna 
	printf("%c\n", 186); // e imprime o caractere para fechar a borda
	
// ************************************************************************************************************************************************************************************
	
	// Estrutura para fechar a borda na tela inteira
	for (i = 0; i < (LINHAS - 3); i++) {
		printf("%c", 186); // Iprime o caractere 186 para abrir a borda da linha
		gotoxy((COLUNAS + 1), (i+2)); // Vai pra ultima coluna 
		printf("%c\n", 186); // e imprime o caractere para fechar a borda
	}
	// Fim da estrutura para fechar a borda na tela inteira
	
// ************************************************************************************************************************************************************************************
	
	// Estrutura que irá fazer a borda inferior
	printf("%c", 200);
	for (i = 0; i < COLUNAS; i++) {
		printf("%c", 205);
	}
	printf("%c\n", 188);
	// Fim da estrutura que irá fazer a borda inferior
	
// ************************************************************************************************************************************************************************************

} 
