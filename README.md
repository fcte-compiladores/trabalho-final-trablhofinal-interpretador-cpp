<h1 align="center"> Interpretador: C++ Python</h1>
<h3 align="center"> 2025.1 </h3>

## Sobre o Projeto

Este repositório foi desenvolvido como parte da disciplina Compiladores 1 (2025/1), ministrada pelo professor Sergio Antônio Andrade de Freitas na Universidade de Brasília. O objetivo, fundamentado na abordagem Problem Based Learning (PBL), é aplicar na prática os conceitos aprendidos ao longo do semestre por meio da criação de um interpretador.

O sistema utiliza Flex para análise léxica e Bison para análise sintática, integrando essas ferramentas em um ambiente C/C++.

## Equipe

<div style="display: flex; flex-direction: row; flex-wrap: wrap; gap: 20px; justify-content: center; text-align: center;">
    <div>
        <a href="https://github.com/mateus9levy">
            <img style="border-radius: 50%;" src="https://github.com/mateus9levy.png" width="100px" />
            <h5>Mateus Levy</h5>
        </a>
    </div>
    <div>
        <a href="https://github.com/fillipeb50">
            <img style="border-radius: 50%;" src="https://github.com/fillipeb50.png" width="100px" />
            <h5>Fillipe Souto</h5>
        </a>
    </div>
</div>

## Documentação
A documentação detalhada do projeto, bem como os códigos-fonte, podem ser acessados neste [repositório](https://mateus9levy.github.io/documenta-oInterpretadorCPP/).

## Orientações para Colaboradores

**Atenção:** Suas modificações só serão publicadas na versão online após a aprovação do PR na branch *main*.

**Nota importante:** Não realize alterações diretamente na branch *gh-pages*.

## Como rodar o interpretador corretamente

Para rodar o interpretador com um arquivo de teste, utilize o redirecionamento de entrada:

```sh
./executavel < codigos_teste/uso_correto.cpp
```

**Não** execute passando o arquivo como argumento (ex: `./executavel codigos_teste/uso_correto.cpp`), pois o programa ficará esperando indefinidamente por entrada.

Veja outros exemplos de uso:

```sh
./executavel < codigos_teste/hello.cpp
./executavel < codigos_teste/loop.cpp
```
