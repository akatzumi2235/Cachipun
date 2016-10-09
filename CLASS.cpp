#include <iostream>
using namespace std;

	
	class persona{
		
		private:
			int piedra;
			int papel;
			int tijeras;
			int opcion;
			
		public:
		
			//persona(int piedra. int papel, int tijeras);
			persona();
			
			persona(int piedras, int papel, int tijeras){
				
				this->piedra=piedra;
				this->papel=papel;
				this->tijeras=tijeras;
				this->opcion=opcion;
			}	
			
			int getPiedra(){
				return piedra;
				
			}
			int getPapel(){
				return papel;
			}
			int getTijeras(){
				return tijeras;
			}
			int getOpcion(){
				return opcion;
			}
			
			void setPiedra(int piedra){
				this->piedra = piedra;
			}
			
			void setPapel(int papel){
				this->papel=papel;
			}
			void setTijeras(int tijeras){
				this->tijeras=tijeras;
			}
			
			void setOpcion(int opcion){
				this->opcion=opcion;
			}
			
			int main(){
				int opcion;
				
				persona person1(piedra, papel, tijeras);
				<<persona person2(piedra, papel, tijeras); 
					
						cout<<"*********bienvenido al cachipum*********"<<endl;
				
				cout<<"1.-piedra"<<endl;
				cout<<"2.-papel"<<endl;
				cout<<"3.-tijeras"<<endl;
				
				cin>>opcion;
				
				system("PAUSE");
				return 0;
			}
			
				
	};
	
	


