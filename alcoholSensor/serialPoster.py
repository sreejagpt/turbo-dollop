import serial
ser = serial.Serial('/dev/cu.usbmodem1411', 9600) # Establish the connection on a specific port
while True:
     print ser.readline() # Read the newest output from the Arduino
