	global ft_read
	extern __errno_location
	section .text
ft_read:
	push rbp
	mov rbp, rsp
	mov rax, 0
	syscall
	cmp rax, 0
	jge done
read_error:
	push rbx
	mov rbx, rax
	call __errno_location wrt ..plt
	neg rbx
	mov [rax], rbx
	pop rbx
	mov rax, -1
done:	
	mov rsp, rbp
	pop rbp
	ret
