[editor.php](editor.php)

[link to github repository of The Pyramids at github.com/lafelabs/ThePyramids](https://github.com/LafeLabs/ThePyramids/)

[link to copy readme from github to local scroll](copy.php?from=https://raw.githubusercontent.com/LafeLabs/ThePyramids/main/README.md&to=scrolls/thepyramids)



## [scrolleditor.html](scrolleditor.html)

# The Pyramids

## A Geometron/Trash Robot Thing

The Pyramids are a set of technological artifacts.  Each Pyramid is made from the same basic pattern, but they do different things and have different things added to them. 

All Trash Robot is made from upcycled components, rainbow duct tape, and googley eyes.  Geometron gives us a way to describe the geometry of the objects made from trash so that they can be replicated.  We make [Geometron Shapes](http://trashrobot.org/user.php?scroll=scrolls/shapes) from laser cut 1/8 inch neon green acrylic.  Or just construct them from paper with any geometry tools.  We make the ArtBox 

![](https://i.imgur.com/roIupX8.jpg)

![](https://i.imgur.com/coRYMPd.jpg)

The "brains" of The Pyramids are based on the Arduino UNO with a standard shield board which can be used for various applications. 

## [link to buy trash robot 5 shield boards from PCBway.com](https://www.pcbway.com/project/shareproject/Generic_Trash_Robot_UNO_Shield__V5.html)

## [Link to Digikey Cart with components to fully stuff the whole shield board](https://www.digikey.com/short/92z70jhr)

## The Set:

{

 - gyrator
 - sensor short
 - sensor tall
 - audion
 - glowglobe
 - knob

}

## Gyrator:

{

 - pyramid
 - salvaged DC brushed(2 wires) motor from printer
 - 1.5 inch square cardboard blocks with channel cutouts width of motor gear length the distance to middle plus another gear diameter,stacked, duct taped with nut, epoxied to motor
 - motor assembly mounted through a square hole cut in center of 3 inch square top, which is either single or double stacked
 - male barrel connector cable to solder to motor
 - HDPE sheet cut into strip, bent 90 degrees, used to mount motor in hole cut in middle of 3 inch square top of Pyramid
 - HDPE strip folded with spare space to protect shaft in back of motor, duct taped in place behind motor
 - large HDPE sheet from most of a side of a milk carton duct taped in a big curved surface across the top

}

## Knob:

{

 - pyramid
 - [TalentCell LiPo battery pack duct taped to side of pyramid](https://www.amazon.com/TalentCell-Rechargeable-3000mAh-Lithium-External/dp/B01M7Z9Z1N/)
 - USB A to B cable 
 - Arduino UNO board
 - shield board with barrel in, barrel out, transistor, diode, resistor, 3 pin header for potentiometer
 - 10k potentiometer
 - 3 inch square stack of 3 with two having channel cut out for pot. 
 - pot has jumper wires soldered to its leads which go to header, is inserted into bottom of the three 3 inch squares, all are stacked and duct taped, pot is epoxied in place
 - stack of 4 triangles makes knob. Equilateral triangle of side 1.5xsqrt(3) inches, hole punched in middle, duct taped up pink, and epoxied onto the knob 

}

## Pyramid:

{

 - 6 inch square base
 - 3 inch square top
 - 4 trapezoidal sides with 6 inch base, 3 inch top, and 72 degree angles on the bottom and 108 degree angles on the top(use Golden Triangle and Golden Gnomon from the [Shape Set](http://trashrobot.org/user.php?map=maps/shapes)).
 - rainbow duct tape skin covers whole sides: red, orange, yellow, green, blue, purple, pink, black
 - replicator is the [ArtBox](http://trashrobot.org/user.php?scroll=scrolls/box) including the trash ties and tape snake
 - patterns cut out in thin cereal box cardboard to replicate the whole geometry: base, top, sides
 - 8 holes punched near bottom corners of all four sides, threaded with Trash Tie(6 foot long section of clothesline with ends duct taped to prevent fraying)

}

## Short Sensor:

{

 - Pyramid
 - [oscillator scroll](mathuser.php?scroll=scrolls/oscillator)
 - capstone with a 1.5 inch square top and four sides made from trapezoids with 3 inch base, 1.5 inch top, 60 degree bottom angles and 120 degree top angles
 - capstone duct taped with pink duct tape on top of 3 inch square top
 - trash robot 5 shield board stuffed with transistor, diode, 10k resistor, male barrel for voltage in, female for voltage out, four pin header at I2C output
 - 4 pin ribbon cable terminating in female header or a set of four jumpers terminating in individual female connectors, soldered to pins of [LIS3DH](https://www.adafruit.com/product/2809)
 - LIS3DH board duct taped to center top of pyramid inside
 - USB A/B cable
 - Arduino UNO board, uploading code from [https://github.com/LafeLabs/ThePyramids](https://github.com/LafeLabs/ThePyramids/blob/main/arduinocode/sensor-zmotion-LIS3DH/sensor-zmotion-LIS3DH.ino)
 - [LiPo Battery Pack with charger, duct taped to Pyramid Base](https://www.amazon.com/TalentCell-Rechargeable-3000mAh-Lithium-External/dp/B01M7Z9Z1N/)
 - thin cardboard replicator stencils for all shapes: golden triangle for capstone, trapezoidal side shape, 3 inch square top and 6 inch square base


}

## Tall Sensor:

{

 - four trapezoidal sides with 6 inch base, 3 inch top, 60 degrees on bottom angles and 120 degrees on top angles
 - 6 inch square base
 - 3 inch square top
 - base of 4 sides and top all assembled with rainbow duct tape skin:  red, orange, yellow, green, blue, purple, pink, black
 - set of 8 holes in bottom corners of all 4 trapezoidal sides, threaded with Trash Ties
 - four sides of capstone are all Golden Triangles of base 3 inches and sides 3 inches times the Golden  Ratio, 72 degrees in the bottom angles and 36 degrees in the top angle
 - capstone is duct taped from pink duct tape, including to top of base Pyramid
 - trash robot 5 shield board stuffed with transistor, diode, 10k resistor, male barrel for voltage in, female for voltage out, four pin header at I2C output
 - 4 pin ribbon cable terminating in female header or a set of four jumpers terminating in individual female connectors, soldered to pins of [LIS3DH](https://www.adafruit.com/product/2809)
 - LIS3DH board duct taped to center top of pyramid inside
 - USB A/B cable
 - Arduino UNO board, uploading code from [https://github.com/LafeLabs/ThePyramids](https://github.com/LafeLabs/ThePyramids/blob/main/arduinocode/sensor-zmotion-LIS3DH/sensor-zmotion-LIS3DH.ino)
 - [LiPo Battery Pack with charger, duct taped to Pyramid Base](https://www.amazon.com/TalentCell-Rechargeable-3000mAh-Lithium-External/dp/B01M7Z9Z1N/)
 - thin cardboard replicator stencils for all shapes: golden triangle for capstone, trapezoidal side shape, 3 inch square top and 6 inch square base
 
}


## Audion:

{

 - Pyramid
 - no shield needed, Arduino UNO board
 - USB A/B cable, anything to plug it into, laptop etc
 - buy kits from amazon: jumpers, capacitors, resistors, wires, audio jacks, audio cable, potentiometers

}

## GlowGlobe:

{

 - Shield board with 300 ohm resistor, huge capacitor, 3 pin header on neopixel out
 - neopixel strip with cable ending in female 0.1 inch header
 - Pyramid with HDPE windows and top

}


