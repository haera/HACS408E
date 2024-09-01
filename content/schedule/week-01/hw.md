---
title: "HW: Assembly Language"
type: docs
weight: 4
---

## Description

Analyze the assembly code in
[this Godbolt example](https://godbolt.org/z/YhxW1MEon).

{{% details title="Details" closed="true" %}}

If the above link does not work, paste this into your browser:

```txt
https://godbolt.org/#g:!((g:!((g:!((h:codeEditor,i:(filename:'1',fontScale:14,fontUsePx:'0',j:1,lang:___c,selection:(endColumn:2,endLineNumber:22,positionColumn:2,positionLineNumber:22,selectionStartColumn:2,selectionStartLineNumber:22,startColumn:2,startLineNumber:22),source:'__attribute__((stdcall))%0Aint+sum_stdcall(int+a,+int+b,+int+c,+int+d)+%7B%0A++++return+a+%2B+b+%2B+c+%2B+d%3B%0A%7D%0A%0A__attribute__((cdecl))%0Aint+sum_cdecl(int+a,+int+b,+int+c,+int+d)+%7B%0A++++return+a+%2B+b+%2B+c+%2B+d%3B%0A%7D%0A%0A__attribute__((fastcall))%0Aint+sum_fastcall(int+a,+int+b,+int+c,+int+d)+%7B%0A++++return+a+%2B+b+%2B+c+%2B+d%3B%0A%7D%0A%0Aint+line()+%7B%0A++++int+x+%3D+sum_stdcall(1,+2,+3,+4)%3B%0A++++int+y+%3D+sum_cdecl(5,+6,+7,+8)%3B%0A++++int+z+%3D+sum_fastcall(1,+3,+5,+7)%3B%0A%0A++++return+x+*+y+*+z%3B%0A%7D'),l:'5',n:'1',o:'C+source+%231',t:'0')),k:50,l:'4',n:'0',o:'',s:0,t:'0'),(g:!((h:compiler,i:(compiler:cg142,filters:(b:'0',binary:'1',binaryObject:'1',commentOnly:'0',debugCalls:'1',demangle:'0',directives:'0',execute:'1',intel:'1',libraryCode:'0',trim:'1',verboseDemangling:'0'),flagsViewOpen:'1',fontScale:14,fontUsePx:'0',j:1,lang:___c,libs:!(),options:'-m32+-O0',overrides:!(),selection:(endColumn:31,endLineNumber:36,positionColumn:31,positionLineNumber:36,selectionStartColumn:31,selectionStartLineNumber:36,startColumn:31,startLineNumber:36),source:1),l:'5',n:'0',o:'+x86-64+gcc+14.2+(Editor+%231)',t:'0')),k:50,l:'4',n:'0',o:'',s:0,t:'0')),l:'2',n:'0',o:'',t:'0')),version:4
```

{{% /details %}}

### Submission

{{< callout type="info" >}}

Submit a markdown file with any code you wrote and the answers to the following
questions to [ELMS](https://umd.instructure.com/courses/1374508/assignments).

{{< /callout >}}

### Part 1

1. Explain what a function `prologue` and `epilogue` are used for in assembly
   language.

1. Explain in full sentences what is different between each of the functions.

1. For each function, which line of the output corresponds to reading the
   arguments `a`, `b`, `c`, `d`.

1. What happens when you change the `-O0` option to `-O2`? What does the `-O`
   argument to `gcc` (or `clang`) mean?

### Part 2

1. Paste the
   [solution code](https://umd.instructure.com/files/79647538/download?download_frd=1)
   from lab 1 in to [godbolt.org](https://www.godbolt.org).
   - What is the size of the stack in each function? How did you come up with
     this number? (It is fine to google things.)
   - What line of assembly references the `"USAGE: ..."` string get used?
   - Which lines correspond to the loop where data is `xor`-ed with the key?
