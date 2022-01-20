install_headers:
	$(info ************  INSTALLING HEADRS  ************)
	cp -R headers/* /usr/include/kcryptov

delete_headers:
	$(info ************  DELETING HEADRS  ************)
	rm -rf /usr/include/kcryptov/kcv*

cp_to_git:
	$(info ************  Copying To GIT  ************)
	cp -r lib headers src Makefile /home/keagle/mygit/kcryptov/

build_logger:
	$(info ************  Building Logger ************)
	gcc -w -c src/kcv_logger.c -o lib/kcv_logger.o

build_kshellv:
	$(info ************  Building KSHELLV ************)
	gcc -w -c src/kcv_kshellv.c -o lib/kcv_kshellv.o -L lib -lcli

install_libraries:
	$(info ************  Installing Library Files  ************)
	cp lib/* /usr/lib/kcryptov/

delete_libraries:
	$(info ************  Deleting Library Files  ************)
	rm -rf  /usr/lib/kcryptov/kcv*


build:
	$(info ************  Building KCV ************)
	make build_logger
	make build_kshellv
	make install_libraries
	gcc -w src/kcv_init.c -o kcv /usr/lib/kcryptov/kcv_logger.o /usr/lib/kcryptov/kcv_kshellv.o -L./lib -lcli