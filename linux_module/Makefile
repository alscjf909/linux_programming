#/*** Makefile for mod.ko ***/

obj-m = mod.o
KDIR := /lib/modules/$(shell uname -r)/build

default:
	$(MAKE) -C $(KDIR) M=$(shell pwd) modules
clean:
	rm -rf *.ko *.mod.* .*.cmd *.o *.order *.symvers .tmp_versions