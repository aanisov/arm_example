extern void *_start_exec, *_end_exec;

int main(void)
{
    return _end_exec - _start_exec;
}

