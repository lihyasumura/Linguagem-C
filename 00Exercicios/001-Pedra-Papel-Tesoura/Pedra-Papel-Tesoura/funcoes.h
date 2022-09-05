#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

int N = 0, PC, PontoPC, PontoVC, Empate;

// =================== MENU =======================//
void Menu() {
    printf ("*************************************\n");
    printf ("       JOGO PEDRA-PAPEL-TESOURA      \n");
    printf ("*************************************\n");
    printf ("[ 1 ] PEDRA\n");
    printf ("[ 2 ] PAPEL \n");
    printf ("[ 3 ] TESOURA\n");
    printf ("[ 4 ] SAIR\n");
    printf ("[ 5 ] RESULTADO\n");
    printf ("*************************************\n");
    printf("\n");
    return 0;
}

// ================== ESCOLHA ======================//

void Escolha() {
    switch (N) {
    case 1:
        printf ("VOCÊ: PEDRA\n");
    break;
    case 2:
        printf ("VOCÊ: PAPEL\n");
    break;
    case 3:
        printf ("VOCÊ: TESOURA\n");
    break;
    case 5:
        Resultado();
    break;
    }
    return 0;
}

// ================= COMPUTADOR ====================//

void Computador() {
    PC = (1 + rand() % 3);
    switch (PC) {
    case 1:
        printf ("COMPUTADOR: PEDRA\n");
    break;
    case 2:
        printf ("COMPUTADOR: PAPEL\n");
    break;
    case 3:
        printf ("COMPUTADOR: TESOURA\n");
    break;
    }
    return 0;
}

// ================= GANHADOR =======================//

void Ganhador() {
    if ((N == 1) && (PC == 3)) {
        PontoVC = PontoVC + 1;
        printf (" -- Ponto pra você!\n");
    } else if ((N == 2) && (PC == 1)) {
        PontoVC = PontoVC + 1;
        printf (" -- Ponto pra você!\n");
    } else if ((N == 3) && (PC == 2)) {
        PontoVC = PontoVC + 1;
        printf (" -- Ponto pra você!\n");
    } else if ((N == 1) && (PC == 2)) {
        PontoPC = PontoPC + 1;
        printf (" -- Ponto do computador!\n");
    } else if ((N == 2) && (PC == 3)) {
        PontoPC = PontoPC + 1;
        printf (" -- Ponto do computador!\n");
    } else if ((N == 3) && (PC == 1)) {
        PontoPC = PontoPC + 1;
        printf (" -- Ponto do computador!\n");
    } else if (N == PC) {
        Empate = Empate + 1;
        printf ("Empate!\n");
    }
    printf ("\n");
    return 0;
}

// ================ MOSTRA RESULTADO ================//

void Resultado() {
    printf ("SEUS PONTOS: %d\n", PontoVC);
    printf ("PONTOS DO COMPUTADOR: %d\n", PontoPC);
    printf ("EMPATES: %d\n", Empate);
    return 0;
}

#endif // FUNCOES_H_INCLUDED
