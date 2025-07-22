# Como Configurar o Interpretador

Este documento explica como configurar e executar o interpretador de C++ deste projeto.

## Pré-requisitos

- Flex
- Bison
- GCC (ou outro compilador C/C++)
- Make

## Passos para Compilação e Execução

1. Clone o repositório:

```bash
git clone https://github.com/fcte-compiladores/trabalho-final-trablhofinal-interpretador-cpp.git
cd Interpretador_Cpp
```

2. Compile o projeto usando o makefile:

```bash
cd src
make
```

3. Execute o interpretador:

```bash
make run
```

Ou para rodar com um arquivo de teste:
```bash
make run-hello        # roda com o teste hello.cpp
make run-conditional  # roda com o teste conditional.cpp
make run-loop         # roda com o teste loop.cpp
make run-math         # roda com o teste math.cpp
```

O executável gerado será chamado `executavel`.

Substitua os comandos conforme o arquivo de teste desejado em `codigos_teste/`.

## Estrutura dos Diretórios

- `src/` - Código-fonte do interpretador
- `mkdocs/` - Documentação do projeto

## Dicas

- Certifique-se de que todas as dependências estejam instaladas no seu sistema.
- Para limpar arquivos de build, utilize:

```bash
make clean
```

- Consulte a documentação para exemplos de uso e detalhes sobre o subconjunto de C++ suportado.
