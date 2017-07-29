//#include <NewPing.h>
#define trigPin 3
#define echoPin 2
#define ledPin 5
#define speakerPin 8


#define  C0 16.35
#define Db0 17.32
#define D0  18.35
#define Eb0 19.45
#define E0  20.60
#define F0  21.83
#define Gb0 23.12
#define G0  24.50
#define Ab0 25.96
#define LA0 27.50
#define BBBBb0 29.14
#define BBBB0  30.87
#define C1  32.70
#define Db1 34.65
#define D1  36.71
#define Eb1 38.89
#define E1  41.20
#define F1  43.65
#define Gb1 46.25
#define G1  49.00
#define Ab1 51.91
#define LA1 55.00
#define BBb1 58.27
#define BB1  61.74
#define C2  65.41
#define Db2 69.30
#define D2  73.42
#define Eb2 77.78
#define E2  82.41
#define F2  87.31
#define Gb2 92.50
#define G2  98.00
#define Ab2 103.83
#define LA2 110.00
#define BBb2 116.54
#define BB2  123.47
#define C3  130.81
#define Db3 138.59
#define D3  146.83
#define Eb3 155.56
#define E3  164.81
#define F3  174.61
#define Gb3 185.00
#define G3  196.00
#define Ab3 207.65
#define LA3 220.00
#define BBb3 233.08
#define BB3  246.94
#define C4  261.63
#define Db4 277.18
#define D4  293.66
#define Eb4 311.13
#define E4  329.63
#define F4  349.23
#define Gb4 369.99
#define G4  392.00
#define Ab4 415.30
#define LA4 440.00
#define BBb4 466.16
#define BB4  493.88
#define C5  523.25
#define Db5 554.37
#define D5  587.33
#define Eb5 622.25
#define E5  659.26
#define F5  698.46
#define Gb5 739.99
#define G5  783.99
#define Ab5 830.61
#define LA5 880.00
#define BBb5 932.33
#define BB5  987.77
#define C6  1046.50
#define Db6 1108.73
#define D6  1174.66
#define Eb6 1244.51
#define E6  1318.51
#define F6  1396.91
#define Gb6 1479.98
#define G6  1567.98
#define Ab6 1661.22
#define LA6 1760.00
#define BBb6 1864.66
#define BB6  1975.53
#define C7  2093.00
#define Db7 2217.46
#define D7  2349.32
#define Eb7 2489.02
#define E7  2637.02
#define F7  2793.83
#define Gb7 2959.96
#define G7  3135.96
#define Ab7 3322.44
#define LA7 3520.01
#define BBb7 3729.31
#define BB7  3951.07
#define C8  4186.01
#define Db8 4434.92
#define D8  4698.64
#define Eb8 4978.03
// DURATION OF THE NOTES 
#define BBPM 120    //  you can change this value changing all the others
#define H 2*Q //half 2/4
#define Q 60000/BBPM //quarter 1/4 
#define E Q/2   //eighth 1/8
#define S Q/4 // sixteenth 1/16
#define W 4*Q // whole 4/4


int iterations_for_avg = 5;
//NewPing sonar(trigPin, echoPin ,300 ) ;
int song_part;
// the loop routine runs over and over again forever:
void play() {
    switch(song_part) {
      case 0:   
        //tone(pin, note, duration)
        tone(speakerPin,LA3,Q);     
        delay(1+Q); //delay duration should always be 1 ms more than the note in order to separate them.
        tone(speakerPin,LA3,Q);
        delay(1+Q);
        tone(speakerPin,LA3,Q);
        delay(1+Q);
        tone(speakerPin,F3,E+S);
        delay(1+E+S);
        tone(speakerPin,C4,S);
        delay(1+S);

        tone(speakerPin,LA3,Q);
        delay(1+Q);
        tone(speakerPin,F3,E+S);
        delay(1+E+S);
        tone(speakerPin,C4,S);
        delay(1+S);
        tone(speakerPin,LA3,H);
        delay(1+H);
        break;
      case 1:
        tone(speakerPin,E4,Q); 
        delay(1+Q); 
        tone(speakerPin,E4,Q);
        delay(1+Q);
        tone(speakerPin,E4,Q);
        delay(1+Q);
        tone(speakerPin,F4,E+S);
        delay(1+E+S);
        tone(speakerPin,C4,S);
        delay(1+S);
      
        tone(speakerPin,Ab3,Q);
        delay(1+Q);
        tone(speakerPin,F3,E+S);
        delay(1+E+S);
        tone(speakerPin,C4,S);
        delay(1+S);
        tone(speakerPin,LA3,H);
        delay(1+H);
        break;
      case 2:
        tone(speakerPin,LA4,Q);
        delay(1+Q);
        tone(speakerPin,LA3,E+S);
        delay(1+E+S);
        tone(speakerPin,LA3,S);
        delay(1+S);
        tone(speakerPin,LA4,Q);
        delay(1+Q);
        tone(speakerPin,Ab4,E+S);
        delay(1+E+S);
        tone(speakerPin,G4,S);
        delay(1+S);
    
        tone(speakerPin,Gb4,S);
        delay(1+S);
        tone(speakerPin,E4,S);
        delay(1+S);
        tone(speakerPin,F4,E);
        delay(1+E);
        delay(1+E);//PAUSE
        tone(speakerPin,BBb3,E);
        delay(1+E);
        tone(speakerPin,Eb4,Q);
        delay(1+Q);
        tone(speakerPin,D4,E+S);
        delay(1+E+S);
        tone(speakerPin,Db4,S);
        delay(1+S);
         break;
      case 3:
        tone(speakerPin,C4,S);
        delay(1+S);
        tone(speakerPin,BB3,S);
        delay(1+S);
        tone(speakerPin,C4,E);
        delay(1+E);
        delay(1+E);//PAUSE QUASI FINE RIGA
        tone(speakerPin,F3,E);
        delay(1+E);
        tone(speakerPin,Ab3,Q);
        delay(1+Q);
        tone(speakerPin,F3,E+S);
        delay(1+E+S);
        tone(speakerPin,LA3,S);
        delay(1+S);
      
        tone(speakerPin,C4,Q);
        delay(1+Q);
        tone(speakerPin,LA3,E+S);
        delay(1+E+S);
        tone(speakerPin,C4,S);
        delay(1+S);
        tone(speakerPin,E4,H);
        delay(1+H);
        break;
      case 4: 
         tone(speakerPin,LA4,Q);
        delay(1+Q);
    tone(speakerPin,LA3,E+S);
    delay(1+E+S);
    tone(speakerPin,LA3,S);
    delay(1+S);
    tone(speakerPin,LA4,Q);
    delay(1+Q);
    tone(speakerPin,Ab4,E+S);
    delay(1+E+S);
    tone(speakerPin,G4,S);
    delay(1+S);
    
    tone(speakerPin,Gb4,S);
    delay(1+S);
    tone(speakerPin,E4,S);
    delay(1+S);
    tone(speakerPin,F4,E);
    delay(1+E);
    delay(1+E);//PAUSE
    tone(speakerPin,BBb3,E);
    delay(1+E);
    tone(speakerPin,Eb4,Q);
    delay(1+Q);
    tone(speakerPin,D4,E+S);
    delay(1+E+S);
    tone(speakerPin,Db4,S);
    delay(1+S);
       break;
      case 5:
    tone(speakerPin,C4,S);
    delay(1+S);
    tone(speakerPin,BB3,S);
    delay(1+S);
    tone(speakerPin,C4,E);
    delay(1+E);
    delay(1+E);//PAUSE QUASI FINE RIGA
    tone(speakerPin,F3,E);
    delay(1+E);
    tone(speakerPin,Ab3,Q);
    delay(1+Q);
    tone(speakerPin,F3,E+S);
    delay(1+E+S);
    tone(speakerPin,C4,S);
    delay(1+S);
    
    tone(speakerPin,LA3,Q);
    delay(1+Q);
     tone(speakerPin,F3,E+S);
    delay(1+E+S);
    tone(speakerPin,C4,S);
    delay(1+S);
    tone(speakerPin,LA3,H);
    delay(1+H);
    
    delay(2*H);
    break; 
    } 
    song_part = (song_part+1)%6;
}


 
void setup() {
  Serial.begin (9600);
  pinMode(ledPin, OUTPUT);
  pinMode(speakerPin, OUTPUT);
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    unsigned long distance;
    distance = get_dist();  
   analogWrite(speakerPin,LOW);
 if (distance>0 &&  distance< 20) {
 //   Serial.println("Light");
    digitalWrite(ledPin,HIGH);
    play();
    
    delay(100);
    
    digitalWrite(ledPin,LOW);
      
  }
  delay(200);

}

unsigned long get_dist() {
    unsigned long duration,distance;
    digitalWrite(trigPin, HIGH);
    delay(1);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH, 5700);  // Timeout if distance > 100 cm
    distance = duration / 57;  // Divide by round-trip microseconds per cm to get cm

//    delay(50);         
//    duration = sonar.ping_median(iterations_for_avg);
//    distance = sonar.convert_cm(duration);
    Serial.print(duration);
    Serial.print(" dist: ");
    Serial.println(distance);
    return distance;

}

