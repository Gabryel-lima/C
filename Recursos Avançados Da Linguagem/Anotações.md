# Alocação de memória dinâmica com o malloc


As dimensões de uma matriz estão declaradas nas variáveis abaixo:

```cpp
int linhas = 5;
int colunas = 10;
```

Aloque essa matriz de maneira dinâmica.

VER OPINIÃO DO INSTRUTOR

### Opinião do instrutor

O código ficará assim:

```cpp
// alocando espaço para as linhas,
// que guardam ponteiro de inteiro.
matriz = malloc(sizeof(int*) * linhas);

// agora, para cada linha, alocamos
for(int i = 0; i < linhas; i++) {
    matriz[i] = malloc(sizeof(int) * (colunas+1));
}
```

---
