#include <stdio.h>
#include <stdlib.h>
int main(){

    int dia_inicial, dia_final, hora_inicial, hora_final, minuto_inicial, minuto_final;
    int segundo_inicial, segundo_final, segundos_inicio, segundos_final, segundos_totais;
    int quant_dias, quant_horas, quant_min, quant_seg, dia, carac;

        // Leitura momento INICIAL
        scanf("%s %d", &dia, &dia_inicial);
        scanf("%d %s %d %s %d", &hora_inicial, &carac, &minuto_inicial, &carac, &segundo_inicial);
    
        // Leitura momento FINAL
        scanf("%s %d", &dia, &dia_final);
        scanf("%d %s %d %s %d", &hora_final, &carac, &minuto_final, &carac, &segundo_final);
    

        // Cálculos e Impressão de resultados 
    
            segundos_inicio = (dia_inicial * 86400) + (hora_inicial * 3600) + (minuto_inicial * 60) + segundo_inicial;  
            segundos_final = (dia_final * 86400) + (hora_final * 3600) + (minuto_final * 60) + segundo_final;
            segundos_totais = segundos_final - segundos_inicio;

            quant_dias = segundos_totais / 86400;
            quant_horas = (segundos_totais % 86400) / 3600;
            quant_min = (segundos_totais % 86400 % 3600) / 60;
            quant_seg = (segundos_totais % 86400 % 3600 % 60);

            printf("%d dia(s)\n", quant_dias);
            printf("%d hora(s)\n", quant_horas);
            printf("%d minuto(s)\n", quant_min);
            printf("%d segundo(s)\n", quant_seg);

    
    return 0;
}