class SimpleLedSequencer {
public:
  SimpleLedSequencer() {}

  void init() {
    DDRB |= (1 << PB3) | (1 << PB1);
    DDRD |= (1 << PD7);
  }


  void runSequence() {
    PORTB |= (1 << PB3);   
    delay(6000);
    PORTB &= ~(1 << PB3);  
    
    PORTB |= (1 << PB1);   
    delay(2000);
    PORTB &= ~(1 << PB1);  
    
    PORTD |= (1 << PD7);   
    delay(4000);
    PORTD &= ~(1 << PD7);  
  }
};

SimpleLedSequencer meuSequenciador;


void setup() {
  meuSequenciador.init();
}

void loop() {
  meuSequenciador.runSequence();
}
