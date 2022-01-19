install_headers:
	$(info ************  INSTALLING HEADRS  ************)
	cp -R Headers/* /usr/include/kcryptov

delete_headers:
	$(info ************  DELETING HEADRS  ************)
	rm -rf /usr/include/kcryptov/kcv*

cp_to_git:
	$(info ************  Copying To GIT  ************)
	cp -r Headers Src Makefile /home/keagle/mygit/kcryptov/

