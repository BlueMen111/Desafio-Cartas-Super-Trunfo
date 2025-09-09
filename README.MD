
# Super Trunfo - Países (Atualizado)
Autor: Jórdan — versão conforme enunciado revisado

Este pacote contém três programas em C (Novato, Aventureiro e Mestre), **com comentários detalhados**, seguindo a versão mais recente do desafio:

- **Novato:** cadastro simples de 2 cartas (sem laços/condicionais).
- **Aventureiro:** adiciona propriedades calculadas (densidade e PIB per capita).
- **Mestre:** realiza comparações usando operadores relacionais e calcula o **Super Poder = soma de todas as propriedades** (sem inversão da densidade).

## Arquivos
- `novato.c`
- `aventureiro.c`
- `mestre.c`
- `README.txt` (este arquivo)

## Como compilar e executar
```bash
# Novato
gcc -std=c11 -Wall -Wextra -O2 novato.c -o novato
./novato

# Aventureiro
gcc -std=c11 -Wall -Wextra -O2 aventureiro.c -o aventureiro
./aventureiro

# Mestre
gcc -std=c11 -Wall -Wextra -O2 mestre.c -o mestre
./mestre
```

## Notas importantes
- Mantivemos **sem laços/condicionais** no Novato e Aventureiro, conforme pedido.
- No **Mestre**, as comparações usam **operadores relacionais** diretamente (ex.: `(a > b)`), exibindo `1` se a Carta 1 vence e `0` caso contrário.
- Para lidar com **números grandes**, escolhemos `unsigned long int` para a **população** no Mestre.
- O **Super Poder** é uma soma simples de todas as propriedades (básicas + calculadas). Embora misture unidades, está fiel ao enunciado.
