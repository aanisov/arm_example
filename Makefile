clean:
	rm *.o *.axf -rf

initial:
	armclang --target=arm-arm-none-eabi -mcpu=cortex-a9 -c linker_symbols.S -o linker_symbols.o
	armlink --cpu=Cortex-A9 --scatter=scatter.sct linker_symbols.o -o image.axf --edit steering_file.txt
	fromelf -cdvs image.axf -o image.txt
