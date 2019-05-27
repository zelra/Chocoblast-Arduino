#include "Keyboard.h"
void setup()
{
  char *app = "courrier";   
  char *object = "Chocoblqst";
  char *body = "Coucoum je rq;ene les chocolqtines de;qin";
  int i = 0;
  
  Keyboard.begin();
  
  //Open Start menu
  Keyboard.press(KEY_LEFT_CTRL);
  delay(500);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  // Open mail app
  delay(1000);
  for (i = 0; i < strlen(app); i++){
   Keyboard.write(app[i]);
  }
  delay(500);
  typeKey(KEY_RETURN);
  
  delay(2000);

  // New email
  for (i = 0; i < 2; i++){
   typeKey(KEY_TAB);
  }
  typeKey(KEY_RETURN);
  delay(1000);

  // Write recipient address
  Keyboard.write('X');        // /!\ Write your recipient address here
  Keyboard.write('X');
  typeKey(KEY_RETURN);

  // Go to object
  for (i = 0; i < 3; i++){
    typeKey(KEY_TAB);
   }
   
  // Write object 
  delay(1000);
  for (i = 0; i < strlen(object); i++){
   Keyboard.write(object[i]);
  }

  // Go to body
  typeKey(KEY_TAB);

  // Write Body
  delay(1000);
  for (i = 0; i < strlen(body); i++){
   Keyboard.write(body[i]);
  }
  
  Keyboard.end();
}
void loop() {}
void typeKey(int key){
  Keyboard.press(key);
  delay(500);
  Keyboard.release(key);
  //Keyboard.releaseAll();
}
