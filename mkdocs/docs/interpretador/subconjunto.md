

Este interpretador implementa uma versão reduzida do C++, focada nas construções essenciais para compreensão e prática de compiladores. Não implementa todas as funcionalidades complexas do C++ moderno.

---

### Suportado

#### Tipos básicos
- int, float, double, char, bool, string, long, short, unsigned, signed, auto, void

#### Operações Aritméticas
- Soma (+), Subtração (-), Multiplicação (*), Divisão (/), Módulo (%)

#### Operações Relacionais e Lógicas
- <, >, <=, >=, ==, !=, &&, ||

#### Controle de Fluxo
- if / else
- while
- for

#### Variáveis e Atribuições
- Declarações simples (int x;, float y;, ...)
- Atribuições (x = 5;)
- Inicialização múltipla (int a = 1, b = 2;)
- Incremento/decremento (x++, x--)

#### Funções
- Declaração e definição de funções simples
- Parâmetros e retorno de tipos básicos

#### Estruturas Suportadas
- Blocos básicos ({ ... })
- Leitura e escrita simples (cin, cout, endl)
- Escopos aninhados

#### Análise Semântica
- Detecção de variáveis não declaradas
- Detecção de variáveis não inicializadas
- Detecção de tipos incompatíveis em operações e atribuições
- Detecção de redeclaração de variáveis
- Detecção de operações inválidas entre tipos

---

### Exemplos de Erros Semânticos Detectados
- Uso de variável não declarada: `x = a + b;`
- Uso de variável não inicializada: `int x; y = x + 1;`
- Tipos incompatíveis: `int i; string s; i = s;`
- Operação inválida: `char c; float f; resultado = c % f;`
- Redeclaração: `int x; int x;`
- Operação lógica com tipos não booleanos: `int a, b; if (a && b) { ... }`

---

