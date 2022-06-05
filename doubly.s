	.file	"doubly.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN4NodeC2Ei,"axG",@progbits,_ZN4NodeC5Ei,comdat
	.align 2
	.weak	_ZN4NodeC2Ei
	.type	_ZN4NodeC2Ei, @function
_ZN4NodeC2Ei:
.LFB1526:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1526:
	.size	_ZN4NodeC2Ei, .-_ZN4NodeC2Ei
	.weak	_ZN4NodeC1Ei
	.set	_ZN4NodeC1Ei,_ZN4NodeC2Ei
	.section	.text._ZN16DoublyLinkedListC2Ev,"axG",@progbits,_ZN16DoublyLinkedListC5Ev,comdat
	.align 2
	.weak	_ZN16DoublyLinkedListC2Ev
	.type	_ZN16DoublyLinkedListC2Ev, @function
_ZN16DoublyLinkedListC2Ev:
.LFB1529:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1529:
	.size	_ZN16DoublyLinkedListC2Ev, .-_ZN16DoublyLinkedListC2Ev
	.weak	_ZN16DoublyLinkedListC1Ev
	.set	_ZN16DoublyLinkedListC1Ev,_ZN16DoublyLinkedListC2Ev
	.section	.text._ZN16DoublyLinkedList6insertEi,"axG",@progbits,_ZN16DoublyLinkedList6insertEi,comdat
	.align 2
	.weak	_ZN16DoublyLinkedList6insertEi
	.type	_ZN16DoublyLinkedList6insertEi, @function
_ZN16DoublyLinkedList6insertEi:
.LFB1531:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	$24, %edi
	call	_Znwm@PLT
	movq	%rax, %rbx
	movl	-44(%rbp), %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZN4NodeC1Ei
	movq	%rbx, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L4
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	jmp	.L6
.L4:
	movq	-40(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 16(%rax)
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L6:
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1531:
	.size	_ZN16DoublyLinkedList6insertEi, .-_ZN16DoublyLinkedList6insertEi
	.section	.text._ZN16DoublyLinkedList11insertFirstEi,"axG",@progbits,_ZN16DoublyLinkedList11insertFirstEi,comdat
	.align 2
	.weak	_ZN16DoublyLinkedList11insertFirstEi
	.type	_ZN16DoublyLinkedList11insertFirstEi, @function
_ZN16DoublyLinkedList11insertFirstEi:
.LFB1532:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	$24, %edi
	call	_Znwm@PLT
	movq	%rax, %rbx
	movl	-44(%rbp), %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZN4NodeC1Ei
	movq	%rbx, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, (%rax)
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1532:
	.size	_ZN16DoublyLinkedList11insertFirstEi, .-_ZN16DoublyLinkedList11insertFirstEi
	.section	.text._ZN16DoublyLinkedList10insertLastEi,"axG",@progbits,_ZN16DoublyLinkedList10insertLastEi,comdat
	.align 2
	.weak	_ZN16DoublyLinkedList10insertLastEi
	.type	_ZN16DoublyLinkedList10insertLastEi, @function
_ZN16DoublyLinkedList10insertLastEi:
.LFB1533:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	$24, %edi
	call	_Znwm@PLT
	movq	%rax, %rbx
	movl	-44(%rbp), %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZN4NodeC1Ei
	movq	%rbx, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 16(%rax)
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1533:
	.size	_ZN16DoublyLinkedList10insertLastEi, .-_ZN16DoublyLinkedList10insertLastEi
	.section	.text._ZN16DoublyLinkedList8insertAtEii,"axG",@progbits,_ZN16DoublyLinkedList8insertAtEii,comdat
	.align 2
	.weak	_ZN16DoublyLinkedList8insertAtEii
	.type	_ZN16DoublyLinkedList8insertAtEii, @function
_ZN16DoublyLinkedList8insertAtEii:
.LFB1534:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movl	%esi, -60(%rbp)
	movl	%edx, -64(%rbp)
	movl	$24, %edi
	call	_Znwm@PLT
	movq	%rax, %rbx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZN4NodeC1Ei
	movq	%rbx, -24(%rbp)
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -40(%rbp)
	movl	$0, -44(%rbp)
.L11:
	movl	-44(%rbp), %eax
	cmpl	-60(%rbp), %eax
	jge	.L10
	movq	-40(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -40(%rbp)
	addl	$1, -44(%rbp)
	jmp	.L11
.L10:
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-24(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 8(%rax)
	nop
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1534:
	.size	_ZN16DoublyLinkedList8insertAtEii, .-_ZN16DoublyLinkedList8insertAtEii
	.section	.text._ZN16DoublyLinkedList7displayEv,"axG",@progbits,_ZN16DoublyLinkedList7displayEv,comdat
	.align 2
	.weak	_ZN16DoublyLinkedList7displayEv
	.type	_ZN16DoublyLinkedList7displayEv, @function
_ZN16DoublyLinkedList7displayEv:
.LFB1538:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
.L14:
	cmpq	$0, -8(%rbp)
	je	.L13
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L14
.L13:
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1538:
	.size	_ZN16DoublyLinkedList7displayEv, .-_ZN16DoublyLinkedList7displayEv
	.section	.text._ZN16DoublyLinkedList14displayReverseEv,"axG",@progbits,_ZN16DoublyLinkedList14displayReverseEv,comdat
	.align 2
	.weak	_ZN16DoublyLinkedList14displayReverseEv
	.type	_ZN16DoublyLinkedList14displayReverseEv, @function
_ZN16DoublyLinkedList14displayReverseEv:
.LFB1539:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
.L17:
	cmpq	$0, -8(%rbp)
	je	.L16
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L17
.L16:
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1539:
	.size	_ZN16DoublyLinkedList14displayReverseEv, .-_ZN16DoublyLinkedList14displayReverseEv
	.text
	.globl	main
	.type	main, @function
main:
.LFB1540:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN16DoublyLinkedListC1Ev
	leaq	-32(%rbp), %rax
	movl	$60, %esi
	movq	%rax, %rdi
	call	_ZN16DoublyLinkedList6insertEi
	leaq	-32(%rbp), %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	_ZN16DoublyLinkedList6insertEi
	leaq	-32(%rbp), %rax
	movl	$33, %esi
	movq	%rax, %rdi
	call	_ZN16DoublyLinkedList11insertFirstEi
	leaq	-32(%rbp), %rax
	movl	$69, %esi
	movq	%rax, %rdi
	call	_ZN16DoublyLinkedList10insertLastEi
	leaq	-32(%rbp), %rax
	movl	$420, %edx
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZN16DoublyLinkedList8insertAtEii
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN16DoublyLinkedList7displayEv
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN16DoublyLinkedList14displayReverseEv
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L20
	call	__stack_chk_fail@PLT
.L20:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1540:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2026:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L23
	cmpl	$65535, -8(%rbp)
	jne	.L23
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L23:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2026:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2027:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2027:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
