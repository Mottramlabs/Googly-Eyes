// MAX7219 functions


// MAX7219 register list
#define MAX7219_Noop          0x0
#define MAX7219_Column1       0x1
#define MAX7219_Column2       0x2
#define MAX7219_Column3       0x3
#define MAX7219_Column4       0x4
#define MAX7219_Column5       0x5
#define MAX7219_Column6       0x6
#define MAX7219_Column7       0x7
#define MAX7219_Column8       0x8
#define MAX7219_DecodeMode    0x9
#define MAX7219_Intensity     0xA
#define MAX7219_ScanLimit     0xB
#define MAX7219_Shutdown      0xC
#define MAX7219_Displaytest   0xF

#define Number_MAX7219 2
#define MAX7219_CS  7
#define Intensity 0x08

uint8_t Row = 0;           // Vairable for the Dot rows

#define Left_Eye  16
#define Right_Eye  8


void MAX_Transfer(uint8_t Address, uint8_t Data) {

  // Send the register address
  SPI.transfer(Address);

  // Send the value
  SPI.transfer(Data);

} // End Function



// Write data to all MAX7219 chips in use
void MAX_All(uint8_t Address, uint8_t Data) {

  digitalWrite(MAX7219_CS, LOW);  // Take CS Low

  for (uint8_t i = 0; i < Number_MAX7219; ++i) {

    SPI.transfer(Address);    // Send the register address
    SPI.transfer(Data);    // Send the value

  } // end of loop

  digitalWrite(MAX7219_CS, HIGH);  // Take CS High

} // end Function



void Clear_All() {

  // Loop for the registers 1 through 8 (valid data registers
  for (uint8_t ii = 1; ii < 9; ++ii) {
    MAX_All(ii, 0x00);
  } // end loop

} // End Function



// Write data to display row (as display is rotated 90 , rows are number of MAX7219 chips * 8
// If the row rquested is greater than possible this function will do nothing
void Write_Row(uint8_t Row_Address, uint8_t Row_Data) {

  // Range check the column value
  if (Row_Address >= 0 && Row_Address <= ((Number_MAX7219 * 8) - 1)) {

    // Which MAX7219 to write data to, write NOOP's to all others
    int Chip_Number = Row_Address / 8;

    // Find to chips column to write data too
    int x = (Chip_Number * 8); Row_Address = 8 - (Row_Address - x);

    // CS low
    digitalWrite(MAX7219_CS, LOW);

    // Test which chip to write data too and write noop to all others, that is register address 0x00
    for (x = Number_MAX7219; x-- > 0; ) {
      if (x == Chip_Number) {
        // This is the chip required, now select the column
        MAX_Transfer(Row_Address, Row_Data);
      }
      else {
        MAX_Transfer(MAX7219_Noop, 0x00);
      }
    } // end of loop

    // CS high
    digitalWrite(MAX7219_CS, HIGH);

  } // end of range check

} // end of function



// Write the eye charcter to the display using a font
void Write_Char(int Eye_Char) {

  // Range check for the eye character value
  if (Eye_Char < 31) {

    Row = Row - 8;

    for (uint8_t i = 8; i-- > 0; ) {

      int nuts = pgm_read_byte(&Text_Font[Eye_Char] [i]);
      Write_Row(Row, nuts); // Write to column, with data

      Row = Row + 1;

    } // End of loop

    Row = Row - 8;

  }  // End of range check

} // End of function



void MAX7219_Setup(void) {
  
  // Set load pin to output
  pinMode(MAX7219_CS, OUTPUT);

  // Reverse the SPI transfer to send the MSB first
  SPI.setBitOrder(MSBFIRST);

  // Start SPI
  SPI.begin();

  // Initialize all MAX7219 chips
  MAX_All(MAX7219_DecodeMode, 0x00);
  MAX_All(MAX7219_Intensity, Intensity);
  MAX_All(MAX7219_ScanLimit, 0x07);
  MAX_All(MAX7219_Displaytest, 0x00);
  MAX_All(MAX7219_Shutdown, 0x01);
  Clear_All();
  
} // End Function
