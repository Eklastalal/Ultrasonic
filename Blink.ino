const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
pinMode(4, OUTPUT);
}\
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH); // إرسال نبضة للحساس
delayMicroseconds(10);
digitalWrite(trigPin, LOW); // قم بإعادة المخرج إلى LOW للإنتظار عند الجهاز الذي تم التحقق منه
duration = pulseIn(echoPin, HIGH); // قراءة المدة التي استغرقها الصوت للعودة
distance = duration * 0.034 / 2;
Serial.print("Distance is : " );
Serial.println(distance);
if (distance < 9)
{
 digitalWrite(4,HIGH);
}
else
{
  digitalWrite(4,LOW);
}}
