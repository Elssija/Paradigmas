//1er paso declaración de una variable
int Pin_led = 13;

//2do paso, Configuración

void setup()
{
	pinMode(Pin_led, OUTPUT); //declara el puerto como salida

}

//3er paso, Funcionabilidad

void loop()
{
	Parpadear();
}

void Parpadear()
{
	digitalWrite(Pin_led, HIGH); //encender led
	delay(500);
	digitalWrite(Pin_led,LOW); //Apagar led
	delay(500);
}