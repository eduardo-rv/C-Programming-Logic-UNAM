#include <stdio.h>
#include <stdlib.h>
//#include "C:\\misbibliotecas\\utiles.h"
#include "utiles.h"


typedef struct{
	char nombre[20];
	char apellido1[20];
	char apellido2[20];
}Nombre;

typedef struct{
	char calle[20];
	char numero[5];
	char colonia[20];
	char cp[10];
	char municipio[20];
}Direccion;

typedef struct{
	//Para poner la marca de borrado.
	//1 = Borrado
	//0 = No borrado
	int borrado; 
	
	int clave;
	Nombre nombreContacto;
	Direccion direccionContacto;
	char telefonoCasa[20];
	char telefonoTrabajo[20];
	char celular[20];
	char correoElectronico[50];
}Contacto;

int menuGeneral(){
	int opcion;
	
	system("cls");
	
	Titulo("Agenda de contactos");
	
	printf("1. Agregar contacto\n");
	printf("2. Buscar contacto\n");
	printf("3. Actualizar contacto\n");
	printf("4. Borrar contacto\n");
	printf("5. Muestra todos los contactos\n");
	printf("6. Salir\n\n");
	
	do{
		printf("Opción: ");
		scanf("%d", &opcion);
	}while(opcion<1 || opcion>6);
	
	limpiarBuffer();
	
	return opcion;
	
}

int menuActualizacion(){
	int opcion;
	
	system("cls");
	
	Titulo("Datos a actualizar");
	
	printf(" 1. Nombre\n");
	printf(" 2. Apellido 1\n");
	printf(" 3. Apellido 2\n");
	printf(" 4. Calle\n");
	printf(" 5. Número\n");
	printf(" 6. Colonia\n");
	printf(" 7. C.P.\n");
	printf(" 8. Municipio\n");
	printf(" 9. Teléfono casa\n");
	printf("10. Teléfono trabajo\n");
	printf("11. Celular\n");
	printf("12. Correo electrónico\n");
	printf("13. Salir\n\n");
	
	do{
		printf("Opción: ");
		scanf("%d", &opcion);
	}while(opcion<1 || opcion>13);
	
	limpiarBuffer();
	
	return opcion;
	
}

int BuscaPosicion(int clave, int n, Contacto *c){
	int i, encontrado=-1;
	
	for(i=0; i<n; i++){
		
		//En este ejemplo, la condición de búsqueda es que la clave
		//del contacto sea la misma que proporciona el usuario. Este
		//if puede ser más complejo para poder buscar por nombres,
		//apellidos, teléfonos, etc. Siemplemente haya que agregar
		//más condiciones. No olvidar que se debe evitar considerar
		//contactos borrados
		if(clave==c[i].clave && !c[i].borrado){
			encontrado=i;
			break;
		}
	}
	
	//Se devuelve la posición encontrada. IMPORTANTE: si no se encontró,
	//el valor devuelto es -1
	return encontrado;
}

void AgregarContacto(int *n, Contacto **c){
	Contacto *p=NULL;
	
	system("cls");
	
	Titulo("Alta de un contacto");
		
	if( *n==0 ){
		//No hay contactos todavía, se solicita la memoria
		p=(Contacto *)malloc( sizeof(Contacto) );		
	}else{
		//Ya existen contactos, se pide cambio de tamaño
		p=(Contacto *)realloc(*c, (*n+1)*sizeof(Contacto) );
	}

	if(p==NULL){
		printf("No fue posible agregar un nuevo contacto\n");
		system("pause");
		return;
	}
	
	//Sí fue posible agregar al contacto y hay que capturar sus datos
	
	p[*n].borrado=0; //Al inicio no está borrado
	
	//La clave será un consecutivo que depende de la cantidad de contactos 
	//que se tenga. Al inicio habrá 0 contactos y al primero de ellos se
	//le pondrá la clave 1. En otras palabras, la clave será la cantidad
	//de contactos + 1 porque sería raro que la primera clave fuera 0.
	p[*n].clave = *n + 1;
	
	printf("Nombre: ");
	fgets(p[*n].nombreContacto.nombre, 20, stdin);
	limpiarSaltoLinea(p[*n].nombreContacto.nombre);
	
	printf("Apellido 1: ");
	fgets(p[*n].nombreContacto.apellido1, 20, stdin);
	limpiarSaltoLinea(p[*n].nombreContacto.apellido1);
	
	printf("Apellido 2: ");
	fgets(p[*n].nombreContacto.apellido2, 20, stdin);
	limpiarSaltoLinea(p[*n].nombreContacto.apellido2);
	
	//------------------------------------------------
	
	printf("Calle: ");
	fgets(p[*n].direccionContacto.calle, 20, stdin);
	limpiarSaltoLinea(p[*n].direccionContacto.calle);
	
	printf("Número: ");
	fgets(p[*n].direccionContacto.numero, 5, stdin);
	limpiarSaltoLinea(p[*n].direccionContacto.numero);	
	
	printf("Colonia: ");
	fgets(p[*n].direccionContacto.colonia, 20, stdin);
	limpiarSaltoLinea(p[*n].direccionContacto.colonia);
	
	printf("C.P.: ");
	fgets(p[*n].direccionContacto.cp, 10, stdin);
	limpiarSaltoLinea(p[*n].direccionContacto.cp);
	
	printf("Municipio: ");
	fgets(p[*n].direccionContacto.municipio, 20, stdin);
	limpiarSaltoLinea(p[*n].direccionContacto.municipio);

	//------------------------------------------------
	
	printf("Teléfono casa: ");
	fgets(p[*n].telefonoCasa, 20, stdin);
	limpiarSaltoLinea(p[*n].telefonoCasa);
	
	printf("Teléfono trabajo: ");
	fgets(p[*n].telefonoTrabajo, 20, stdin);
	limpiarSaltoLinea(p[*n].telefonoTrabajo);
		
	printf("Celular: ");
	fgets(p[*n].celular, 20, stdin);
	limpiarSaltoLinea(p[*n].celular);
	
	printf("Correo electrónico: ");
	fgets(p[*n].correoElectronico, 50, stdin);
	limpiarSaltoLinea(p[*n].correoElectronico);	
	
	printf("\nSe agregó al contacto con clave: %d\n", p[*n].clave);
	
	//Actualiza la variable cantidad de main sumándole 1
	*n=*n+1;
	
	//Copia la dirección de los datos al apuntador contactos de main
	*c=p;
	
	system("pause");
		
}

void MostrarContacto(Contacto c){
	
	printf("Clave: %d\n", c.clave);
	printf("Nombre: %s\n", c.nombreContacto.nombre);
	printf("Apellido 1: %s\n", c.nombreContacto.apellido1);
	printf("Apellido 2: %s\n", c.nombreContacto.apellido2);

	printf("Calle: %s\n", c.direccionContacto.calle);
	printf("Número: %s\n", c.direccionContacto.numero);
	printf("Colonia: %s\n", c.direccionContacto.colonia);
	printf("C.P.: %s\n", c.direccionContacto.cp);
	printf("Municipio: %s\n", c.direccionContacto.municipio);

	printf("Teléfono de casa: %s\n", c.telefonoCasa);
	printf("Teléfono de trabajo: %s\n", c.telefonoTrabajo);
	printf("Celular: %s\n", c.celular);
	printf("Correo electrónico: %s\n", c.correoElectronico);
}

void MostrarTodosContactos(int n, Contacto *c){
	int i;
	
	system("cls");
	
	Titulo("Datos de los contactos");
		
	for(i=0; i<n; i++){
		//Solo debe mostrar los que NO están borrados
		if( !c[i].borrado ){
			MostrarContacto(c[i]);
			printf("---------------------\n\n");
		}
	}
	
	printf("Fin del listado\n");
	
	system("pause");
	
}


void BorrarContacto(int n, Contacto *contactos){
	int clave, posicion, respuesta;
	
	system("cls");
	
	Titulo("Borrar contacto");
	
	printf("Clave del contacto a borrar: "); 
	scanf("%d", &clave);
	limpiarBuffer();
	
	//Busca la posición en la que se encuentra el contacto deseado
	posicion=BuscaPosicion(clave, n, contactos);
	
	//Si la función devuelve un -1, significa que no lo encontró o
	//que está "borrado"
	if(posicion == -1){
		printf("El contacto no existe\n");
		system("pause");
		return;
	}
	
	//Muestra los datos para que el usuario confirme si es el
	//que desea borrar
	MostrarContacto(contactos[posicion]);
	
	printf("\n¿Seguro que deseas borrar al contacto? (1=si/0=no) ");
	scanf("%d", &respuesta);
	limpiarBuffer();
	
	if(respuesta==1){
		contactos[posicion].borrado=1; //Lo marca como borrado
		printf("\nContacto borrado con éxito\n");
	}
	else{
		printf("\nOperación cancelada\n");
	}

	system("pause");
	
}

void BuscarContacto(int n, Contacto *contactos){
	int clave, posicion, respuesta;
	
	system("cls");
	
	Titulo("Búsqueda de contacto");
	
	printf("Clave del contacto a buscar: "); 
	scanf("%d", &clave);
	limpiarBuffer();
	
	//Busca la posición en la que se encuentra el contacto deseado
	posicion=BuscaPosicion(clave, n, contactos);
	
	//Si la función devuelve un -1, significa que no lo encontró o
	//que está "borrado"
	if(posicion == -1){
		printf("El contacto no existe\n");
		system("pause");
		return;
	}
	
	//Muestra los datos del contacto encontrado
	MostrarContacto(contactos[posicion]);
	
	printf("\n");
	
	system("pause");
	
}


void ActualizarContacto(int n, Contacto *contactos){
	
	int clave, posicion, opcion;
	
	system("cls");
	
	Titulo("Actualizar contacto");
	
	printf("Clave del contacto a actualizar: "); 
	scanf("%d", &clave);
	limpiarBuffer();
	
	//Busca la posición en la que se encuentra el contacto deseado
	posicion=BuscaPosicion(clave, n, contactos);
	
	//Si la función devuelve un -1, significa que no lo encontró o
	//que está "borrado"
	if(posicion == -1){
		printf("El contacto no existe\n");
		system("pause");
		return;
	}
	
	//Muestra los datos para que el usuario confirme si es el
	//que desea actualizar
	MostrarContacto(contactos[posicion]);
	
	//Muestra el menú de posibles cambios
	do{
		opcion=menuActualizacion();
		
		switch(opcion){
			case 1:
				printf("Nuevo nombre: ");
				fgets(contactos[posicion].nombreContacto.nombre, 20, stdin);
				limpiarSaltoLinea(contactos[posicion].nombreContacto.nombre);
				break;
			case 2:
				printf("Apellido 1: ");
				fgets(contactos[posicion].nombreContacto.apellido1, 20, stdin);
				limpiarSaltoLinea(contactos[posicion].nombreContacto.apellido1);
				break;
			case 3:
				printf("Apellido 2: ");
				fgets(contactos[posicion].nombreContacto.apellido2, 20, stdin);
				limpiarSaltoLinea(contactos[posicion].nombreContacto.apellido2);
				break;
			case 4:
				printf("Calle: ");
				fgets(contactos[posicion].direccionContacto.calle, 20, stdin);
				limpiarSaltoLinea(contactos[posicion].direccionContacto.calle);
				break;
			case 5:
				printf("Número: ");
				fgets(contactos[posicion].direccionContacto.numero, 5, stdin);
				limpiarSaltoLinea(contactos[posicion].direccionContacto.numero);
				break;
			case 6:
				printf("Colonia: ");
				fgets(contactos[posicion].direccionContacto.colonia, 20, stdin);
				limpiarSaltoLinea(contactos[posicion].direccionContacto.colonia);
				break;
			case 7:
				printf("C.P.: ");
				fgets(contactos[posicion].direccionContacto.cp, 10, stdin);
				limpiarSaltoLinea(contactos[posicion].direccionContacto.cp);
				break;
			case 8:
				printf("Municipio: ");
				fgets(contactos[posicion].direccionContacto.municipio, 20, stdin);
				limpiarSaltoLinea(contactos[posicion].direccionContacto.municipio);
				break;
			case 9:
				printf("Teléfono casa: ");
				fgets(contactos[posicion].telefonoCasa, 20, stdin);
				limpiarSaltoLinea(contactos[posicion].telefonoCasa);
				break;
			case 10:
				printf("Teléfono trabajo: ");
				fgets(contactos[posicion].telefonoTrabajo, 20, stdin);
				limpiarSaltoLinea(contactos[posicion].telefonoTrabajo);
				break;
			case 11:
				printf("Celular: ");
				fgets(contactos[posicion].celular, 20, stdin);
				limpiarSaltoLinea(contactos[posicion].celular);
				break;
			case 12:
				printf("Correo electrónico: ");
				fgets(contactos[posicion].correoElectronico, 50, stdin);
				limpiarSaltoLinea(contactos[posicion].correoElectronico);
				break;
		}
		
	}while(opcion != 13);
				
				
	printf("\nEl contacto se actualizó\n");

	system("pause");
		
}


int main(){
	int opcion, cantidad=0;
	Contacto *contactos=NULL;
	
	do{
		system("cls");
		opcion=menuGeneral();
		
		switch(opcion){
			case 1:
				//Agregar 
				AgregarContacto(&cantidad, &contactos);
				break;
			case 2:
				//Buscar
				BuscarContacto(cantidad,contactos);
				break;
			case 3:
				//Actualizar
				break;
			case 4:
				//Borrar
				BorrarContacto(cantidad,contactos);
				break;
			case 5:
				//Todos los contactos
				MostrarTodosContactos(cantidad, contactos);
				break;
			case 6:
				//Salir
				printf("Gracias por el usar el programa!!!\n\n");
				system("pause");
				system("cls");
		}
		
	}while(opcion != 6);


	return 0;
}

