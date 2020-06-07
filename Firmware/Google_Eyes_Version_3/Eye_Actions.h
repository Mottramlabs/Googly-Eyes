void Eye_action(void) {

  // Blink
  if (Action == 1) {

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);
    delay(50);

    // Close eyes
    for (uint8_t d = 27; d < 31; ++d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      delay(100);

    } // End loop

    // Open eyes
    for (uint8_t d = 29; d > 26; --d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      delay(100);

    } // End loop

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);


  } // End of action


  // Big eyes
  if (Action == 2) {

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);
    delay(50);

    // Open eyes
    for (uint8_t d = 25; d < 27; ++d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      
    } // End loop

    delay(RandDelay);

    // Close eyes
    for (uint8_t d = 26; d > 25; --d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      delay(100);

    } // End loop

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Mad eyes 1
  if (Action == 3) {

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);
    delay(50);

    // Roll eyes
    for (uint8_t d = 1; d < 9; ++d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      delay(100);

    } // End loop

    // And back
    for (uint8_t d = 7; d > 0; --d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      delay(100);

    } // End loop

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Mad eyes 2
  if (Action == 4) {

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);
    delay(50);

    // And back
    for (uint8_t d = 7; d > 0; --d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      delay(100);

    } // End loop

    // Roll eyes
    for (uint8_t d = 1; d < 9; ++d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      delay(100);

    } // End loop

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action



  // Mad eyes 3
  if (Action == 5) {

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);
    delay(50);

    // Roll eyes
    for (uint8_t d = 9; d < 25; ++d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      delay(100);

    } // End loop

    // And back
    for (uint8_t d = 23; d > 8; --d) {

      Row = Right_Eye;
      Write_Char(d);
      Row = Left_Eye;
      Write_Char(d);
      delay(100);

    } // End loop

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action



  // Boz eyed
  if (Action == 6) {

    // Boz
    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);
    delay(50);

    Row = Right_Eye;
    Write_Char(6);
    Row = Left_Eye;
    Write_Char(4);
    delay(100);

    Row = Right_Eye;
    Write_Char(19);
    Row = Left_Eye;
    Write_Char(15);

    delay(RandDelay);

    // And back
    Row = Right_Eye;
    Write_Char(6);
    Row = Left_Eye;
    Write_Char(4);
    delay(100);

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Eyes right
  if (Action == 7) {

    Row = Right_Eye;
    Write_Char(3);
    Row = Left_Eye;
    Write_Char(3);
    delay(100);

    Row = Right_Eye;
    Write_Char(13);
    Row = Left_Eye;
    Write_Char(13);

    delay(RandDelay);

    // And back
    Row = Right_Eye;
    Write_Char(3);
    Row = Left_Eye;
    Write_Char(3);
    delay(100);

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Eyes left
  if (Action == 8) {

    Row = Right_Eye;
    Write_Char(7);
    Row = Left_Eye;
    Write_Char(7);
    delay(100);

    Row = Right_Eye;
    Write_Char(21);
    Row = Left_Eye;
    Write_Char(21);

    delay(RandDelay);

    // And back
    Row = Right_Eye;
    Write_Char(7);
    Row = Left_Eye;
    Write_Char(7);
    delay(100);

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Eyes up
  if (Action == 9) {

    Row = Right_Eye;
    Write_Char(1);
    Row = Left_Eye;
    Write_Char(1);
    delay(100);

    Row = Right_Eye;
    Write_Char(9);
    Row = Left_Eye;
    Write_Char(9);

    delay(RandDelay);

    // And back
    Row = Right_Eye;
    Write_Char(1);
    Row = Left_Eye;
    Write_Char(1);
    delay(100);

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Eyes down
  if (Action == 10) {

    Row = Right_Eye;
    Write_Char(5);
    Row = Left_Eye;
    Write_Char(5);
    delay(100);

    Row = Right_Eye;
    Write_Char(17);
    Row = Left_Eye;
    Write_Char(17);

    delay(RandDelay);

    // And back
    Row = Right_Eye;
    Write_Char(5);
    Row = Left_Eye;
    Write_Char(5);
    delay(100);

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Eyes up right
  if (Action == 11) {

    Row = Right_Eye;
    Write_Char(2);
    Row = Left_Eye;
    Write_Char(2);
    delay(100);

    Row = Right_Eye;
    Write_Char(11);
    Row = Left_Eye;
    Write_Char(11);

    delay(RandDelay);

    // And back
    Row = Right_Eye;
    Write_Char(2);
    Row = Left_Eye;
    Write_Char(2);
    delay(100);

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Eyes down right
  if (Action == 12) {

    Row = Right_Eye;
    Write_Char(4);
    Row = Left_Eye;
    Write_Char(4);
    delay(100);

    Row = Right_Eye;
    Write_Char(15);
    Row = Left_Eye;
    Write_Char(15);

    delay(RandDelay);

    // And back
    Row = Right_Eye;
    Write_Char(4);
    Row = Left_Eye;
    Write_Char(4);
    delay(100);

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Eyes up left
  if (Action == 13) {

    Row = Right_Eye;
    Write_Char(8);
    Row = Left_Eye;
    Write_Char(8);
    delay(100);

    Row = Right_Eye;
    Write_Char(23);
    Row = Left_Eye;
    Write_Char(23);

    delay(RandDelay);

    // And back
    Row = Right_Eye;
    Write_Char(8);
    Row = Left_Eye;
    Write_Char(8);
    delay(100);

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action


  // Eyes down left
  if (Action == 14) {

    Row = Right_Eye;
    Write_Char(6);
    Row = Left_Eye;
    Write_Char(6);
    delay(100);

    Row = Right_Eye;
    Write_Char(19);
    Row = Left_Eye;
    Write_Char(19);

    delay(RandDelay);

    // And back
    Row = Right_Eye;
    Write_Char(6);
    Row = Left_Eye;
    Write_Char(6);
    delay(100);

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);

  } // End of action



  // Wink right eye
  if (Action == 15) {

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);
    delay(50);

    // Close eyes
    for (uint8_t d = 27; d < 31; ++d) {

      Row = Right_Eye;
      Write_Char(d);
      delay(60);

    } // End loop

    // Open eyes
    for (uint8_t d = 29; d > 26; --d) {

      Row = Right_Eye;
      Write_Char(d);
      delay(60);

    } // End loop

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);

  } // End of action


  // Wink left eye
  if (Action == 16) {

    // Eyes open
    Row = Right_Eye;
    Write_Char(0);
    Row = Left_Eye;
    Write_Char(0);
    delay(50);

    // Close eyes
    for (uint8_t d = 27; d < 31; ++d) {

      Row = Left_Eye;
      Write_Char(d);
      delay(60);

    } // End loop

    // Open eyes
    for (uint8_t d = 29; d > 26; --d) {

      Row = Left_Eye;
      Write_Char(d);
      delay(60);

    } // End loop

    // Eyes open
    Row = Left_Eye;
    Write_Char(0);

  } // End of action

} // End of function
