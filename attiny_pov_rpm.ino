int delayTime =2.2; //sub-char delay time 
int charBreak = 1.6; //char delay time 
int LED1 = 0; 
int LED2 = 1; 
int LED3 = 2; 
int LED4 = 3; 
int LED5 = 4; 
int in=0;
void setup() 
{ 
 pinMode(0, OUTPUT); 
 pinMode(1, OUTPUT); 
 pinMode(2, OUTPUT); 
 pinMode(3, OUTPUT); 
 pinMode(4, OUTPUT); 

} 
int valor;
int zero[] = {14,17,17,14,0};
int one[] = {0,9,31,1,0};
int two[] = {8,17,19,13,1};
int three[] = {10,17,21,14,0};
int four[] = {28,4,4,31,0};
int five[] = {29,21,21,2,0};
int six[] = {14,21,21,2,0};
int seven[] = {17,18,20,24,0};
int eight[] = {14,21,21,14,0};
int nine[] = {8,20,20,15,0};
int a[] = {1, 6, 26, 6, 1}; 
int b[] = {31, 21, 21, 10, 0}; 
int c2[] = {14, 17, 17, 10, 0}; 
int d[] = {31, 17, 17, 14, 0}; 
int e[] = {31, 21, 21, 17, 0}; 
int f[] = {31, 20, 20, 16, 0}; 
int g[] = {14, 17, 19, 10, 0}; 
int h[] = {31, 4, 4, 4, 31}; 
int i[] = {0, 17, 31, 17, 0}; 
int j[] = {0, 17, 30, 16, 0}; 
int k[] = {31, 4, 10, 17, 0}; 
int l[] = {31, 1, 1, 1, 0}; 
int m[] = {31, 12, 3, 12, 31}; 
int n[] = {31, 12, 3, 31, 0}; 
int o[] = {14, 17, 17, 14, 0}; 
int p[] = {31, 20, 20, 8, 0}; 
int q[] = {14, 17, 19, 14, 2}; 
int r[] = {31, 20, 22, 9, 0}; 
int s[] = {8, 21, 21, 2, 0}; 
int t[] = {16, 16, 31, 16, 16}; 
int u[] = {30, 1, 1, 30, 0}; 
int v[] = {24, 6, 1, 6, 24}; 
int w[] = {28, 3, 12, 3, 28}; 
int x[] = {17, 10, 4, 10, 17}; 
int y[] = {17, 10, 4, 8, 16}; 
int z[] = {19, 21, 21, 25, 0}; 
int eos[] = {0, 1, 0, 0, 0}; 
int excl[] = {0, 29, 0, 0, 0}; 
int ques[] = {8, 19, 20, 8, 0}; 
void displayLine(int line) 
{ 
 int myline; 
 myline = line; 
 if (myline>=16) {digitalWrite(LED1, HIGH); myline-=16;} else {digitalWrite(LED1, LOW);} 
 if (myline>=8)  {digitalWrite(LED2, HIGH); myline-=8;}  else {digitalWrite(LED2, LOW);} 
 if (myline>=4)  {digitalWrite(LED3, HIGH); myline-=4;}  else {digitalWrite(LED3, LOW);} 
 if (myline>=2)  {digitalWrite(LED4, HIGH); myline-=2;}  else {digitalWrite(LED4, LOW);} 
 if (myline>=1)  {digitalWrite(LED5, HIGH); myline-=1;}  else {digitalWrite(LED5, LOW);}  
} 
void displayLinedown(int line) 
{ 
 int myline; 
 myline = line; 
 if (myline>=16) {digitalWrite(LED5, HIGH); myline-=16;} else {digitalWrite(LED5, LOW);} 
 if (myline>=8)  {digitalWrite(LED4, HIGH); myline-=8;}  else {digitalWrite(LED4, LOW);} 
 if (myline>=4)  {digitalWrite(LED3, HIGH); myline-=4;}  else {digitalWrite(LED3, LOW);} 
 if (myline>=2)  {digitalWrite(LED2, HIGH); myline-=2;}  else {digitalWrite(LED2, LOW);} 
 if (myline>=1)  {digitalWrite(LED1, HIGH); myline-=1;}  else {digitalWrite(LED1, LOW);}  
} 
void displayNumber(int num) 
{ int mm=num/1000;
  int cc=(num-1000*mm)/100;
  int dd=(num-((1000*mm)+(100*cc)))/10;
  int uu=num-((1000*mm)+(100*cc)+(10*dd));
  int numb[3]={cc,dd,uu};
 //if (numb[oi] == 0){for (int i = 0; i <5; i++){displayLine(zero[i]);delay(delayTime);}displayLine(0);}
 if (mm == 1){for (int i = 0; i <5; i++){displayLine(one[i]);delay(delayTime);}displayLine(0);}
 if (mm == 2){for (int i = 0; i <5; i++){displayLine(two[i]);delay(delayTime);}displayLine(0);}
 if (mm == 3){for (int i = 0; i <5; i++){displayLine(three[i]);delay(delayTime);}displayLine(0);}
 if (mm == 4){for (int i = 0; i <5; i++){displayLine(four[i]);delay(delayTime);}displayLine(0);}
 if (mm == 5){for (int i = 0; i <5; i++){displayLine(five[i]);delay(delayTime);}displayLine(0);}
 if (mm == 6){for (int i = 0; i <5; i++){displayLine(six[i]);delay(delayTime);}displayLine(0);}
 if (mm == 7){for (int i = 0; i <5; i++){displayLine(seven[i]);delay(delayTime);}displayLine(0);}
 if (mm == 8){for (int i = 0; i <5; i++){displayLine(eight[i]);delay(delayTime);}displayLine(0);} 
 if (mm == 9){for (int i = 0; i <5; i++){displayLine(nine[i]);delay(delayTime);}displayLine(0);}
  for(int oi;oi!=3;oi++){
 if (numb[oi] == 0){for (int i = 0; i <5; i++){displayLine(zero[i]);delay(delayTime);}displayLine(0);}
 if (numb[oi] == 1){for (int i = 0; i <5; i++){displayLine(one[i]);delay(delayTime);}displayLine(0);}
 if (numb[oi] == 2){for (int i = 0; i <5; i++){displayLine(two[i]);delay(delayTime);}displayLine(0);}
 if (numb[oi] == 3){for (int i = 0; i <5; i++){displayLine(three[i]);delay(delayTime);}displayLine(0);}
 if (numb[oi] == 4){for (int i = 0; i <5; i++){displayLine(four[i]);delay(delayTime);}displayLine(0);}
 if (numb[oi] == 5){for (int i = 0; i <5; i++){displayLine(five[i]);delay(delayTime);}displayLine(0);}
 if (numb[oi] == 6){for (int i = 0; i <5; i++){displayLine(six[i]);delay(delayTime);}displayLine(0);}
 if (numb[oi] == 7){for (int i = 0; i <5; i++){displayLine(seven[i]);delay(delayTime);}displayLine(0);}
 if (numb[oi] == 8){for (int i = 0; i <5; i++){displayLine(eight[i]);delay(delayTime);}displayLine(0);} 
 if (numb[oi] == 9){for (int i = 0; i <5; i++){displayLine(nine[i]);delay(delayTime);}displayLine(0);}
  }
}
void displayChar(char c) 
{ if (c == ' '){for (int i = 0; i <5; i++){delay(delayTime);}displayLine(0);} 
 if (c == '0'){for (int i = 0; i <5; i++){displayLine(zero[i]);delay(delayTime);}displayLine(0);}
 if (c == '1'){for (int i = 0; i <5; i++){displayLine(one[i]);delay(delayTime);}displayLine(0);}
 if (c == '2'){for (int i = 0; i <5; i++){displayLine(two[i]);delay(delayTime);}displayLine(0);}
 if (c == '3'){for (int i = 0; i <5; i++){displayLine(three[i]);delay(delayTime);}displayLine(0);}
 if (c == '4'){for (int i = 0; i <5; i++){displayLine(four[i]);delay(delayTime);}displayLine(0);}
 if (c == '5'){for (int i = 0; i <5; i++){displayLine(five[i]);delay(delayTime);}displayLine(0);}
 if (c == '6'){for (int i = 0; i <5; i++){displayLine(six[i]);delay(delayTime);}displayLine(0);}
 if (c == '7'){for (int i = 0; i <5; i++){displayLine(seven[i]);delay(delayTime);}displayLine(0);}
 if (c == '8'){for (int i = 0; i <5; i++){displayLine(eight[i]);delay(delayTime);}displayLine(0);} 
 if (c == '9'){for (int i = 0; i <5; i++){displayLine(nine[i]);delay(delayTime);}displayLine(0);}
 if (c == 'a'){for (int i = 0; i <5; i++){displayLine(a[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'b'){for (int i = 0; i <5; i++){displayLine(b[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'c'){for (int i = 0; i <5; i++){displayLine(c2[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'd'){for (int i = 0; i <5; i++){displayLine(d[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'e'){for (int i = 0; i <5; i++){displayLine(e[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'f'){for (int i = 0; i <5; i++){displayLine(f[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'g'){for (int i = 0; i <5; i++){displayLine(g[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'h'){for (int i = 0; i <5; i++){displayLine(h[i]);delay(delayTime);}displayLine(0);}  
 if (c == 'i'){for (int it = 0; it <5; it++){displayLine(i[it]);delay(delayTime);}displayLine(0);} 
 if (c == 'j'){for (int i = 0; i <5; i++){displayLine(j[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'k'){for (int i = 0; i <5; i++){displayLine(k[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'l'){for (int i = 0; i <5; i++){displayLine(l[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'm'){for (int i = 0; i <5; i++){displayLine(m[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'n'){for (int i = 0; i <5; i++){displayLine(n[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'o'){for (int i = 0; i <5; i++){displayLine(o[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'p'){for (int i = 0; i <5; i++){displayLine(p[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'q'){for (int i = 0; i <5; i++){displayLine(q[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'r'){for (int i = 0; i <5; i++){displayLine(r[i]);delay(delayTime);}displayLine(0);} 
 if (c == 's'){for (int i = 0; i <5; i++){displayLine(s[i]);delay(delayTime);}displayLine(0);} 
 if (c == 't'){for (int i = 0; i <5; i++){displayLine(t[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'u'){for (int i = 0; i <5; i++){displayLine(u[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'v'){for (int i = 0; i <5; i++){displayLine(v[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'w'){for (int i = 0; i <5; i++){displayLine(w[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'x'){for (int i = 0; i <5; i++){displayLine(x[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'y'){for (int i = 0; i <5; i++){displayLine(y[i]);delay(delayTime);}displayLine(0);} 
 if (c == 'z'){for (int i = 0; i <5; i++){displayLine(z[i]);delay(delayTime);}displayLine(0);} 
 if (c == '!'){for (int i = 0; i <5; i++){displayLine(excl[i]);delay(delayTime);}displayLine(0);} 
 if (c == '?'){for (int i = 0; i <5; i++){displayLine(ques[i]);delay(delayTime);}displayLine(0);} 
 if (c == '.'){for (int i = 0; i <5; i++){displayLine(eos[i]);delay(delayTime);}displayLine(0);} 
 delay(charBreak); 
} 
void displayChardown(char c) 
{ if (c == ' '){for (int i = 4; i !=-1; i--){delay(delayTime);}displayLinedown(0);} 
 if (c == '0'){for (int i = 4; i !=-1; i--){displayLinedown(zero[i]);delay(delayTime);}displayLinedown(0);}
 if (c == '1'){for (int i = 4; i !=-1; i--){displayLinedown(one[i]);delay(delayTime);}displayLinedown(0);}
 if (c == '2'){for (int i = 4; i !=-1; i--){displayLinedown(two[i]);delay(delayTime);}displayLinedown(0);}
 if (c == '3'){for (int i = 4; i !=-1; i--){displayLinedown(three[i]);delay(delayTime);}displayLinedown(0);}
 if (c == '4'){for (int i = 4; i !=-1; i--){displayLinedown(four[i]);delay(delayTime);}displayLinedown(0);}
 if (c == '5'){for (int i = 4; i !=-1; i--){displayLinedown(five[i]);delay(delayTime);}displayLinedown(0);}
 if (c == '6'){for (int i = 4; i !=-1; i--){displayLinedown(six[i]);delay(delayTime);}displayLinedown(0);}
 if (c == '7'){for (int i = 4; i !=-1; i--){displayLinedown(seven[i]);delay(delayTime);}displayLinedown(0);}
 if (c == '8'){for (int i = 4; i !=-1; i--){displayLinedown(eight[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == '9'){for (int i = 4; i !=-1; i--){displayLinedown(nine[i]);delay(delayTime);}displayLinedown(0);}
 if (c == 'a'){for (int i = 4; i !=-1; i--){displayLinedown(a[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'b'){for (int i = 4; i !=-1; i--){displayLinedown(b[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'c'){for (int i = 4; i !=-1; i--){displayLinedown(c2[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'd'){for (int i = 4; i !=-1; i--){displayLinedown(d[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'e'){for (int i = 4; i !=-1; i--){displayLinedown(e[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'f'){for (int i = 4; i !=-1; i--){displayLinedown(f[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'g'){for (int i = 4; i !=-1; i--){displayLinedown(g[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'h'){for (int i = 4; i !=-1; i--){displayLinedown(h[i]);delay(delayTime);}displayLinedown(0);}  
 if (c == 'i'){for (int it = 5; it !=-1; it--){displayLinedown(i[it]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'j'){for (int i = 4; i !=-1; i--){displayLinedown(j[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'k'){for (int i = 4; i !=-1; i--){displayLinedown(k[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'l'){for (int i = 4; i !=-1; i--){displayLinedown(l[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'm'){for (int i = 4; i !=-1; i--){displayLinedown(m[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'n'){for (int i = 4; i !=-1; i--){displayLinedown(n[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'o'){for (int i = 4; i !=-1; i--){displayLinedown(o[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'p'){for (int i = 4; i !=-1; i--){displayLinedown(p[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'q'){for (int i = 4; i !=-1; i--){displayLinedown(q[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'r'){for (int i = 4; i !=-1; i--){displayLinedown(r[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 's'){for (int i = 4; i !=-1; i--){displayLinedown(s[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 't'){for (int i = 4; i !=-1; i--){displayLinedown(t[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'u'){for (int i = 4; i !=-1; i--){displayLinedown(u[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'v'){for (int i = 4; i !=-1; i--){displayLinedown(v[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'w'){for (int i = 4; i !=-1; i--){displayLinedown(w[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'x'){for (int i = 4; i !=-1; i--){displayLinedown(x[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'y'){for (int i = 4; i !=-1; i--){displayLinedown(y[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == 'z'){for (int i = 4; i !=-1; i--){displayLinedown(z[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == '!'){for (int i = 4; i !=-1; i--){displayLinedown(excl[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == '?'){for (int i = 4; i !=-1; i--){displayLinedown(ques[i]);delay(delayTime);}displayLinedown(0);} 
 if (c == '.'){for (int i = 4; i !=-1; i--){displayLinedown(eos[i]);delay(delayTime);}displayLinedown(0);} 
 delay(charBreak); 
} 
int rpm=450;
int time;
void displayString(char* s) 
{ 
 for (int i = 0; i<=strlen(s); i++) 
 { 
   displayChar(s[i]); 
 } 
} 
void displayStringdown(char* s) 
{ 
 for (int i = strlen(s); i!=-1; i--) 
 { 
   displayChardown(s[i]); 
 } 
} 
bool timer;
int prevtime;
void loop (){
 time=millis();
 if(analogRead(0)<720){valor=0;}
  if(valor==0){   
      if(timer==1){
      rpm=60000/(time-prevtime); 
//time=0;
timer=0;
    }
    if(timer==0){ 
prevtime = time;
timer=1;
    } 
   
 displayNumber(rpm);
 displayStringdown("rpm ");
valor=1;
 }
}
