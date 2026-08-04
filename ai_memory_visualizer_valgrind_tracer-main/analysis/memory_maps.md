### Analysis of the files aliasing_example.c and stack_example.c

## Stack and heap memory:

Within the file aliasing_example, the variables 'a' and 'b' both are initialised and placed within the stack during the execution of the file. During the program's execution, the function make_numbers is executed on 'a' with the value of 'n', and proceeds to be mallocd, so this leads to the 22 byte long result being placed into the head. Afterwards 'a' is given the alias of 'b', leading to 'a' still having ownership of the malloc and being responsible to free it once resolved. otherwise this would lead to a memory leak.

Before being freed, both 'a' and 'b' share the same value, '0x5aa8d06e16b0', and afterwards, 'a' is then freed which leaves 'b' with the same value and now is a dangling pointer, as now the mallocd value has been destroyed, this now points to nothing, going from 'b[2] = 22' to 'b[2] = 817732660'. this leaving both a and b in the stack and the original 22 byte string in the heap until explicitly freed by `free`.

within the stack_example.c,	the program executes and goes through depths 0 to 3, each one being a recursive call being ran twice and both containing the same results, This is due to how the function allocated the memory per execution of the walk_stack function uses a dedicated size of the stack and then once returned, deletes the data and then moved onto the next value, however, on the next call, the second use of for example local_int=100, the address stays the same as first execution.

## AI usage and it's inaccurate results

using both LLM models ChatGPT and Claude to explain the concepts, both had the same inaccuracies, both stating that stack memory is stacked on top of each other, however, with the stack_example program, this proves otherwise. with each frame increasing in depth, the address decreaces opposing to the claim that ChatGPT provided for it's explination.

Evidence: 0x7ffdf1f939c4 at buf A, 0x7ffdf1f93994at buf B, 0x7ffdf1f93964 at buf C ,0x7ffdf1f93934 at buf D
