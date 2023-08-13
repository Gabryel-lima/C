# Executando o compilador e o código;


***Compile o Código:** No terminal, execute o comando para compilar o código usando o GCC. O comando básico é:*

"

***Execute o Programa:** Depois de compilar com sucesso, você pode executar o programa usando o terminal:*


# Pintf e int main( );

Agora, diremos para o programa "exiba na tela o texto 'Bem-vindo ao nosso jogo de adivinhação'". Infelizmente, programar não é tão simples assim, em português. Usaremos diversas palavras reservadas da Linguagem C. Se quisermos escrever na tela, usaremos a palavra `printf`, abrindo um parênteses para o nosso texto. Em inglês, *print* significa imprimir.

```bash
printf("Bem vindo ao nosso jogo de adivinhação");
```

Entenderemos adiante a função dos parênteses. Por enquanto, lembrem-se que sempre que usarmos `printf`, em seguida abriremos parênteses para inserir um texto entre aspas. No vocabulário de Linguagem C, falaremos ***string*** quando quisermos nos referir a um texto, e tudo que for aberto terá de ser fechado - parênteses, chaves e colchetes, por exemplo. E toda linha termina com ponto e vírgula ou chaves.

```bash
printf("Bem-vindo ao nosso jogo de adivinhação");
```

No entanto, da maneira em que está, o texto ainda não é um programa. Acrescentaremos a função `int main()` para que a Linguagem C entenda que, ao rodar o programa, a primeira função a ser executada deve ser o `printf`:

```cpp
int main() {
    printf("Bem-vindo ao nosso jogo de adivinhação");
}
```

O importante é saber que para começar a escrever um programa em C, é necessário escrever `int main()`. No exemplo, fechei as chaves depois do `printf`, pois queremos passar a ideia de que ele está dentro desse bloco de código, que está separado pelas chaves. Falta só um detalhe. Para usarmos o `printf` precisamos avisar o programa em C que o jogo escreverá, e depois vai ler pelo teclado. Para avisá-lo que a função `printf` será utilizada, incluiremos a biblioteca (conjunto de funções que podem ser utilizadas no programa) em que ela se encontra por meio de `#include <stdio.h>`.

```cpp
#include <stdio.h>

int main() {
    printf("Bem-vindo ao nosso jogo de adivinhação");
}
```

Agora, sim, temos um programa em C! Precisamos rodá-lo para ver o computador imprimir o que foi feito. O computador não entende diretamente essa linguagem, binária, em que usamos apenas os números `0` e `1`. No entanto, nós, seres humanos, não a entendemos, e por isto transformaremos o código que desenvolvemos em código de máquina por meio do  **compilador** , que transforma a Linguagem C em dígitos `0` e

---

# [Guardando o número secreto](https://cursos.alura.com.br/course/introducao-a-programacao-com-c-parte-1/task/8805);

Já imprimimos o cabeçalho do jogo, o próximo passo será guardar um número secreto. Lembrem-se: é um jogo de adivinhação, então temos que fazer a máquina pensar em um número. A princípio, faremos com que a máquina pense em um número fixo. Adiante, programaremos para que ela execute de forma aleatória.

Suponhamos que a máquina pensou no número `42`. Precisaremos guardá-lo em algum lugar, para que seja encontrado quando necessário. Para isso, nomearemos `42` como `numerosecreto = 42` no Sublime.

```cpp
#include <stdio.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    numerosecreto = 42;
}
```

Iniciaremos o desenvolvimento de uma variável ao nomearmos e criarmos um "espaço" para o número `42`. Para programadores, as variáveis funcionam como armazenadoras de valores, um espaço de memória para guardar um número, por exemplo. Para isto, criaremos um espaço de memória nomeado como `numerosecreto` — poderíamos utilizar outro nome.

Porém, esse "espaço" não é uma variável ainda. Para se tornar uma, precisaremos determinar o tipo, especificando o que ela armazenará — texto, string, letra, número inteiro ou número decimal. Considerando que `42` é um número inteiro, acrescentaremos `int`:

```cpp
int numerosecreto = 42;
```

Vamos declarar uma variável chamada `numerosecreto` de valor `42`. Poderemos declarar quantas variáveis forem necessárias, inclusive em duas linhas, em um programa. Por exemplo:

```cpp
int idade = 25;

int tamanhodocalcado;
tamanhodocalcado = 39;
```

Esse foi um exemplo para demonstrar formas de adicionarmos variáveis. Voltando ao código do jogo, no Sublime, tentaremos imprimir a variável criada por meio do `printf()`:

```cpp
#include <stdio.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    printf("numerosecreto é o número secreto. Não conta para ninguém!");
}
```

Ao rodarmos esse novo código no terminal, teremos como retorno:

```markdown
******************************************
* Bem-vindo ao nosso jogo de adivinhação *
******************************************
numerosecreto é o número secreto. Não conta para ninguém!Alura:adivinhacao alura$
```

Notamos que ele não substituiu `numerosecreto` pela variável. Para que isso aconteça, adicionaremos uma **máscara** por meio de `%d`. Dessa forma, indicaremos para `printf()` que neste espaço deve entrar um número inteiro, o qual será impresso na tela. Após a string, passaremos `numerosecreto` como segundo parâmetro, para substituir o valor.

```cpp
#include <stdio.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    printf("%d é o número secreto. Não conta para ninguém!/n", numerosecreto);
}
```

Observe que os dois argumentos foram separados por vírgula (  **`,`** ). O primeiro foi o texto, no qual inserimos a máscara `%d`, para ser substituída pelo que definirmos em seguida. O segundo foi o argumento para o `printf` (`numerosecreto`). No terminal, ao compilarmos o código, teremos o seguinte retorno:

```markdown
******************************************
* Bem-vindo ao nosso jogo de adivinhação *
******************************************
42 é o número secreto. Não conta para ninguém!
Alura:adivinhacao alura$
```

Agora o código foi compilado da maneira que planejamos.

> A variável que substituirá a máscara `%d` sempre será aquela que especificarmos após a vírgula ( **`,`** ).

Em resumo, estudaremos variáveis e como:

* declará-las;
* indicar o tipo de uma variável por meio de `int`;
* nomeá-las;
* finalizar uma declaração de variável com ponto e vírgula ( **`;`** );
* iniciar uma variável na mesma linha, adicionando sinal de igual ( **`=`** ) e um número inteiro (`42`, no exemplo);
* imprimir por meio de `printf()`, inserindo a máscara `%d`, com vírgula ( **`,`** ) e a variável que substituirá a máscara na sequência.

O `printf` (`numerosecreto`) foi utilizado somente para demonstrar como trabalharmos com variáveis. Como estamos desenvolvendo um jogo de adivinhação, excluiremos esse `printf()` que imprime o número secreto.

```cpp
#include <stdio.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

}
```

Adiante, continuaremos o desenvolvimento do jogo.

# Variável com nome repetido;

Variáveis devem ter nomes **únicos** dentro do escopo que estão. Ou seja, não podemos declarar duas variáveis `numerosecreto`.

Se fizermos isso, por algum engano, o compilador reclamará e não nos gerará o executável do programa.

A mensagem será algo como:

```go
error: redefinition of 'numerosecreto'.
```

Ou seja, "redefinição" da variável.

Faça o teste. Crie uma variável com o mesmo nome, e invoque o GCC.

---

# [Chutando números](https://cursos.alura.com.br/course/introducao-a-programacao-com-c-parte-1/task/8806);

Agora que máquina tem um número secreto, vamos programá-la para desafiar o usuário a acertar o número. O usuário irá digitar uma tentativa, e precisamos imprimir o "chute" dele na tela. Para que a máquina leia isto, precisaremos desenvolver um local para guardar a informação digitada. Anteriormente, vimos que para armazenar dados, utilizamos variáveis. Sendo assim, para guardar as tentativas do usuário, acrescentaremos ao código:

```cpp
int chute;
```

Adicionaremos também um `printf()` para imprimir uma mensagem questionando qual o chute do jogador. Por fins estéticos, ao fim do texto, adicionaremos um espaço para que a resposta do usuário não fique emendada no ponto de interrogação. Lembrem-se que o jogo deve ficar atraente para o usuário.

```bash
printf("Qual é o seu chute? ");
```

Para que o computador leia o que é digitado, utilizaremos `scanf()`, função que recebe dois parâmetros, sendo o primeiro deles uma string, em que informamos o que será lido pelo programa. Nesse caso, leremos um número inteiro (1, 2, 12, 100...). Indicaremos isso da mesma forma que fizemos com o `printf()` quando utilizamos `%d` para colocar um número inteiro. O segundo parâmetro será a variável `chute`, que armazenará a tentativa do jogador e será inserida após uma vírgula ( **`,`** ).

```cpp
scanf("%d", chute);
```

Um detalhe interessante: teremos que passar um "e" comercial ( **`&`** ) — conceito que estudaremos mais adiante, quando tivermos uma boa base de Linguagem C — antes da variável:

```cpp
scanf("%d", &chute);
```

No momento, o importante é saber que a função `scanf()` lê o que é digitado, e a variável, que deve estar acompanhada de um "e" comercial ( **`&`** ), armazenará a informação. No exemplo do jogo de adivinhação, o programa armazenará o conteúdo digitado na variável `chute`. Para garantir que está tudo certo, imprimiremos a tentativa do usuário por meio de:

```perl
printf("Seu chute foi %d", chute);
```

Observe que neste `printf()` **não** colocaremos o `&`, que é uma função especial do `scanf`. Assim, o código ficará da seguinte maneira:

```cpp
#include <stdio.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

}
```

No terminal, limparemos a tela por meio de `clear` e faremos o teste do código atualizado.

```markdown
Alura:adivinhacao alura$ ls
adivinhacao.c     adivinhacao.out
Alura:adivinhacao alura$ gcc adivinhacao.c -o adivinhacao.out
Alura:adivinhacao alura$ ./adivinhacao.out
******************************************
* Bem-vindo ao nosso jogo de adivinhação *
******************************************
Qual é o seu chute?
```

Se respondermos a pergunta com o número `20`, teremos o seguinte retorno:

```makefile
Seu chute foi 20
Alura:adivinhacaoalura$
```

Funcionou da maneira que planejamos! Vamos revisar o código desenvolvido no Sublime:

* `int main()` é o ponto de partida. Todo programa começa executando o código que está dentro do método `main`;
* `// imprime cabecalho do nosso jogo` é um comentário que será visualizado somente pelo programador;
* `printf()` imprime na tela o que estiver escrito entre aspas, dentro do parênteses;
* `\n` é o código que imprime "Enter";
* `;` toda linha deve apresentar ponto e vírgula no final;
* `int numerosecreto = 42;` é uma variável de valor 42. Importante lembrar que é um número inteiro, e por isso colocamos `int` na frente;
* `int chute;` também é uma variável, porém sem valor pois isto será inserido pelo usuário;
* `scanf()` é a função que lê o que é digitado, e possui dois parâmetros:
  * `%d`, máscara que indica o que será lido;
  * variável `chute` acompanhada do "e" comercial ( **`&`** )

> Lembrem-se que cada máscara deve ter um argumento, que deverá ser separado por vírgulas.

Somente para exemplificar, vamos inserir o seguinte exemplo no final do código:

```perl
printf("%d %d\n", numerosecreto, chute);
```

Se compilarmos esse código, o retorno será:

```markdown
Alura:adivinhacao alura$ ./adivinhacao.out
******************************************
* Bem-vindo ao nosso jogo de adivinhação *
******************************************
Qual é o seu chute? 10
Seu chute foi 10
42 10
Alura:adivinhacao alura$
```

Veremos que ele imprimirá o número secreto `42`, e o chute `10`, seguindo-se a lógica de que o número de máscaras deve ser igual ao de argumentos. No entanto, considerando que é um jogo de adivinhação, não queremos que o número secreto seja revelado, então apagaremos do código a linha do exemplo que acabamos de conferir.

Notem que no editor de texto colocamos "Enter" (`\n`) para separar os códigos, deixando-os visualmente organizados. O "Enter" é ignorado pelo computador, portanto poderemos colocar a quantidade que for **necessária** para nossa organização. O objetivo é tornar seu código fácil para leitura.

---

# If e else;

Entretanto, o usuário precisa de mais dicas, e precisaremos dizer se o chute dele foi maior ou menor que o número secreto. Para isso, adicionaremos um código em `else`, pois é o trecho que será executado, caso o chute seja diferente do número secreto. Queremos que mensagens sejam exibidas caso o chute seja maior ou menor, e isso nos remete à condicionalidade. Sendo assim, acrescentaremos `if` em `else`. Poderemos, também, acrescentar um `if` dentro de outro. Desta vez a condição será um pouco diferente, pois olharemos se o chute é maior ( **`>`** ) ou menor ( **`<`** ) que o número secreto. Veja o código:

```scss
    else {

        if(chute > numerosecreto) {
             printf("Seu chute foi maior que o número secreto\n");
        }

        if(chute < numerosecreto) {
             printf("Seu chute foi menor que o número secreto\n");
        }
    }
```

---
