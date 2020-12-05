	global ft_write
	extern __errno_location
	section .text
ft_write:
	push rbp
	mov rbp, rsp
	mov rax, 1
	syscall
	cmp rax, 0
	jge done
write_error:
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
