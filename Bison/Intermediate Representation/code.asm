.model small
.stack 100h

.data
	foof dw ?
	t0 dw ?
	t1 dw ?
	t2 dw ?
	maink dw ?
	t3 dw ?
	t4 dw ?
	t5 dw ?
	x dw 2 dup (?)
	maina dw 2 dup (?)
printVar dw ?  
    FLAG DW ?
    DIGITS DW ?
.code
SHOW PROC
     push ax
     push bx
     push cx
     push dx

    ;PRINT ARRAY NUMBERS
    ;TELEMENTS CONTAINS TOTAL ELEMENTS 
    ;TEMP CONTAINS VARIABLE TEMPORARILLY
    ;INITIALIZING INDEX TO ITERATE ARRAY FROM ZERO TO TOP
    
    MOV CX,0
    PRINT_NUM:
        MOV FLAG,0      ;INITIALIZING FLAG VARIABLE
        MOV AX,printVar
        
        CMP AX,0
        JGE GO3         ;CHECKING FOR NEGATIVE NUMBER
        NEG AX
        MOV FLAG,1      ;TRACKING IF NUMBER IS NEGATIVE
        
        GO3:
        MOV DX,0
        MOV DIGITS,0    ;COUNTING HOW MANY DIGITS IN THE NUMBER
        
        PUSH CX
        
        WHILE:
            
            MOV BX,10
            
            DIV BX
            
            ;MOV TEMP,AX
            ;MOV AH,2
            ;ADD DL,30H
            ;INT 21H
            PUSH DX
            
            ;MOV AX,TEMP
            INC DIGITS
            MOV DX,0 
            CMP AX,0
            JE END_WHILE
            JMP WHILE
            
        END_WHILE:
        
        ;MOV TEMP, CX
        
        MOV CX,DIGITS
        MOV AH,2
        CMP FLAG,1
        JNE PWHILE
        MOV DL,'-'
        INT 21H
        
        PWHILE:
            POP DX
            ADD DL,30H
            INT 21H
        
        LOOP PWHILE:  
        
        POP CX

        mov ah,2
        mov dl,0dh
        int 21h
        mov dl,0ah
        int 21h

        pop ax
        pop bx
        pop cx
        pop dx
    
RET
SHOW ENDP
foo proc
	push ax
	push bx
	push cx
	push dx
	mov bx,1
	shl bx,1
	mov ax,x[bx]
	mov t0,ax
	mov ax,t0
	mov foof,ax
	mov t1,ax
	mov ax,foof
	mov printVar,ax
	call SHOW
	pop ax
	pop bx
	pop cx
	pop dx
ret
foo endp
main proc
	mov ax,@data
	mov ds,ax
	mov bx,1
	shl bx,1
	mov ax,2
	mov maina[bx],ax
	mov t2,ax
	mov bx,1
	shl bx,1
	mov ax,maina[bx]
	mov t3,ax
	mov ax,t3
	mov maink,ax
	mov t4,ax
	mov bx,1
	shl bx,1
	mov ax,123
	mov x[bx],ax
	mov t5,ax
	call foo
	mov ax,maink
	mov printVar,ax
	call SHOW
	mov ah,4ch
	int 21h
main endp

end main