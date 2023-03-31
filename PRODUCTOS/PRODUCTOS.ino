/*
FUNDACION KINAL
CENTRO EDUCATIVO TECNICO LABORAL KINAL
PEROTO EN ELECTRONICA
QUINTO PERITO
SECCION: A
CURSO: TALLER DE ELECTRONICA DIGITAL Y REPARACION DE COMPUTADORAS
ALUMNOS: ANGELLO GABRIEL MANSILLA DIEUGEZ y PABLO DAVID HERNANDEZ AJIATAZ
CARNETS: 2022380 y 2022472
PRACTICA 2 STRUCTS DE COMIDA Y STOCK
 */






#define PBUTTON 2  //Definimos ambos Push Buttons que haran la funcion de Sticks Digitales.
#define PBUTTON1 3 //Aqui el segundo...




int i=0; //Definimos una variable i, que en este caso nos servira de referencia.

struct PRODUCTOS// Definimos la estructura de nuestros datos.
{
  char items[25]; //Descrbimos sus variables dependiendo su tipo, como numericas o de caracter.
  float precio;
  int stock;
  int cantidad;
};
PRODUCTOS PRODUCTOS1 = {"Dulces_Cervecitas",0.50,4,20}; //Generamos variables de nuestros productos a partir del struct: PRODUCTOS.
PRODUCTOS PRODUCTOS2 = {"Tortrix",1.00,20,50};
PRODUCTOS PRODUCTOS3 = {"Lays",5.00,7,25};
PRODUCTOS PRODUCTOS4 = {"Chetos",5.00,10,20};
PRODUCTOS DULCES []= {PRODUCTOS1,PRODUCTOS2,PRODUCTOS3,PRODUCTOS4}; //Directiva de las variables PRODUCTOS.

void setup() {
  Serial.begin(9600);
  pinMode(PBUTTON,INPUT); //Declaramos los pines de entrada, en este caso, seran los Pbuttons.
  pinMode(PBUTTON1,INPUT); 
  Serial.println("----------------------------------------------"); //Bienvenido :D.
  Serial.println("----BIENVENIDO A TU TIENDA VIRTUAL ARDUINO----");
  Serial.println("-Donde lo que compres... tambien es virtual:D-");
  Serial.println("----------------------------------------------");
  Serial.println("================Instrucciones=================");
  Serial.println("Presiona los botones de tu protoboard para mo-");
  Serial.println("-verte por nuestros productos y ver la info.");
  Serial.println("==============================================");
}

void loop()
{
  if(digitalRead(PBUTTON)==HIGH) //Condicion: Si PBUTTON esta encendido, ejecutar las llaves.
  {
    delay(100); //Antirebote
    i++;
     if(i>3) i=0; //Condicion para repetir el ciclo correctamente: Si i es mayor a 3, i vale 0.
 Serial.println("PRODUCTOS DISPONIBLES"); //Impresion previa a impresion de informacion.
 Serial.println("Nombre De Producto:");
 Serial.println(DULCES[i].items); //Buscadores de variables de cada producto.
 Serial.println("Precio:");
 Serial.println(DULCES[i].precio);
 Serial.println("Stock:");
 Serial.println(DULCES[i].stock);
 Serial.println("Cantidad:");
 Serial.println(DULCES[i].cantidad);

  }
  if(digitalRead(PBUTTON1)==HIGH) //Condicion: Si PBUTTON1 esta encendido, ejecutar las llaves.
  {
    delay(100); //Antirebote
    i--;
    if(i<=-1) i=3; //Condicion para repetir el ciclo correctamente: Si i es menor o igual a 0, i vale 3.
 Serial.println("PRODUCTOS DISPONIBLES"); //Impresion previa a impresion de informacion.
 Serial.println("Nombre De Producto:");
 Serial.println(DULCES[i].items);  //Buscadores de variables de cada producto.
 Serial.println("Precio:");
 Serial.println(DULCES[i].precio);
 Serial.println("Stock:");
 Serial.println(DULCES[i].stock);
 Serial.println("Cantidad:");
 Serial.println(DULCES[i].cantidad);
  }

 delay(100);

} //Fin UwU
