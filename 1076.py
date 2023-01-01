import math

color_dict = {"black" : '0', "brown" : '1', "red" : '2', "orange" : '3', "yellow" : '4', "green" : '5', "blue" : '6',
              "violet" : '7', "grey" : '8', "white" : '9'}

color1 = input()
color2 = input()
color3 = input()

print(int(int(color_dict[color1] + color_dict[color2]) * math.pow(10, int(color_dict[color3]))))
