/*
QUESTÃƒO 1 - CORRIDA DE DRONES - 1,0 ponto

Dois pilotos estÃ£o participando de uma corrida de drones.

Crie um programa em C que receba:

- o nome do primeiro piloto;
- o nome do segundo piloto;
- o tempo, em segundos, que o primeiro piloto levou para completar o percurso;
- o tempo, em segundos, que o segundo piloto levou para completar o percurso;
- a quantidade de penalidades cometidas pelo primeiro piloto;
- a quantidade de penalidades cometidas pelo segundo piloto.

Cada penalidade acrescenta 5 segundos ao tempo do piloto.

O programa deverÃ¡ calcular o tempo final de cada competidor, considerando as penalidades.

REGRAS:

O piloto que terminar com o menor tempo final serÃ¡ o vencedor.

A saÃ­da deverÃ¡ mostrar:

Piloto 1: NOME
Tempo original: XX segundos
Penalidades: X
Tempo final: XX segundos

Piloto 2: NOME
Tempo original: XX segundos
Penalidades: X
Tempo final: XX segundos

Vencedor: NOME DO PILOTO

Depois, classifique a vitÃ³ria de acordo com a diferenÃ§a entre os tempos finais:

- diferenÃ§a de atÃ© 3 segundos -> VitÃ³ria por pouco;
- diferenÃ§a de 4 atÃ© 10 segundos -> VitÃ³ria tranquila;
- diferenÃ§a maior que 10 segundos -> VitÃ³ria com grande vantagem.

Caso os dois pilotos terminem com exatamente o mesmo tempo final, mostre:

Empate!

Exemplo:

Piloto 1: Carlos
Tempo original: 48 segundos
Penalidades: 2
Tempo final: 58 segundos

Piloto 2: Lucas
Tempo original: 55 segundos
Penalidades: 0
Tempo final: 55 segundos

Vencedor: Lucas
VitÃ³ria por pouco

Utilize estruturas condicionais e operadores relacionais para resolver o problema.
*/


/*
QUESTÃƒO 2 - ELEVADOR INTELIGENTE - 0,5 ponto

Um prÃ©dio possui os seguintes destinos disponÃ­veis no elevador:

1 - Subsolo
2 - TÃ©rreo
3 - 1Âº andar
4 - 2Âº andar
5 - 3Âº andar

Crie um programa em C que receba:

- o andar atual do elevador;
- a opÃ§Ã£o de destino escolhida pelo usuÃ¡rio.

Utilize switch para identificar o andar de destino.

Depois, utilizando estruturas condicionais, o programa deverÃ¡ informar o movimento do elevador:

- se o destino estiver acima do andar atual, mostrar "Elevador subindo";
- se o destino estiver abaixo do andar atual, mostrar "Elevador descendo";
- se o usuÃ¡rio escolher o mesmo andar em que o elevador jÃ¡ estÃ¡, mostrar "Elevador jÃ¡ estÃ¡ neste andar".

Considere os seguintes valores para representar os andares:

Subsolo = -1
TÃ©rreo  = 0
1Âº andar = 1
2Âº andar = 2
3Âº andar = 3

Ao final, mostre tambÃ©m:

Andar atual:
Andar de destino:
Movimento:

Caso o usuÃ¡rio escolha uma opÃ§Ã£o inexistente no menu, mostre:

Destino invÃ¡lido.
*/


/*
QUESTÃƒO 3 - VALIDAÃ‡ÃƒO E CLASSIFICAÃ‡ÃƒO DE HORÃRIO - 0,5 ponto

Crie um programa em C que receba:

- uma hora;
- os minutos.

Primeiro, o programa deverÃ¡ verificar se o horÃ¡rio informado Ã© vÃ¡lido.

Considere vÃ¡lido somente quando:

- a hora estiver entre 0 e 23;
- os minutos estiverem entre 0 e 59.

Caso o horÃ¡rio seja invÃ¡lido, mostre:

HorÃ¡rio invÃ¡lido.

Caso o horÃ¡rio seja vÃ¡lido, classifique-o de acordo com o perÃ­odo do dia:

- de 00:00 atÃ© 05:59 -> Madrugada;
- de 06:00 atÃ© 11:59 -> ManhÃ£;
- de 12:00 atÃ© 17:59 -> Tarde;
- de 18:00 atÃ© 23:59 -> Noite.

AlÃ©m disso, verifique se o horÃ¡rio informado corresponde exatamente ao inÃ­cio de uma hora,
ou seja, se os minutos forem iguais a 0.

Nesse caso, mostre tambÃ©m:

HorÃ¡rio cheio.

Exemplo:

Digite a hora: 18
Digite os minutos: 0

HorÃ¡rio vÃ¡lido.
PerÃ­odo: Noite
HorÃ¡rio cheio.

Outro exemplo:

Digite a hora: 25
Digite os minutos: 10

HorÃ¡rio invÃ¡lido.

Utilize operadores relacionais, operadores lÃ³gicos, if, else if e else.
*/