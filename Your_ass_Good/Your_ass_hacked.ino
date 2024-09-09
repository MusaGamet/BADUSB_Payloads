#include <Keyboard.h>


// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  Keyboard.begin();

  // Start Payload
  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("https://yt3.ggpht.com/a/AATXAJxJkfXiYT8y7N1_XVX0_mLzMjS3JlHVyqu9SFaeZA=s900-c-k-c0xffffffff-no-rj-mo");

  typeKey(KEY_RETURN);

  delay(4000);

  Keyboard.print("f12");

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {}