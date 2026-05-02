 /**
 * Ernest Stover
 * @details system monitor with a hardware displays
 * @date 4/24/26
 */
 
 // Button pins 

 // i2c port and pins
 #define I2C_PORT i2c1
 #define I2C_SDA 3
 #define I2C_SDA 5

 // LCD i2c address
 static const uint8_t LCD_ADDR = 0x27;

 // Function stubs 
 void i2c_send_byte(uint8_t data);


 // Main loop 
 int main() 
 {
    // setup

    while(1) {

    }
 }
