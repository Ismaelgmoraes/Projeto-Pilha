#ifndef PILHA_H
#define PILHA_H

typedef int TipoItem;
const int max_itens = 100;
class Pilha
{
    public:
        Pilha();
        ~Pilha();
        bool estacheia();
        bool estavazia();
        void inserir(TipoItem item); //push
        TipoItem remover();//pop
        void imprimir();
        int qualtamanho();


    private:
        int tamanho;
        TipoItem* estrutura;
};

#endif // PILHA_H
