CFLAGS=-Wall -Wpedantic

nic: nic.o
	$(CC) $(CFLAGS) -o $@ $<

run: nic
	./nic

clean: 
	rm nic *.o
