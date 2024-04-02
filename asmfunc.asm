section .data

var1 times 1048576 dq 1.5
var2 times 1048576 dq 1.5
vectorSize dq 1048576

zero dq 0

sdot dq 0

section .text
bits 64

default rel
global vector

vector:
	MOV R12, 8
	MOV R13, [vectorSize]
	IMUL R12, R13
    SUB R12, 8

	MOVSD XMM6, [zero] 

	MOV R14, 0
	JMP CON  
      
ADDCON:
    ADD R14, 8

CON: 
	MOVSD XMM7, [var1+8] ;modify
    MOVSD XMM8, [var2+8] ;modify

	MULSD XMM7, XMM8
    
    MOVSD XMM6, [sdot]
    ADDSD XMM6, XMM7
    MOVSD [sdot], XMM6

	CMP R14, R12
    JL ADDCON
    
	MOVSD XMM0, [sdot]

	ret