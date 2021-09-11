#include <iostream>
#include <conio.h>
#include <cstring>
#include <windows.h>
#include <math.h>
using namespace std;
void Sumamultirestadivision()
{
	
	float a;
	float b;
	float suma;
	float resta;
	float multi;
	float division;
	
cout<<"\ndame tu primer digito a sumar: "<<endl;
cin>>a;
cout<<"\ndame tu segundo digito a sumar: "<<endl;
cin>>b;
suma=a+b;
cout<<"\nel resultado de la suma es: "<<suma<<endl;

cout<<"\ndame tu primer digito a restar: "<<endl;
cin>>a;
cout<<"\ndame tu segundo digito a restar: "<<endl;
cin>>b;
resta=a-b;
cout<<"\nel resultado de la resta es: "<<resta<<endl;

cout<<"\ndame tu primer digito a multiplicar: "<<endl;
cin>>a;
cout<<"\ndame tu segundo digito a multiplicar: "<<endl;
cin>>b;
multi=a*b;
cout<<"\nel resultado de la multiplicacion es: "<<multi<<endl;

cout<<"\ndame tu primer digito a dividir: "<<endl;
cin>>a;
cout<<"\ndame tu segundo digito a dividir: "<<endl;
cin>>b;
division=a/b;
cout<<"\nel resultado de la division es: \n"<<division<<endl;

}


void numeroparimpar () 
	{
	
	int var, h;
	printf("\ningrese un numero: ");
	scanf("%d", &var);
	h=var%2;
	
	if (h==0)
	{
		printf("par\n\n");
	}
	else
	{
		printf("impar\n\n");
		
	}
	getch();
	
}

void conversiondemedidas ()
{
	double kilometros;
	double millas;
	double metros;
	double pulgadas;
	double libras;
	double kilogramos;
	
cout<<"\nkilometros a millas "<<endl;
cout<<"kilometros: ";
cin>>kilometros;
millas= kilometros * 0.62137;
cout<< kilometros <<" kilometros, corresponden a: " << millas <<" millas\n";

cout<<"\nmetros a pulgadas "<<endl;
cout<<"metros: ";
cin>>metros;
pulgadas= metros * 39.37007;
cout<< metros <<" metros, corresponden a: " << pulgadas <<" pulgadas\n";

cout<<"\nlibras a kilogramos "<<endl;
cout<<"libras: ";
cin>>libras;
kilogramos= libras * 0.453592;
cout<< libras <<" libras, corresponden a: " << kilogramos <<" kilogramos\n\n";
}

void palindromo()
{
	char cadena[100], copia [100];
	
	cout <<"ingrese la palabra o numero: "<<endl;
	cin>>cadena;
	
	for(int i=(strlen(cadena)-1);i>=0;i--){
		copia[strlen(cadena)-1-i]=cadena[i];
	} 
	copia[strlen(cadena)]='\0';
	
	if (strcmp(cadena,copia)==0){
		cout<<"es palindroma\n\n";
	}else{
		cout<<"la palabra no es palindroma\n\n";
		
	}
}

void numerosarabicosaromanos()
{
	int numero,millar,centenas,decenas,unidades;
	std::cout<<"Ingresa un numero: ";
	std::cin>>numero;
	
	unidades=numero%10;
	
	numero=numero/10;
	decenas=numero%10;
	
	numero=numero/10;
	centenas=numero%10;
	
	millar=numero/10;
	
	switch (millar)
	{
		case 1:std::cout<<"M";break;
		case 2:std::cout<<"MM";break;
		case 3:std::cout<<"MMM";break;
	}
	switch (centenas)
	{
		case 1:std::cout<<"C";break;
		case 2:std::cout<<"CC";break;
		case 3:std::cout<<"CCC";break;
		case 4:std::cout<<"CD";break;
		case 5:std::cout<<"D";break;
		case 6:std::cout<<"DC";break;
		case 7:std::cout<<"DCC";break;
		case 8:std::cout<<"DCCC";break;
		case 9:std::cout<<"CM";break;
	}
	switch (decenas)
	{
		case 1:std::cout<<"X";break;
		case 2:std::cout<<"XX";break;
		case 3:std::cout<<"XXX";break;
		case 4:std::cout<<"XL";break;
		case 5:std::cout<<"L";break;
		case 6:std::cout<<"LX";break;
		case 7:std::cout<<"LXX";break;
		case 8:std::cout<<"LXXX";break;
		case 9:std::cout<<"XC";break;
	}
	switch (unidades)
	{
		case 1:std::cout<<"I";break;
		case 2:std::cout<<"II";break;
		case 3:std::cout<<"III";break;
		case 4:std::cout<<"IV";break;
		case 5:std::cout<<"V";break;
		case 6:std::cout<<"VI";break;
		case 7:std::cout<<"VII";break;
		case 8:std::cout<<"VIII";break;
		case 9:std::cout<<"IX";break;
	}
	std::cout<<"\n";
}

void enterosaletras()
{
	int x;
	cout<<"ingrese un numero: "<<endl;
	cin>>x;
	if((x<1)||(x>999)) cout<<"ingresa un numero del 1 al 999\n";
	else
	{
		 if(x>=900)   
		 {
		 cout<<"NOVECIENTOS " ;x=x-900;
		 }
       else if(x>=800)   
	   {
	   cout<<"OCHOCIENTOS " ;x=x-800;
	   }
       else if(x>=700)   
	   {
	   cout<<"SETECIENTOS " ;x=x-700;
	   }
       else if(x>=600)   
	   {
	   cout<<"SEISCIENTOS " ;x=x-600;
	   }
       else if(x>=500)   
	   {
	   cout<<"QUINIENTOS "  ;x=x-500;
	   }
       else if(x>=400)   
	   {
	   cout<<"CUATROCIENTOS "   ;x=x-400;
	   }
       else if(x>=300)   
	   {
	   cout<<"TRESCIENTOS " ;x=x-300;
	   }
       else if(x>=200)   
	   {
	   cout<<"DOSCIENTOS "  ;x=x-200;
	   }
       else if(x>100)    
	   {
	   cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  
	   {
	   cout<<"CIEN"     ;x=x-100;
	   }
        if(x>90) 
		{
		cout<<"NOVENTA Y "   ;x=x-90;
		}
            if(x==90)   
			{
			cout<<"NOVENTA"  ;x=x-90; 
			}  
            if(x>80) 
			{
			cout<<"OCHENTA Y "   ;x=x-80; 
			}
            if(x==80)   
			{
			cout<<"OCHENTA"  ;x=x-80; 
			}
            if(x>70) 
			{
			cout<<"SETENTA Y "   ;x=x-70; 
			}
            if(x==70)   
			{
			cout<<"SETENTA"  ;x=x-70; 
			}
            if(x>60) 
			{
			cout<<"SESENTA Y "   ;x=x-60; 
			}
            if(x==60)   
			{
			cout<<"SESENTA"  ;x=x-60; 
			}
            if(x>50) 
			{
			cout<<"CINCUENTA Y " ;x=x-50; 
			}
            if(x==50)   
			{
			cout<<"CINCUENTA"    ;x=x-50; 
			}
            if(x>40) 
			{
			cout<<"CUARENTA Y "  ;x=x-40; 
			}
            if(x==40)   
			{
			cout<<"CUARENTA" ;x=x-40; 
			}
            if(x>30) 
			{
			cout<<"TREINTA Y "   ;x=x-30; 
			}
            if(x==30)   
			{
			cout<<"TREINTA"  ;x=x-30;
			}
            if(x>20) 
			{
			cout<<"VEINTI"       ;x=x-20; 
			}
            if(x==20)   
			{
			cout<<"VEINTE"       ;x=x-20; 
			}
        if(x>=16)    
		{
		cout<<"DIECI"        ;x=x-10; 
		}
       else if(x==15)   
	   {
	   cout<<"QUINCE"       ;x=x-15; 
	   }
       else if(x==14)   
	   {
	   cout<<"CATORCE"  ;x=x-14; 
	   }
       else if(x==13)   
	   {
	   cout<<"TRECE"        ;x=x-13; 
	   } 
       else if(x==12)   
	   {
	   cout<<"DOCE"     ;x=x-12; 
	   }
       else if(x==11)   
	   {
	   cout<<"ONCE"     ;x=x-11; 
	   }
       else if(x==10)   
	   {
	   cout<<"DIEZ"     ;x=x-10; 
	   }      
        if(x==9)    
		{
		cout<<"NUEVE"        ;x=x-9;  
		}
        if(x==8)    
		{
		cout<<"OCHO"     ;x=x-8;  
		}
        if(x==7)    
		{
		cout<<"SIETE"        ;x=x-7;  
		}
            if(x==6)    
			{
			cout<<"SEIS"     ;x=x-6;  
			}
       else if(x==5)    
	   {
	   cout<<"CINCO"        ;x=x-5;  
	   }
       else if(x==4)    
	   {
	   cout<<"CUATRO"       ;x=x-4;  
	   }
       else if(x==3)    
	   {
	   cout<<"TRES"     ;x=x-3;  
	   }
       else if(x==2)    
	   {
	   cout<<"DOS"      ;x=x-2;  
	   }
       else if(x==1)    
	   {
	   cout<<"UNO"      ;x=x-1;  
	   }
       }
    cout<<endl;
    cout<<"\n";
	}
	
void tablademultiplicar()
{
	int numero;
	do
	{
		cout<<"Digite un numero: "; cin>>numero;
	}
	while((numero<1) || (numero>10));
	for(int i=1;i<=10;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	cout<<"\n";
	getch();	
} 

void enteroabinario()
{
    int decimal;
    short binario[8];

    cout << "Teclea el valor en decimal a convertir:" << endl;
    cin >> decimal;

    for (int i = 0; i < 8; i++)
    {
        binario[i] = decimal % 2;
        decimal /= 2;
    }

    cout << "El numero en binario es:" << endl;

    for (int i = 7; i >= 0; i--)
    {
        cout << binario[i];
    }

    cout << endl;
}

void hexadecimales()
{
    int digitoex[20];
    int decimal, residuo, resultado, i = 0;

    cout << "Introduce el numero decimal a convertir: " << endl;
    cin >> decimal;

    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digitoex[i] = residuo;
        decimal = resultado;
        i++;
    } while (resultado > 15);

    digitoex[i] = resultado;

    cout << "El equivalente en hexadecimal es: ";

    for (int j = i; j >= 0; j--)
    {
        if (digitoex[j] == 10)
        {
            cout << "A";
        }
        else if (digitoex[j] == 11)
        {
            cout << "B";
        }
        else if (digitoex[j] == 12)
        {
            cout << "C";
        }
        else if (digitoex[j] == 13)
        {
            cout << "D";
        }
        else if (digitoex[j] == 14)
        {
            cout << "E";
        }
        else if (digitoex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitoex[j];
        }   
    }
    cout << endl;
    cout<<"\n";
}

void aprobadoyreprobado() {
	float cali;
	cout << "ingrese la calificacion" << endl;
	cin >> cali;
	if (cali>=61) {
		cout << " La calificacion es " << cali << " por lo tanto esta aprobado\n " << endl;
	} else {
		cout << " La calificacion es " << cali << " por lo tanto esta reprobado\n " << endl;
	}
}

void segundos() {
	int horas;
	int minutos;
	int segundos;
	cout << "ingrese una cantidad a segundos" << endl;
	cin >> segundos;
	horas = segundos/3600;
	segundos = segundos%3600;
	minutos = segundos/60;
	segundos = segundos%60;
	cout << horas << " hrs " << minutos << " min " << segundos << " seg " << endl;
}

void positivosynegativos() 
{
	float numero;
	cout << "dame un numero" << endl;
	cin >> numero;
	if (numero==0) {
		cout << "el numero" << numero << " es neutro\n" << endl;
	} else {
		if (numero>0) {
			cout << "el numero " << numero << " es positivo\n" << endl;
		} else {
			cout << "el numero " << numero << " es negativo\n" << endl;
		}
	}
}

void temperatura() {
	float respuesta;
	float temp;
	float var1;
	float var2;
	var1 = 1.8;
	var2 = 32;
	cout << "ingresar la temperatura ambiente" << endl;
	cin >> temp;
	respuesta = temp*var1+var2;
	cout << "la temperatura a Fahrenheit es: " << respuesta << endl;
	cout<<"\n";
}

void hipotenusa()
{
	int co,ca;
	float h;
	
	cout<<"Digite Cateto Opuesto: ";
	cin>>co;
	
	cout<<"Digite cateto Adyacente: ";
	cin>>ca;
	
	h= sqrt (pow(co,2)+pow(ca,2));
	
	cout<<"La hipotenusa es: "<<h,
	cout<<"\n\n";
	cin.get();
	 
}

void cajeroautomatico()
{
	int saldo_inicial = 1000;
	int saldo, reintegro, opcion, agregar;
	
	cout<<"bienvenido a su cajero Virtual";
	cout<<"\nescoja su opcion: ";
	cout<<"\n1. ingreso en cuenta";
	cout<<"\n2. reintegro";
	cout<<"\n3. ver saldo de cuenta";
	cout<<"\n0. Salir";
	cout<<"\nopcion: ";
	cin>>opcion;
	
	if (opcion==1)
	{
		cout<<"\nIngrese la cantidad a depositar: ";
		cin>>agregar;
		saldo = saldo_inicial + agregar;
		cout<<"\ncantidad disponible en cuenta: "<<saldo;
		cout<<"\n\n";
	}
	else if (opcion==2)
	{
		cout<<"\ncuenta cantidad desea retirar: ";
		cin>>reintegro;
		if (reintegro>1000)
		{
			cout<<"la cantidad digitada es mayor a 1000,digite de nuevo la cantidad a retirar: ";
			cin>>reintegro;
		}
		saldo= saldo_inicial- reintegro;
		cout<<"\ncantidad disponible en cuenta: "<<saldo;
		cout<<"\n\n";
	}
	else if (opcion == 3)
	{
		cout<<"\ncantidad disponible en cuenta es de: "<<saldo_inicial;
		cout<<"\n\n";
    }
	else if (opcion == 0)
	{
		cout<<"gracias por utilizar nuestro cajero automatico\n\n";
	}
	else if (opcion ==  2)
	{
		cout<<"gracias por utilizar nuestro cajero automatico\n\n";
	}
	else
	{
		cout<<"se equivoca de opcion de menu\n\n";
	}
	cin.get(); 
}

int main()
{
	int opcion;
	do
	{
		
		cout<<" Ingrese un digito en el tablero numerico para ingresar a las diferentes opciones que se le ofrece\n"
		<<" 1.- Suma, resta, multipilcacion, division\n"
		<<" 2.- numero par o impar\n"
		<<" 3.- conversion de medidas\n"
		<<" 4.- palindroma\n"
		<<" 5.- arabicos a romanos\n"
		<<" 6.- enteros a letras\n"
		<<" 7.- tabla de multiplicar\n"
		<<" 8.- entero a binario\n"
		<<" 9.- hexadecimales\n"
		<<" 10.- cajero automatico\n"
		<<" 11.- Hipotenusa\n"
		<<" 12.- aprobado y reprobado\n"
		<<" 13.- segundos\n"
		<<" 14.- numeros positivos y negativos\n"
		<<" 15.- temperatura\n"
		<<" 16.- salir\n"<<endl;
		cin>>opcion;
		switch (opcion)
		{
			case 1:
				Sumamultirestadivision ();
			break;
			case 2:
				numeroparimpar ();
			break;
			case 3:
				conversiondemedidas ();
			break;
			case 4:
				palindromo();
			break;
			case 5:
				numerosarabicosaromanos();
			break;
			case 6:
				enterosaletras();
			break;
			case 7:
				tablademultiplicar();
			break;
			case 8:
				enteroabinario();
			break;
			case 9:
				hexadecimales();
			break;
			case 10:
				cajeroautomatico();
			break;
			case 11:
				hipotenusa();
			break;
			case 12:
				aprobadoyreprobado();
			break;
			case 13:
				segundos();
			break;
			case 14:
				positivosynegativos();
			break;
			case 15:
				temperatura();
			break;
			case 16:
				cout<<"fin del programa"<<endl;
			break;
			default:
				cout<<"tecla incorrecta"<<endl;
			break;
		}
		
	}while (opcion!=16);
	return 0;
}
