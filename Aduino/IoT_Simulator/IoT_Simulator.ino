#define LED_MODE1   '1'
#define LED_MODE2   '2'
#define LED_MODE3   '3'
#define P_SPEAKER   '4'
#define SEGMENT7    '5'

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Welcome to IoT Simulation!");
  Serial.println("Lee, Hyunkoo ver1.0");

}

void led_mode1(){

  Serial.println("Led operated by mode1");
}

void led_mode2(){
  Serial.println("Led operated by mode2");
}

void led_mode3(){
  Serial.println("Led operated by mode3");
}

void play_pspeaker(){
  Serial.println("Play a piezo speaker");
}

void run_7segment(){
  Serial.println("Make a number with 7 segment");
}

void loop() {
  char command_mode=0;
  // put your main code here, to run repeatedly:
   if(Serial.available()){
    command_mode = Serial.read();
    Serial.println(command_mode);
   }

   switch (command_mode){
    case LED_MODE1:
      led_mode1();
      break;
    case LED_MODE2:
      led_mode2();
      break;
    case LED_MODE3:
      led_mode3();
      break;
    case P_SPEAKER:
      play_pspeaker();
      break;
    case SEGMENT7:
      run_7segment();
      break;
   }

}
