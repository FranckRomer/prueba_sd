// librerias 



// variables globales
int valor_moneda_inicial ;
int valor_moneda_sd ;
int boton;

// sd 


/*
 * ********************************************************************
 *                                 Setup
 * ********************************************************************
*/

void setup() {

  Serial.begin(9600);
  // agregar sd


  // otras cosas
  valor_moneda_inicial = 5;

}

/*
 * ********************************************************************
 *      Programa principal
 * ********************************************************************
*/

void loop() {
  // guardar en sd
  // si el boton esta activado => guardas en la sd la variable que este horita
  if(boton){
    // Se guarda la viable valor_moneda_inicial en la sd  =>  valor_moneda_sd
    
    
    }
  


  
  // leer mis  variables de sd

  Serial.println("se mostraran las variables de la sd:");
  Serial.println(valor_moneda_sd);
  
  delay(1000);
}

////////////////////////////////////////////////////////////////////////////////////////////
///   Funciones exrtas
