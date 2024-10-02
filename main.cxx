#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
	
	// expressao(x=0,y=2;x<10;x+=2,x++){condicao}
		int opt,ate;
		
		cout<<"\n***********************************";
		cout<<"\nBEM VINDO AO PROGRAMA DE MATEMÁTICA";
		cout<<"\n***********************************";
		cout<<"\nAUTOR: Ronny \nDate: 2/10/24";
		
		home: 
		cout<<"\n\n\t1: VER NÚMEROS PARES E IMPARES\n\t2: FAZER CONTAS \n\t3: VER TABUADA \n\t4: Sair";
		cout<<"\n\nSelecione Uma Opcao: ";
		cin>>opt;
			
			if(opt==1){
			cout<<"\nDESEJA VER NUMEROS PARES E IMPARES ATE AONDE: ";
			cin>>ate;
			
			for(int x=2, y=3;x<=ate;x+=1,y+=3,x++,y++){
			
			cout<<"\nNÚMEROS PARES: X="<<x<<" -- NÚMEROS IMPARES: Y="<<y;
				
			}
			goto home;
				}
					
				else if(opt==2){
					int a,b,res;
					char op;
					
					cout<<"\nDigite Dois Números: ";
					cin>>a;
					cin>>b;
					
					cout<<"\nDigite Uma Operação +-*/";
					cin>>op;
					
					switch(op){
						
						case '+':
							res = a+b;
							cout<<"\n"<<a<<"+"<<b<<"="<<res;
							goto home;
							break;
							
						case '-':
							res = a-b;
							cout<<"\n"<<a<<"-"<<b<<"="<<res;
							goto home;
							break;			
							
						case '*':
							res = a*b;
							cout<<"\n"<<a<<"*"<<b<<"="<<res;
							goto home;
							break;							
						
						case '/':
							res = a/b;
							cout<<"\n"<<a<<"/"<<b<<"="<<res;
							goto home;
							break;		
							
						default:
							cout<<"Opcao Inválida!!";
							goto home;
						}
					
					}
					else if(opt==3){
						
						int c,d;
						
						voltando:
						
						cout<<"\nDigite O Número Que Deseja ver A Tabuada (1 A 10)\n";
						cin>>d;
						
						if(d>10){
							cout<<"\nFAVOR DIGITAR VALORES MENORES OU IGUAL A 10!\n";
							goto voltando;
							}
						
						for(c = 0; c<=10; c++){
							cout<<"\n"<<d<<"X"<<c<<"="<<c*d;
							}
						
						goto home;
						}
						else if(opt==4){
							cout<<"\nOBRIGADO POR UTILIZAR O PROGRAMA!";
							
							}
							
							else{
								cout<<"Opcao Invalida";
								goto home;
								}
					return 0;
			}
		
	
