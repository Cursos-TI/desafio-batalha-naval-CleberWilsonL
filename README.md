# 🚢 Desafio Batalha Naval - MateCheck

Este projeto simula o clássico jogo Batalha Naval em linguagem C, com três níveis de complexidade: **Novato**, **Aventureiro** e **Mestre**.

---

## 🔰 Nível Novato

- Simula o posicionamento de dois navios: um vertical e outro horizontal.
- Exibe no terminal as coordenadas de cada parte dos navios.
- Não usa entrada do usuário.

---

## 🧭 Nível Aventureiro

- Cria um tabuleiro 10x10 usando uma matriz.
- Posiciona quatro navios: dois retos e dois diagonais.
- Exibe a matriz completa no terminal, com:
  - `0` = vazio
  - `3` = posição com navio

---

## 🧠 Nível Mestre

- Simula habilidades especiais com padrões em matrizes 5x5:
  - Cone
  - Cruz
  - Octaedro
- Exibe a matriz com `1` nas áreas afetadas pela habilidade e `0` no restante.

---

## ▶️ Execução
1:
gcc BatalhaNaval.c -o batalha

2:
./batalha
