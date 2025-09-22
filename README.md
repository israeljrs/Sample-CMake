# Sample-CMake

Exemplo mínimo de projeto C/C++ usando CMake para configurar versão via `configure_file` e compilar um executável simples.

## Visão Geral
- Executável gerado: `hello`
- Versão do app definida em `CMakeLists.txt` e injetada em `SampleConfig.h` via `configure_file`.
- Código-fonte principal em `main.cpp` imprime a versão e uma mensagem de boas‑vindas.

## Pré-requisitos
- CMake >= 2.8 (qualquer versão mais recente também funciona)
- Compilador C++ (GCC, Clang ou MSVC)

## Como Compilar e Executar
Unix/macOS:
```bash
mkdir -p build
cd build
cmake ..
cmake --build .
./hello
```

Windows (PowerShell):
```powershell
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022" # opcional: escolha do gerador
cmake --build . --config Release
./Release/hello.exe
```

## Estrutura do Projeto
- `CMakeLists.txt`: configura o projeto, define a versão e gera o executável `hello`.
- `main.cpp`: fonte principal; imprime versão (`SAMPLE_VERSION_*`) e mensagem.
- `SampleConfig.h.in`: template usado por `configure_file` para gerar `SampleConfig.h` em tempo de configuração.
- `README.md`: este arquivo.

## Como a Versão Funciona
- Em `CMakeLists.txt`, as variáveis `Sample_VERSION_MAJOR`, `MINOR` e `PATCH` definem a versão.
- O `configure_file` cria `SampleConfig.h` no diretório de build com macros `SAMPLE_VERSION_*`.
- O `main.cpp` inclui `SampleConfig.h` para imprimir a versão.

Para mudar a versão, ajuste os valores no `CMakeLists.txt` e reconfigure/reconstrua.

## Limpeza
Para remover artefatos de build gerados fora da árvore de fontes, basta apagar a pasta `build/`:
```bash
rm -rf build
```

## Dicas e Solução de Problemas
- Se tiver múltiplos toolchains/compiladores, especifique o gerador: `cmake .. -G "Ninja"` ou o da sua IDE.
- Em Windows com MSVC, execute no terminal “x64 Native Tools Command Prompt” para garantir ambiente configurado.
- Se mudar variáveis de versão, rode `cmake ..` novamente para regenerar `SampleConfig.h`.

## Próximos Passos (opcional)
- Definir o padrão C++: adicione `set(CMAKE_CXX_STANDARD 17)` ao `CMakeLists.txt`.
- Separar código em pastas `src/` e `include/` e atualizar o `CMakeLists.txt` conforme crescer o projeto.
