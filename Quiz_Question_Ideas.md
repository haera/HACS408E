What does the following assembly code do?

```NASM
; dst <- src
func:
        add     rdx, rdi
        je      end
        mov     eax, 0
loop:
        movzx   ecx, BYTE PTR [rdi+rax]
        mov     BYTE PTR [rsi+rax], cl
        add     rax, 1
        cmp     rdx, rax
        jne     loop
end:
        ret
```

Answer: Copies bytes from `rsi` into `rdi`. Aka memcpy.

---

32-bit version

```NASM
; dst <- src
func:
        push    ebx
        mov     ebx, ecx
        add     ebx, DWORD PTR [esp+8]
        je      .END
        add     ebx, ecx
.LOOP:
        movzx   eax, BYTE PTR [ecx]
        add     ecx, 1
        add     edx, 1
        mov     BYTE PTR [edx-1], al
        cmp     ecx, ebx
        jne     .LOOP
.END:
        pop     ebx
        ret     4
```

Answer: memcpy
