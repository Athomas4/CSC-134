print("Hello World")
# M2LAB2 - graphics
# Andrae
# 2/5/2023
# Learn some graphics tools

from turtle import *
screen = Screen()
screen.bgcolor("Black")

t=Turtle()
t.pencolor("Orange")
t.pensize(3)


for side in (1,2,3,4):
    t.forward(100)
    t.right(90)

for side in (1,2,3):
    t.forward(100)
    t.left(120)

t.penup()
t.forward (300)
t.pendown()

t.pencolor("purple")
t.right(90)
t.forward(50)

t.pencolor("orange")
t.left(45)
t.forward(50)

t.pencolor("blue")
t.right(45)
t.forward(50)

t.pencolor("medium slate blue")
t.right(45)
t.forward(50)

t.pencolor("medium slate blue")
t.right(90)
t.forward(50)

t.pencolor("blue")
t.right(45)
t.forward(50)

t.pencolor("orange")
t.right(45)
t.forward(20)

t.pencolor("Orange")
t.right(90)
t.forward(30)

t.pencolor("purple")
t.right(45)
t.forward(50)

t.pencolor("purple")
t.right(180)
t.forward(50)

t.pencolor("Orange")
t.left(45)
t.forward(30)

t.pencolor("Orange")
t.forward(15)
t.right(45)

t.pencolor("blue")
t.forward(65)
t.right(45)

t.pencolor("medium slate blue")
t.forward(50)
t.right(90)

t.pencolor("medium slate blue")
t.forward(50)
t.right(45)

t.pencolor("blue")
t.forward(65)
t.right(45)

t.pencolor("Orange")
t.forward(25)


