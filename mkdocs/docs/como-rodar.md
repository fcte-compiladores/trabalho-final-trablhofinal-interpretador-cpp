# Como rodar o interpretador

Para executar o interpretador corretamente, utilize o redirecionamento de entrada para passar o arquivo de teste. **Não** passe o arquivo como argumento, pois o programa ficará esperando indefinidamente por entrada.

## Exemplo de execução

```sh
./executavel < codigos_teste/uso_correto.cpp
```

Outros exemplos:

```sh
./executavel < codigos_teste/hello.cpp
./executavel < codigos_teste/loop.cpp
```

Se rodar apenas `./executavel` sem redirecionamento, será necessário digitar o código manualmente e finalizar com Ctrl+D.

