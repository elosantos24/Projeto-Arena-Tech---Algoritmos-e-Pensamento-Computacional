#include <stdio.h>
#include <math.h>

int main ()
{
    int participantes, jogadoresPorTime, computadores, qtd_times, tomadasNecessarias;
    float potencia, duracao, precoKwH, precoKit, outrosCustos, aluguelPC, consumoEnergia, custoEnergia, custoAlimentacao, custoAluguelPCs, custoTotal, custoPorParticipante;

    printf ("Qual o total de participantes? ");
    scanf ("%d", &participantes);
    printf ("Quantos jogadores em cada time? ");
    scanf ("%d", &jogadoresPorTime);
    printf ("Quantidade de computadores utilizados? ");
    scanf ("%d", &computadores);
    printf ("Potência média de cada computador em (watts)? ");
    scanf ("%f", &potencia);
    printf ("Duração do evento em (horas)? ");
    scanf ("%f", &duracao);
    printf ("Preço de 1 kWh de energia? ");
    scanf ("%f", &precoKwH);
    printf ("Preço de um kit de alimentação por participante: ");
    scanf ("%f", &precoKit);
    printf ("Valor do aluguel por computador: ");
    scanf ("%f", &aluguelPC);
    printf ("Outros custos do evento: ");
    scanf ("%f", &outrosCustos);

    qtd_times = ceil((float)participantes / jogadoresPorTime);
    
    /*desafio */
    tomadasNecessarias = ceil((float)computadores / 5);
    
    consumoEnergia = (computadores * potencia * duracao)/1000;
    custoEnergia = consumoEnergia * precoKwH;
    custoAlimentacao = participantes * precoKit;
    
    
    custoAluguelPCs = computadores * aluguelPC;
    
    custoTotal = custoEnergia + custoAlimentacao + custoAluguelPCs + outrosCustos;
    custoPorParticipante = custoTotal / participantes;

    /* Relatório --------------------------------------------------------------------------- */
    printf ("\n================ ARENA TECH 2026 ================\n");
    printf ("Data: 04/09/2026 | Local: Campus Central\n");
    printf ("-------------------------------------------------\n");
    printf ("Participantes: %d\n", participantes);
    printf ("Times necessários: %d\n", qtd_times);
    printf ("Filtros de linha / tomadas necessárias: %d\n", tomadasNecessarias);
    printf ("Consumo estimado: %.2f kWh\n", consumoEnergia);
    printf ("-------------------------------------------------\n");
    printf ("Custo da energia: R$ %.2f\n", custoEnergia);
    printf ("Custo da alimentação: R$ %.2f\n", custoAlimentacao);
    printf ("Custo de aluguel dos PCs: R$ %.2f\n", custoAluguelPCs);
    printf ("Outros custos: R$ %.2f\n", outrosCustos);
    printf ("-------------------------------------------------\n");
    printf ("CUSTO TOTAL: R$ %.2f\n", custoTotal);
    printf ("CUSTO POR PARTICIPANTE: R$ %.2f\n", custoPorParticipante);
    printf ("=================================================\n");

    return 0;
}
