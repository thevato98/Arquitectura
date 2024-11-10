void setup() {
  // Configuración de pines de entrada
  pinMode(0, INPUT); //A
  pinMode(1, INPUT); //B
  pinMode(2, INPUT); //C
  pinMode(3, INPUT); //D
  pinMode(4, INPUT); //E
  pinMode(5, INPUT); //F
  pinMode(6, INPUT); //G

  // Configuración de pines de salida
  pinMode(7, OUTPUT); //A
  pinMode(8, OUTPUT); //B
  pinMode(9, OUTPUT); //C
  pinMode(10, OUTPUT); //D
  pinMode(11, OUTPUT); //E
  pinMode(12, OUTPUT); //F
  pinMode(13, OUTPUT); //G
}

void loop() {
 
  int A = digitalRead(0);
  int B = digitalRead(1);
  int C = digitalRead(2);
  int D = digitalRead(3);
  int E = digitalRead(4);
  int F = digitalRead(5);
  int G = digitalRead(6);
   

  if (A & B & !C & D & E & F & G) {// (CERO)1101111
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  } else if (!A & B & !C & !D & E & !F & !G){// (UNO)0100100
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }else if (A & B & C & !D & !E & F & G){// (DOS)1110011
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }else if ((A & B & C & !D & E & F & !G)){// (TRES) 1110110
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }else if ((!A & B & C & D & E & !F & !G)){// (CUATRO) 0111100
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }else if ((A & !B & C & D & E & F & !G)){// (CINCO) 1011110
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }else if ((A & !B & C & D & E & F & G)){// (SEIS) 1011111
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }else if ((A & B & !C & !D & E & !F & !G)){// (SIETE) 1100100
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }else if ((A & B & C & D & E & F & G)){// (OCHO) 1111111
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }else if ((A & B & C & D & E & !F & !G)){// (NUEVE) 1111100
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }else if ((A & B & C & D & E & !F & G)){// (A) 1111101
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }else if ((!A & !B & C & D & E & F & G)){// (B) 0011111
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }else if ((A & !B & !C & D & !E & F & G)){// (C) 1001011
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }else if ((!A & B & C & !D & E & F & G)){// (D) 0110111
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }else if ((A & !B & C & D & !E & F & G)){// (E) 1011011
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }else if ((A & !B & C & D & !E & !F & G)){// (F) 1011001
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
}