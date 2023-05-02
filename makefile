.PHONY: clean
%.s : %.c
	$(CC) -S $< -o $@

clean:
	rm -f *.o *.s *.dSYM \
        hello-world neon neon2
