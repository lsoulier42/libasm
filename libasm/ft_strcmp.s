	global ft_strcmp
	section .text
ft_strcmp:
	push rbp
	mov rbp, rsp
	mov dl, [rdi]
	mov cl, [rsi]
	cmp dl, cl
	jne diff
compare:
	cmp dl, 0
	je end_of_str
	cmp cl, 0
	je end_of_str
	inc rdi
	inc rsi
	mov dl, [rdi]
	mov cl, [rsi]
	cmp dl, cl
	je compare
diff:
	cmp dl, cl
	jb ret_neg
ret_pos:
	mov rax, 1
	jmp done
ret_neg:
	mov rax, -1
	jmp done
ret_null:
	mov rax, 0
	jmp done
end_of_str:
	cmp dl, cl
	jne diff
	jmp ret_null
done:
	mov rsp, rbp
	pop rbp
	ret
