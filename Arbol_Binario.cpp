	//Librer�as de C++
	#include <iostream>
	#include <cstdlib>
	
	//Util para usar las palabras reservadas cout y cin
	using namespace std;
	
	//Creaci�n de una estructura llamado nodo_alum
	struct nodo_alum{
		//Variables de la estructura
		int control;
		char nombre[50];
		char apellidos[50];
		char ing[50];
		int sem;
	    nodo_alum *izq, *der;//Punteros de la estructura
	}*arbol, *aux, *aux2, *ant, *ant2;//variables del tipo nodo_alum
	
	// es un puntero de tipo nodo_alum, que ulitizaremos creacion de variables
	typedef struct nodo_alum *ABB;
	
	//Declaraci�n de funciones, algunos con paso de par�metros
	void menu();
	void insertar(ABB &arbol, int control1);
	void eliminar(ABB &arbol,int control1);
	void imprimir_arbol(ABB arbol, int n);
	void buscarmenmay(ABB &arbol, int control);
	void buscarmaymen(ABB &arbol,int control);
	int buscar(ABB &arbol,int control);
		
	//Funci�n menu	
	void menu(){
		int opc,control1;
		do{
			system("cls");//Limpieza de pantalla
			cout << "\n\t1. Insertar hoja";//Opciones para el usuario
			cout << "\n\t2. Eliminar hoja";
			cout << "\n\t3. Ver �rbol";
			cout << "\n\n\t\t\t4. Exit";
			cout << "\n Ingrese opci�n: ";
			cin >>opc;
			//Sentencia switch
			switch(opc){				
				case 1://Casos de la sentencia switch
					system("cls");
					cout << "\n\tIngrese n�mero de control: ";
			        cin >>control1;//Entrada de datos de la estructura por consola 
					insertar(arbol,control1);//Se manda a llamar a la funci�n insertar
					break;
				
				case 2:
					system("cls");
					cout << "\n\tIngrese n�mero de control: ";
			        cin >>control1;
					eliminar(arbol,control1);//Se manda a llamar a la funci�n eliminar
					break;
				
				case 3:
					system("cls");
					imprimir_arbol(arbol,0);//Se manda a llamar a la funci�n imprimir_arbol
					cout << "\n";
					system("pause");
					break;
				
				case 4:
					system("cls");
					cout << "\t\t\tSALIDO"; exit(1);//Finaliza el programa
								
				default:
					cout << "\n\n\t\t\t Opci�n invalida\n\n";
					system("pause");
					break;
			}
			
		}while(opc != 4);//Mientras la opci�n sea diferente de los anteriores se vuelve a ejecutar
	}
	
	//Creac��n de variables
	ABB crearNodo(int control1){//Recibe por par�metro el n�mero de control
	    ABB nuevoNodo = new(struct nodo_alum);//Se crea un nuevo nodo con la estructura declarada anteriormente
	    system("cls");
	    cout << "\n\tIngresa datos del alumno";//Se imprime la instrucci�n por pantalla
		cout << "\n\t===========================";
		nuevoNodo->control=control1;//Los datos ingresados se guardan en las variables de la estructura
        while(getchar() != '\n');//Bucle que vac�a buffer de entrada
        cout << "\n\tNombre: ";
        gets(nuevoNodo->nombre);
        cout << "\n\tApellido: ";
        gets(nuevoNodo->apellidos);
        cout << "\n\tIngenier�a: ";
        gets(nuevoNodo->ing);
        cout << "\n\tSemestre: ";
        cin >>nuevoNodo->sem;
        while(getchar() != '\n'); //Bucle que vac�a buffer de entrada
        
	    nuevoNodo->izq = NULL;//El enlace del subarbol izquierdo apunta a nulo
	    nuevoNodo->der = NULL;//El enlace del subarbol derecho apunta a nulo
	
	    return nuevoNodo;//Retorna el nodo creado
	}
	
	//Funci�n insertar
	void insertar(ABB &arbol, int control1){
		if(buscar(arbol,control1)){//Si el dato ingresado ya existe, se vuelve a ingresar el dato
			cout << "\n\nEl n�mero de control ya existe\n\n";
			system("pause");
			return;
		}else{
			if(!arbol){
		        arbol = crearNodo(control1);
		    }
		    else{
		    	if(control1 < arbol->control)
		    		insertar(arbol->izq,control1);
		    	else
		    		if(control1 > arbol->control)
	    				insertar(arbol->der,control1);
			}
		}
	}
	
	//Funci�n eliminar
	void eliminar(ABB &arbol, int control1){
		if(!buscar(arbol,control1)){//Si el dato ingresado no existe emite un mensaje
			cout<<"\n\nElemento no encontrado";
			system("pause");
			return;
		}
		if(aux->der == NULL && aux->izq == NULL){//Si los �ltimos nodos ingresados apuntan a Null se ejecutan las lineas siguientes
			if(ant->control > control1)
				ant->izq = NULL;
			else
				ant->der = NULL;
			delete(aux);
	 	}else{
			if(aux->der != NULL)
				buscarmenmay(arbol,control1);
			else
				buscarmaymen(arbol,control1);
			cout<<"\n\nElemento Borrado";
			system("pause");
		}
	}
	
	//Funci�n buscarmaymen 
	void buscarmaymen(ABB &arbol, int control1){//recibe parametros
		aux2 = aux->izq;//Se igualan los auxiliares
		ant2 = aux;
		while(aux2->der){//Mientras el el puntero der apunta a aux2 se ejecuta las siguientes sentencias
			ant2 = aux2;
			aux2 = aux2->der;
		}
		aux->control = aux2->control;
		if(aux2->izq)
			ant2->der = aux2->izq;
		delete(aux2);//Se elimina aux2
		ant2->izq = NULL;
	}
	//Funci�n buscarmenmay
	void buscarmenmay(ABB &arbol,int control1){
		aux2 = aux->der;
		ant2 = aux;
		while(aux2->izq){
			ant2 = aux2;
			aux2 = aux2->izq;
		}
		aux->control = aux2->control;
		if(aux2->der)
			ant2->izq = aux2->der;
		delete(aux2);//Se elimina aux2
		ant2->der = NULL;
	}
	//Funci�n que retorna un entero
	int buscar(ABB &arbol, int control1){//la funci�n recibe par�metros
		ant = NULL;
		aux = arbol;
		while(aux){
			if (control1 == aux->control)
				return(1);
			else{
				ant = aux;
	 			if (control1 > aux->control)
	 				aux = aux->der;
	 			else
	 				aux = aux->izq;
	 		}
	 	}
	 	return(0);
	 }
	//Funci�n imprimir_arbol
	void imprimir_arbol(ABB arbol, int n)
	{
	    if(!arbol)
	    	return;
	    
		imprimir_arbol(arbol->der, n+1);
	    for(int i=0; i<n; i++)
	        cout<<"   ";

	    cout<< arbol->control <<endl;
		imprimir_arbol(arbol->izq, n+1);
		
	}
	//la funci�n main comienza la ejecuci�n del programa
	int main(){
		setlocale(LC_CTYPE,"Spanish");
	    ABB arbol = NULL;   // creando Arbol
	    menu();
		system("pause");
	    return 0;//Retorno de la funci�n main
	}
