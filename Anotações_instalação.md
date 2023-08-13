## MinGW

Este software inclui um conjunto de arquivos cabeçalho para a API do Windows que permite a pessoa dev usar o GCC. O GCC (GNU Compiler Collection) é um conjunto de compiladores de linguagens de programação. Nesses compiladores estão incluídos o de C e C++.

1) Assim que acessar o link disponível acima, você verá a seguinte tela e deverá clicar em  **Download** .

![Página inicial para o Download do MinGW. Na parte superior temos uma tarja preta com a logo do SourceForge e botões como Help e Create. Logo abaixo temos uma tarja laranja com botões no canto esquerdo e opção de pesquisa no canto direito, além dos botões para as redes sociais. Abaixo temos uma faixa branca sem nenhum conteúdo. Logo abaixo dessa faixa branca temos escrito em destaque “MinGW - Minimalist GNU for Windows”. Também está disponível a quantidade de Downloads e a data da última atualização, que foi feita em 5 de setembro de 2021. Também temos a informação que o programa é classificado com 5 estrelas. No canto inferior esquerdo da imagem temos um botão verde escrito Download destacado com uma caixa vermelha e uma seta, também vermelha.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem1.png)

2) Quando o Download for finalizado vá até a pasta do seu computador em que o arquivo foi salvo e execute. Assim que executar o programa você verá a guia “MinGW Installation Manager Setup Tool”, mostrada abaixo. Clique em **Install** (Instalar).

![Temos a imagem inicial da execução do programa. Nela há informações, como o fato do software ser gratuito. Na parte inferior temos 3 botões. O botão maior, do lado esquerdo, tem a opção View Licence. No lado direito temos dois botões, o primeiro, que deve ser selecionado, é o Install e o segundo, ao lado dele, é o Cancel. O botão Install está destacado com um retângulo vermelho.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem2.png)

3) Na página seguinte, clique em **Continue** (Continuar).

![Temos a segunda tela da instalação do MinGW. Nela temos na parte superior a versão do programa. A versão é a zero ponto dois beta dois zero um três um zero zero quatro traço um. Abaixo temos o diretório de instalação que é o C dois pontos contra barra MinGW. Ao lado deste diretório temos o botão Change, Mudar em inglês. Não é necessário fazer a alteração. Logo abaixo temos diversas informações e opções que podem ser marcadas ou desmarcadas. Essas opções estão ligadas à interface do usuário. Não é necessário marcar ou desmarcar as opções. Na parte inferior temos 3 botões. O botão maior, do lado esquerdo, tem a opção View Licence. No lado direito temos dois botões, o primeiro, que deve ser selecionado, é o Continue e o segundo, ao lado dele, é o Cancel. O botão Continue está destacado com um retângulo vermelho.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem3.png)

4) Com isso, a instalação do MinGW está concluída e podemos executar o MinGW.
5) Na aba  **Basic Setup** , localizada no canto esquerdo, selecione as opções **mingw32-base** e  **mingw32-gcc-g++** .

![Imagem inicial do MinGW. Na barra superior temos o nome do programa do lado esquerdo, sendo ele MinGW Installation Manager. Do lado direito temos três ícones, um traço para minimizar a tela, um quadrado para diminuir a tela e um x para fechar o programa. Abaixo temos uma faixa com três opções na parte esquerda. As opções são Installation, Package, Settings. Na parte esquerda da tela temos um faixa com dois blocos Basic Setup e All Packages. Basic Setup está selecionado e destacado com um retângulo vermelho. Ao lado temos sete opções de marcação. A primeira é a mingw developer toolkit. A segunda é mingw trinta e dois base. A terceira é mingw trinta e dois gcc ada. A quarta é mingw trinta e dois gcc fortran. A quinta é mingw gcc g mais mais. A sexta é mingw trinta e dois gcc objc. A sétima é msys base. As opções mingw trinta e dois base e a opção mingw trinta e dois gcc g mais mais estão selecionadas e destacadas com um retângulo vermelho. Abaixo temos 5 seções. General, Description, Dependencies, Installed Files e Versions. A seção Description está selecionada.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem4.png)

6) No canto superior esquerdo da tela você verá o que está mostrado na imagem a seguir. Clique em **Installation** (Instalação) e em seguida **Apply Changes** (Aplicar Mudanças).

![Canto superior esquerdo o MinGW. Nele podemos ver na parte mais acima escrito MinGW Installation Manager. Logo abaixo temos as opções Installation, Package e Settings. A opção Installation está destacada com um retângulo vermelho. Como essa opção foi selecionada, temos mais quatro opções que aparecem abaixo. Em ordem, são elas: Update Catalogue, Mark All Upgrades, Apply Changes e Quit. A opção Apply Changes está destacada com um retângulo vermelho.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem5.png)

7) Você verá na tela o texto abaixo, em inglês. Clique em **Apply** (Aplicar).

![Temos o texto “Tudo bem para continuar? As mudanças do pacote mostradas abaixo serão implementadas assim quando você escolher ‘Aplicar’ ” escrito, em inglês, logo no início. Ao lado temos três botões: Apply, Defer, Discard. A opção Apply está destacada com um retângulo vermelho.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem6.png)

 **Tradução** :

"*Tudo bem para continuar?*

As mudanças do pacote mostradas abaixo serão implementadas assim quando você escolher ‘Aplicar’"

8) Aguarde a instalação até que apareça a tela com o conteúdo a seguir. Clique em **Close** (Fechar).

![Está escrito, em inglês, a frase “Todas as alterações foram aplicadas com sucesso; Agora você pode fechar esta janela”. Uma caixinha de marcação tem ao lado a opção “Fechar a janela automaticamente, quando a atividade for concluída.”. Ao lado desse texto temos o botão com Fechar, escrito em inglês. Esse botão está destacado com um retângulo vermelho.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem7.png)

 **Tradução** :

"Todas as alterações foram aplicadas com sucesso; Agora você pode fechar esta janela. Fechar a janela automaticamente, quando a atividade for concluída."

Agora, nosso próximo passo é configurar nossas variáveis de ambiente.

## Variáveis de ambiente

Quando um programa é executado ele precisa receber certas informações. Essas informações devem ser passadas por alguém e nesse caso que entram as  **variáveis de ambiente** . A variável de ambiente que vamos modificar é a  **PATH** . Ela guarda informações de onde estão nossos arquivos executáveis para que possamos executar um comando sem a necessidade de digitar o caminho absoluto.

9) Vá até a barra de pesquisa do seu Windows e pesquise “Editar as variáveis de ambiente do sistema”. Selecione a opção destacada.

![Imagem do pesquisar no windows com vari escrito a opção de busca. Abaixo temos diversas opções. Temos opções como Tudo e Aplicativos logo abaixo da barra de pesquisa. Mais abaixo temos a melhor correspondência. Essa opção é “Editar as variáveis de ambiente do sistema”. Ela tem como símbolo um monitor com um check na parte superior direita dele. Essa opção está destacada com um retângulo vermelho.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem8.png)

10) Abrirá a tela abaixo. Na aba **Avançado** clique em **Variáveis de Ambiente…”.

![Na parte superior esquerda temos o nome da janela. O nome é Propriedades do Sistema. Na direita temos um x para que a janela possa ser fechada, quando necessário. Mais abaixo temos as opções: Nome do Computador, Hardware, Avançado, Proteção do Sistema e Remoto na vertical. A opção Avançado está com um destaque de um retângulo retângulo e uma seta com um número 1. Abaixo temos três blocos de configurações. O primeiro é Desempenho. O segundo é Perfis de Usuário. A terceira é Inicialização e Recuperação. Abaixo desses três blocos temos a opção Variáveis de Ambiente destacada com um retângulo vermelho e uma seta com o número dois. Na parte inferior da imagem temos três opções. São elas: Ok, Cancelar e Aplicar. A opção aplicar está desativada, visto que não tivemos nenhuma modificação.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem9.png)

11) Teremos algumas variáveis de usuário. Selecione **Path** (ela ficará azul) e vá em **Editar...**

![Na parte superior temos o nome da janela na parte esquerda. O nome é Variáveis de Ambiente. Na parte direita temos um x para que a janela possa ser fechada, quando necessário. Abaixo temos dois blocos: Variáveis de usuário para Larissa e Variáveis do sistema. O primeiro bloco, Variáveis de usuário para Larissa, está com seis variáveis e seus valores. A variável Path está destacada com um retângulo vermelho e uma seta com o número um. Abaixo das variáveis temos três botões. Em ordem: Novo, Editar e Excluir. O botão do meio, Editar, está destacado com um retângulo vermelho e uma seta com o número dois.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem10.png)

12) Vá até uma linha em branco e selecione (você pode dar dois cliques ou clicar em “Editar” após selecionar). Digite  **C:\MinGW\bin** . Após, clique em  **OK** .

![Na parte superior temos o nome da janela na parte esquerda. O nome é Variáveis de Ambiente. Na parte direita temos um x para que a janela possa ser fechada, quando necessário. Temos diversas variáveis e linhas em branco. A quinta linha está selecionada com o texto C dois pontos contra barra MinGW contra barra bin. Essa linha está destacada com um retângulo vermelho e uma seta com o número um. Ao lado dessas linhas temos sete botões. Em ordem: Novo, Editar, Procurar, Excluir, Move para cima e Mover para baixo. O botão Editar está selecionado com um retângulo vermelho e uma seta com o número dois. Na parte inferior direita temos dois botões. Temos o botão Ok, destacado com um retângulo vermelho e uma seta com o número três, e o botão Cancelar.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem11.png)

Com isso finalizamos as configurações e já podemos compilar e executar códigos em C/C++ no Windows. Caso ainda assim ocorra algum erro para compilar seus programas, recomendo verificar novamente se a variável de ambiente foi alterada com sucesso. Acontecem casos em que a variável acaba não sendo salva ou teve algum erro de digitação.

## Executando no Prompt de Comando

1) Vá até o diretório onde seu arquivo `.c` ou `.cpp` está salvo através do comando `cd`. Para conferir se realmente está na pasta desejada use o comando `dir`.

![Imagem do Prompt de comando. O primeiro comando executado foi cd OneDrive\Documentos\Alura\C. Esse comando é utilizado para ir até a posta do arquivo no meu computador. Depois disso é possível ver os arquivos que estão no diretório atual após o comando dir ser executado.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem12.png)

2) Após, compile o arquivo utilizando `gcc teste.c -o teste.exe`. Nenhum resultado é obtido. Isso significa que a [compilação](https://www.alura.com.br/artigos/o-que-e-compilacao) foi feita com sucesso.

**Observação:** Lembrando que teste é o nome do arquivo que eu escolhi para usar como exemplo. Você utilizará o nome que você escolheu. Verá que um novo arquivo `.exe` aparecerá nessa mesma pasta. Esse é o arquivo executável.

![Após os comando citados na última imagem, o comando gcc teste.c -o teste.exe foi executado. Se nenhum resultado é obtido, isso significa que a compilação foi feita com sucesso.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem13.png)

4) Agora, podemos executar utilizando .\”teste.exe”.

![Após os comando citados na última imagem, o comando .\”teste.exe” foi executado. Obtivemos o resultado esperado, Olá mundo.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem14.png)

## Ferramentas para aqueles que utilizam o Visual Studio Code

Caso utilize o Visual Studio Code como editor de texto, recomendo a instalação de duas extensões que facilitarão sua experiência programando com essas linguagens. A primeira delas é a  **C/C++** .

![Na esquerda da imagem temos um círculo roxo com C barra C mais mais escrito no centro dele em uma barra branca com preto. Em uma fonte maior temos C barra C mais mais escrita na parte superior. Temos ao lado, em uma fonte menor, a versão da extensão. Nesse caso a versão é a um ponto sete ponto um. Abaixo temos o autor da extensão, o número de Downloads e classificação em até cinco estrelas. A extensão é da Microsoft e a extensão possui quase quatro estrelas. Logo abaixo, no meio da imagem está uma breve descrição do que a extensão faz. Está escrito em inglês C barra C mais mais IntelliSence, debigging, and code browsing. Abaixo temos o botão verde com a opção Instalar. Ao lado dessa opção temos uma engrenagem.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem15.png)

Essa extensão irá permitir o uso do intelliSence, debugging e code browsing. O intelliSence nos permite o preenchimento automático quando estamos codando. É possível, por exemplo, listar variáveis ou informações do parâmetro. Veja:

![Código em C com uma estrutura básica. Biblioteca stdio.h e a função principal. Dentro da função principal temos um for escrito com várias sugestões para completar o código automaticamente. A opção do loop for está destacada com um retângulo vermelho.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem16.png)![Código em C com uma estrutura básica. Biblioteca stdio.h e a função principal. Dentro da função principal temos a estrutura de um for gerada automaticamente com o auxílio do intelliSence.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem17.png)

O debugging (depuração, em português) será o processo de encontrar algum bug em seu código. Ou seja, ele irá facilitar a vida da desenvolvedora ou do desenvolvedor, permitindo que o erro seja encontrado com mais facilidade.

A segunda extensão que recomendo é a  **C/C++ Compile Run** . Ela permite que o código seja compilado e executado pressionando apenas a tecla  **F6** . Portanto, no Visual Studio Code, pressione F6 no programa que deseja executar e você verá o resultado no terminal disponível na parte inferior da tela.

![Na esquerda da imagem temos um círculo laranja com C barra C mais mais escrito no centro dele. Em uma fonte maior temos C barra C mais mais Compile Run escrito na parte superior. Temos ao lado em uma fonte menor a versão da extensão. Nesse caso a versão é a um ponto zero ponto quinze. Abaixo temos o autor da extensão, o número de Downloads e classificação em até cinco estrelas. O autor da extensão se chama Daniel Pinto e ela é classificada com quase cinco estrelas. Logo abaixo,no meio da imagem está uma breve descrição do que a extensão faz. Está escrito em inglês Compile e Run single c barra c mais mais files easly.  Em português é algo como compilar e executar arquivos em C ou C mais facilmente. Abaixo temos o botão verde com a opção Instalar. Ao lado dessa opção temos uma engrenagem.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem18.png)

**Veja um exemplo de compilação e execução com o Visual Studio Code**

![Compilação e execução de um programa simples em C para mostrar a frase Olá, mundo. Temos uma página do Visual Studio Code com diversas pastas na parte esquerda do gif. Após pressionar o F6 vemos o terminal aparecendo com o retorno esperado pelo programa.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem19.gif)

## Atalho para quem utiliza o Sublime Text

Uma dica, para aqueles que [**utilizam o Sublime Text**](https://www.alura.com.br/artigos/sublime-text-um-dos-melhores-editores-de-codigo), conseguimos compilar e executar utilizando o  **CTRL+B** .

![Exemplo de um código em C e sua saída. O código está em uma tela do sublime text. Logo na parte superior temos o caminho para encontrar o arquivo e o símbolo do Sublime logo no canto esquerdo. Logo abaixo temos opções como File, Edit, Selection entre outras. Abaixo temos uma aba com o nome do arquivo. O nome utilizado foi teste2. Abaixo temos um exemplo de código em C para imprimir um Olá Mundo. A execução do programa foi feita com o comando CTRL mais B.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem20.png)

**Veja um exemplo de compilação e execução com o Sublime Text**

![Compilação e execução de um programa simples em C para mostrar a frase Olá, mundo. Temos uma página do Sublime Text com diversas pastas na parte esquerda do gif. Após pressionar o Ctrl mais b, vemos o terminal aparecendo com o retorno esperado pelo programa.](https://www.alura.com.br/artigos/assets/compilando-executando-programas-cc-windows/imagem21.gif)

## Conclusão

Agora seu ambiente está preparado para que você possa estudar e se aprofundar ainda mais no que essas linguagens podem te oferecer.

Quer mergulhar ainda mais no mundo da tecnologia? Leia também:

* [As linguagens C e C++: qual a diferença entre elas?](https://www.alura.com.br/artigos/linguagens-c-c-qual-diferenca-entre-elas)
* [Começando a programar com C](https://www.alura.com.br/artigos/comecando-a-programar-com-c)
* [C++: Vale a Pena Aprender em 2021? Por que e onde Usar?](https://www.alura.com.br/artigos/formacao-linguagem-c-plus-plus)
* [Como criar um README para o seu perfil do GitHub](https://www.alura.com.br/artigos/como-criar-um-readme-para-seu-perfil-github)
