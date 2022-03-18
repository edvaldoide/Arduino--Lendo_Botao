/*******************************************************************************
* RoboCore Kit Iniciante V8 para Arduino - Lendo um Botão
* Acende o LED quando o botão é pressionado e o apaga quando o botão é solto.
*******************************************************************************/

void setup(){
  pinMode(8, INPUT); // configura o pino com o botão como entrada
  pinMode(12, INPUT); // configura o pino com o botão como entrada  
  pinMode(9, OUTPUT); // configura o pino com o LED como saída
  pinMode(13, OUTPUT); // configura o pino com o LED como saída

}

void loop(){
  if (digitalRead(8) == HIGH){ // se botão estiver pressionado (HIGH)
    digitalWrite(9, HIGH); // acende o LED
  }
  else{ // se não estiver pressionado (LOW)
    digitalWrite(9, LOW); // apaga o LED
  }

  if (digitalRead(12) == HIGH){ // se botão estiver pressionado (HIGH)
    digitalWrite(13, LOW); // acende o LED
  }
  else{ // se não estiver pressionado (LOW)
    digitalWrite(13, HIGH); // apaga o LED
  }
    
}
