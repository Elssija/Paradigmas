//1er paso declaración de una variable
int Pin_ledRojo = 13;
int Pin_ledVerde = 13;
int Pin_ledAzul = 13;


//2do paso, Configuración

void setup()
{
	pinMode(Pin_ledRojo, OUTPUT); //declara el puerto como salida
	pinMode(Pin_ledVerde, OUTPUT); 
	pinMode(Pin_ledAzul, OUTPUT); 
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

