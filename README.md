# usb-ledstrip-driver
===================
Connect a real light to your laptop without the need of external power. 

This simple device boost usb power to 24V and also,
- Small size, only 9x37 mm
- High Efficiency boost driver [LT3465][1] 81% at (TODO)
- quiescent current ?? (TODO)
- Control lighting with Attiny45/85 and arduino API
- Ideal 24V ledstrip and ~300mA forward current (**~7W** lighting).
 - The best LED efficiency is about 700LM for 7W with 3200K color 
- PWM for LED Control 

## Usual shot,
* http://www.flickr.com/photos/10367069@N00/7135938581/in/set-72157629949644791/lightbox/
* http://www.flickr.com/photos/10367069@N00/7105260293/in/set-72157629949644791/lightbox/

## Current developpement:
- Command the Ledstrip from USB [Virtual USB (V-USB)][2]
- Boot loader from USB

## Long term,
- upgrade the driver with [LT3591][3] and load 24V **~800mA** (**10W** - USB limitation)!!

## Known bugs
 

**THIS IS ALPHA SOFTWARE/HARDWARE AND SHOULD BE TREATED ACCORDINGLY.**
**IT IS FUN TO GET RUNNING, BUT EXPECT THINGS TO BE BROKEN.**

[1]: http://www.linear.com/product/LT3465
[2]: http://www.obdev.at/products/vusb/ 
[3]: http://www.linear.com/product/LT3591
