#include <iostream>
#include "Pilha.h"
using namespace std;

        Pilha::Pilha()
        {
            tamanho = 0;
            estrutura = new TipoItem[max_itens];
        }
        Pilha::~Pilha()
        {
            delete[] estrutura;
        }
        bool Pilha::estacheia()
        {
            return(tamanho == max_itens);
        }
        bool Pilha::estavazia()
        {
            return(tamanho == 0);
        }
        void Pilha::inserir(TipoItem item)//push
        {
            if (estacheia()){
                cout << "A pilha esta cheia\n";
                cout << "Nao e possivel inserir este elemento\n";
            }else{
                estrutura[tamanho] = item;
                tamanho++;
            }

        }
        TipoItem Pilha::remover()//pop
        {
            if (estavazia()){
                cout << "A pilha esta vazia\n";
                cout << "nao tem elemento para ser removido!\n";
                return 0;
            }else{
                 tamanho--;
                 return estrutura[tamanho];
            }

        }
        void Pilha::imprimir()
        {
            cout << "Pilha: [ ";
            for (unsigned char i = 0; i < tamanho; i++){
                cout  << estrutura[i] << " ";
            }
            cout << "]\n";
        }
        int Pilha::qualtamanho()
        {
            return tamanho;
        }
