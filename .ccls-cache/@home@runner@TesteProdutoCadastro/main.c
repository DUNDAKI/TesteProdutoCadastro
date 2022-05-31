#include <stdio.h>
#include <string.h>
#include <locale.h>

//QUANTIDADE DE PRODUTOS
#define TAM_PRODUTO 10
#define SIZE 10
#define DESCRICAO 2
#define LINHA 

void cadastrar();
void listar();
void listaTeste();

struct Produto {
  char nomeProduto[SIZE];
  int qtd_produto;
  int qtdVenda;
};

//VARIAVÉIS GLOBAIS
int i;
int numCadastro;
struct Produto lista[SIZE];
int maior = 0, menor = 0;
int consulta=0;
int calcularEstoque(int estoque, int venda){
  int calculo;   
  return  calculo = estoque - venda;
}

int main(){
  cadastrar();
  listar();
  


  

}

void cadastrar(){
 
  printf("Informe quantos produtos deseja cadastrar: ");
  scanf("%d", &numCadastro);

  for(i = 0; i < numCadastro; ++i ){
      consulta++;
      printf("Digite nome do  produto: ");
      scanf("%s", &lista[i].nomeProduto);
      fflush(stdin);
  
      printf("Digite quantidade do produto: ");
      scanf("%d", &lista[i].qtd_produto);
      fflush(stdin);
  
      printf("Digite quantidade de venda: ");
      scanf("%d", &lista[i].qtdVenda);
      fflush(stdin);

      printf("\n");
     

    
  } 
}

void listar(){
    int result;
      for(i = 0; i < numCadastro; ++i ){
         result = calcularEstoque(lista[i].qtd_produto,  lista[i].qtdVenda);
         // printf("Estoque Atualizado: %d\n", result);
        
        if(result < 30){
            printf("\n-----------ESTOQUE----------\n");
            printf("Nome do produto: %s\n", lista[i].nomeProduto);
            printf("Quantidade produto %d\n", lista[i].qtd_produto);
            printf("Quantidade de venda: %d\n", lista[i].qtdVenda);
            printf("Estoque Abaixo do limite: \n");
            printf("Estoque Atualizado: %d\n", result);
            printf("\n");
          
        }
       
      }

      
  
      for(i = 0; i < numCadastro; ++i ){

      if(i == 0){
        maior = lista[i].qtd_produto;
        menor = lista[i].qtd_produto;      
      }
      if(lista[i].qtd_produto > maior){
          maior = lista[i].qtd_produto;
      }
      if(lista[i].qtd_produto < menor){
        menor = lista[i].qtd_produto;
      }
          

       if(maior > menor){
              // printf("-----------------");
              printf("Este produto é o maior: %s\n", lista[i].nomeProduto); 
      }


      }
       
       
 
}

