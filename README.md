# CarManager - Sistema de Gestão de Carros em C

> Projeto simples feito em linguagem C para gerenciamento de frotas de carros, com persistência em arquivos `.txt` e organização modular.

## 🚀 Funcionalidades

* Cadastrar carros
* Listar todos os carros
* Buscar carro por placa
* Editar dados do carro
* Remover carro
* Gerar relatórios personalizados (por ano, marca, status etc)
* Salvar e carregar dados de arquivo `carros.txt`

## 📁 Estrutura de Pastas

```
CarManager-C/
├── src/              # Código-fonte (.c)
├── include/          # Arquivos de cabeçalho (.h)
├── build/            # Arquivos compilados
├── data/             # Arquivo de dados (txt)
├── Makefile          # Script de compilação
├── README.md         # Este arquivo
└── .gitignore        # Ignora a pasta build/ no Git
```

## 🎓 Estrutura de Dados

Cada carro é representado por:

```c
struct Carro {
    char placa[10];
    char marca[20];
    char modelo[20];
    int ano;
    char cor[15];
    char status[10]; // "Ativo" ou "Inativo"
};
```

## 📝 Exemplo de Entrada no Arquivo carros.txt

```
ABC1234;Toyota;Corolla;2020;Branco;Ativo
XYZ5678;Ford;Fiesta;2018;Preto;Inativo
```

## 🚩 Como Compilar e Executar

1. Execute o comando:

```bash
make
```

2. O executável será gerado em `build/programa`

3. Para rodar o programa:

```bash
./build/programa
```

## 📊 Status

\:construction: Em desenvolvimento

## 📅 Roadmap Futuro

* [ ] Interface em terminal com menu dinâmico
* [ ] Uso de ponteiros e listas dinâmicas
* [ ] Exportação de relatórios em formato CSV
* [ ] Testes automatizados com assert.h

## 🚜 Como Contribuir

1. Faça um fork do repositório
2. Crie uma branch: `git checkout -b minha-feature`
3. Faça commit das suas alterações: `git commit -m 'minha nova feature'`
4. Faça push para a sua branch: `git push origin minha-feature`
5. Abra um Pull Request

---

Desenvolvido por Belchior QS ❤️

