# TF-Arquitetura
Um estudo em performance de cache desenvolvido como o trabalho final da disciplina de Arquitetura de computadores, ministrada pelo professor Eduardo Todt na UFPR em 2026.1

# Arquivos do repositório

- **Trabalho final - Arquitetura.pdf**: O pdf com a nossa análise, além de orientações e explicações dos códigos.
- **cacheline.c:** Código do Daniel Lemire utilizado para fazer a benchmark para descobrir o tamanho da linha da sua cache.
- **mul_matrizes.c:** Código da multiplicação de matrizes da maneira tradicional, que possui diversas cache misses.
- **mul_matrizes_blocos.c:** Código da multiplicação de matrizes da maneira dividindo em blocos.
- **resultados_cacheline.txt:** São o resultado utilizado no gráfico do pdf ao rodar a cacheline.c pulando de 8 em 8 blocos.
