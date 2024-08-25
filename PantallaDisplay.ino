#include  <LiquidCrystal.h>
 
// constructor de la clase LiquidCrystal, se crea un objeto llamado "lcd"
// mediante el cual se accede a toda la funcionalidad de la librería
// aquí se configuran los pines para comunicarse con la pantalla
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
 
/**
   Función setup: se ejecuta una vez cuando encendemos el arduino
*/
void setup()
{
  // indicar a la librería que tenemos conectada una pantalla de 16x2
  lcd.begin(16, 2);
 
  // mover el cursor a la primera posición de la pantalla (0,0)
  // y al mismo tiempo borramos su contenido
  lcd.clear();
  // imprimir "Hola Mundo" en la primera linea
  lcd.print("BIENVENIDO ");
  // mover el cursor a la segunda linea (1) primera columna (0)
  lcd.setCursor (0, 1);
  // imprimir otra cadena en la posición actual del cursor
  lcd.print("BALLONA :)");
 
  // esperar un segundo
  delay(1000);
}
 
/**
   Función loop: se ejecuta continuamente mientras el arduino permanece encendido
*/
void loop()
{
  // en el ciclo principal solamente recorremos el mensaje de un lado a otro
 
  // variable utilizada en el control de ciclos
  int i;
 
  // desplazar el contenido de la pantalla 5 veces a la derecha
  for ( int i = 0; i < 5; i++ )
  {
    lcd.scrollDisplayRight();
    delay (1000);
  }
 
  // desplazar el contenido de la pantalla 5 veces a la izquierda
  for ( int i = 0; i < 5; i++ )
  {
    lcd.scrollDisplayLeft();
    delay (1000);
  }
}
