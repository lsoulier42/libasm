	global ft_strdup
	extern malloc
	section .text
ft_strdup:
	push rbp
	mov rbp, rsp
	xor rcx, rcx
	cmp [rdi], byte 0
	je alloc_word
len_str:
	inc rcx
	cmp [rdi + rcx], byte 0
	jne len_str
alloc_word:
	inc rcx
	push rdi
	mov rdi, rcx
	call malloc wrt ..plt
	cmp rax, 0
	je done
	pop rdi
	xor rdx, rdx
	xor sil, sil
	mov sil, [rdi]
	mov [rax], sil
copy_word:
	inc rdx
	mov sil, [rdi + rdx]
	mov [rax + rdx], sil
	cmp sil, 0
	jne copy_word
done:
	mov rsp, rbp
	pop rbp
	ret
