# usb-ledstrip-driver
===================
Connect a real light to your laptop without the need of external power. 

This simple device boost usb power to 24V and also,
- Small size, only 9x37 mm
- High Efficiency boost driver [LT3465][1] 81% at (TODO)
- quiescent current ?? (TODO)
- Control lighting with Attiny45/85 and arduino API
- Ideal 24V ledstrip with ~66mA (RL=3[Ohms])switch current for (**~1.58W** lighting).
 - note: The best LED efficiency is about 200LM for 2W with 3200K color temperature (Warm White)!!
- PWM for LED Control 
- IL=1/RL*(0.2-0.026*LN(EXP(0.2/0.026)/EXP(5/0.13)+1))

## Usual shot,
![](http://farm9.staticflickr.com/8018/7257815024_a1fe84bef0_c.jpg)
![](http://farm9.staticflickr.com/8005/7105260293_785ed5d694_c.jpg)

## Current developpement:
- Command the Ledstrip from USB [Virtual USB (V-USB)][2]
- Boot loader from USB
![](http://farm9.staticflickr.com/8502/8307060676_72d5e40d2a_b.jpg)

## Long term,
- upgrade the driver with [LT3591][3], **~800mA** SWITCH current at USB line, load 24V  (**4W**)!!

## Known bugs
 

**THIS IS ALPHA SOFTWARE/HARDWARE AND SHOULD BE TREATED ACCORDINGLY.**
**IT IS FUN TO GET RUNNING, BUT EXPECT THINGS TO BE BROKEN.**

[1]: http://www.linear.com/product/LT3465
[2]: http://www.obdev.at/products/vusb/ 
[3]: http://www.linear.com/product/LT3591
