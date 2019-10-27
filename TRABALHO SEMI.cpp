#include<iostream>
#include<cmath>
using namespace std;

int main(void){
	char sair='n';
	int opt, api, ka, punto,celta,api_1,api_2, api_3, api_completa, total_api, valor_total;
		//descriçoes veiculos
		ka==40000;
		punto==42000;
		celta==15000;
		//descriçoes de APIs
		api==200;
		api_completa==600;
	
		while(sair=='n'){
		system("CLS");
		std::cout<<"MENU\n";
		std::cout<<"1-Ford K.A\n\n";
		std::cout<<"2-Fiat Punto\n\n";
		std::cout<<"3-Chevrolet Celta\n\n";		
		std::cout<<"Sua Opçao";
		//recebe opt e envia para as cases
		std::cin>>opt;
		
		switch(opt){
			case 1:
				cout<<"Ford K.A\n";
				cin>>ka;
			break;
			case 2:
				cout<<"Fiat Punto\n";
				cin>>punto;
			break;
			case 3:
				cout<<"chevrolet Celta\n";
				cin>>celta;
			break;
			default:std::cout<<"opçao invalida\n";
		}
		while(sair=='n'){
			system("CLS");
			std::cout<<"API\n";
			std::cout<<"valor=11 com Trio Eletrico(Alarme, vidro e Tranca elétrica\n";
			std::cout<<"valor=12 com Ar Condicionado\n";
			std::cout<<"valor=13 com Direçao Hidraulica\n";
			std::cout<<"valor=14 Para Carro Completo\n";
			
			std:: cout<<"Sua opçao";
			
			std::cin>>api;
			
			switch(api){
				case 11:
					//calcular valor de 2%API 40mil	
					cout<<"Total de 2% do Valor do Veiculo"<<endl;
					cin>>api;
				break;
				case 12:
					cout<<"Total de 2% do Valor do Veiculo"<<endl;
					cin>>api;
				break;
				case 13:
					cout<<"Total de 2% do Valor do Veiculo"<<endl;
					cin>>api;
				break;
				case 14:
					cout<<"Total adicional de 6% do Valor do Veiculo e desconto de 3,5%"<<endl;
					cin>>api_completa;
				break;
					
			}
		}
		// calculo para o valor final
		valor_total = api + opt; 
		
		std::cout<<"O valor total e=R$"<<valor_total<<endl;
		std::cout<<"\n Deseja SAIR(s ou n)!";
		std:: cin>>sair;
	}
	
	return 0;
}
