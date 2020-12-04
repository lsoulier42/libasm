	global ft_strlen
	section .text
ft_strlen:
	push rbp
	mov rbp, rsp
	xor rax, rax
	cmp [rdi], byte 0
	je done
count:
	inc rax
	inc rdi
	cmp [rdi], byte 0
	jne count
done:
	mov rsp, rbp
	pop rbp
	ret
