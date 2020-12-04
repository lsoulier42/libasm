	global	ft_strcpy
	section .text
ft_strcpy:
	push rbp
	mov rbp, rsp
	xor rdx, rdx
	cmp [rsi], byte 0
	je done
copy:
	mov cl, [rsi + rdx]
	mov [rdi + rdx], cl
	inc rdx
	cmp [rsi + rdx], byte 0
	jne copy
done:
	mov [rdi + rdx], byte 0
	mov rax, rdi
	mov rsp, rbp
	pop rbp
	ret
