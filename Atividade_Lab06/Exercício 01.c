#include <stdio.h>


struct horario{
    int segundos;
    int minutos;
    int horas;
};
typedef struct horario horario;
struct data{
    int dia;
    int mes;
    int ano;
};
typedef struct data data;
struct compromisso{
    horario i;
    data j;
    char texto_descricao[100];
};
typedef struct compromisso compromisso;

