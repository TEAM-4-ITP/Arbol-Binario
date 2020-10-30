	//Librerías de C++
	#include <iostream>
	#include <cstdlib>
	
	//Util para usar las palabras reservadas cout y cin
	using namespace std;
	
	//Creación de una estructura llamado nodo_alum
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
	
	//Declaración de funciones, algunos con paso de parámetros
	void menu();
	void insertar(ABB &arbol, int control1);
	void eliminar(ABB &arbol,int control1);
	void imprimir_arbol(ABB arbol, int n);
	void buscarmenmay(ABB &arbol, int control);
	void buscarmaymen(ABB &arbol,int control);
	int buscar(ABB &arbol,int control);
		
	//Función menu	
	void menu(){
		int opc,control1;
		do{
			system("cls");//Limpieza de pantalla
			cout << "\n\t1. Insertar hoja";//Opciones para el usuario
			cout << "\n\t2. Eliminar hoja";
			cout << "\n\t3. Ver árbol";
			cout << "\n\n\t\t\t4. Exit";
			cout << "\n Ingrese opción: ";
			cin >>opc;
			//Sentencia switch
			switch(opc){				
				case 1://Casos de la sentencia switch
					system("cls");
					cout << "\n\tIngrese número de control: ";
			        cin >>control1;//Entrada de datos de la estructura por consola 
					insertar(arbol,control1);//Se manda a llamar a la función insertar
					break;
				
				case 2:
					system("cls");
					cout << "\n\tIngrese número de control: ";
			        cin >>control1;
					eliminar(arbol,control1);//Se manda a llamar a la función eliminar
					break;
				
				case 3:
					system("cls");
					imprimir_arbol(arbol,0);//Se manda a llamar a la función imprimir_arbol
					cout << "\n";
					system("pause");
					break;
				
				case 4:
					system("cls");
					cout << "\t\t\tSALIDO"; exit(1);//Finaliza el programa
								
				default:
					cout << "\n\n\t\t\t Opción invalida\n\n";
					system("pause");
					break;
			}
			
		}while(opc != 4);//Mientras la opción sea diferente de los anteriores se vuelve a ejecutar
	}
	
	//Creacíón de variables
	ABB crearNodo(int control1){//Recibe por parámetro el número de control
	    ABB nuevoNodo = new(struct nodo_alum);//Se crea un nuevo nodo con la estructura declarada anteriormente
	    system("cls");
	    cout << "\n\tIngresa datos del alumno";//Se imprime la instrucción por pantalla
		cout << "\n\t===========================";
		nuevoNodo->control=control1;//Los datos ingresados se guardan en las variables de la estructura
        while(getchar() != '\n');//Bucle que vacía buffer de entrada
        cout << "\n\tNombre: ";
        gets(nuevoNodo->nombre);
        cout << "\n\tApellido: ";
        gets(nuevoNodo->apellidos);
        cout << "\n\tIngeniería: ";
        gets(nuevoNodo->ing);
        cout << "\n\tSemestre: ";
        cin >>nuevoNodo->sem;
        while(getchar() != '\n'); //Bucle que vacía buffer de entrada
        
	    nuevoNodo->izq = NULL;//El enlace del subarbol izquierdo apunta a nulo
	    nuevoNodo->der = NULL;//El enlace del subarbol derecho apunta a nulo
	
	    return nuevoNodo;//Retorna el nodo creado
	}
	
	//Función insertar
	void insertar(ABB &arbol, int control1){
		if(buscar(arbol,control1)){//Si el dato ingresado ya existe, se vuelve a ingresar el dato
			cout << "\n\nEl número de control ya existe\n\n";
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
	
	//Función eliminar
	void eliminar(ABB &arbol, int control1){
		if(!buscar(arbol,control1)){//Si el dato ingresado no existe emite un mensaje
			cout<<"\n\nElemento no encontrado";
			system("pause");
			return;
		}
		if(aux->der == NULL && aux->izq == NULL){//Si los últimos nodos ingresados apuntan a Null se ejecutan las lineas siguientes
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
	
	//Función buscarmaymen 
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
	//Función buscarmenmay
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
	//Función que retorna un entero
	int buscar(ABB &arbol, int control1){//la función recibe parámetros
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
	//Función imprimir_arbol
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
	//la función main comienza la ejecución del programa
	int main(){
		setlocale(LC_CTYPE,"Spanish");
	    ABB arbol = NULL;   // creando Arbol
	    menu();
		system("pause");
	    return 0;//Retorno de la función main
	}
