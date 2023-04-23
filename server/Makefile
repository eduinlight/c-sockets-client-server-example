build:
	cd out/build ; \
	make
configure:
	export CC=/usr/bin/clang ; \
	export CXX=/usr/bin/clang++ ; \
	cmake \
		-D_CMAKE_TOOLCHAIN_PREFIX=llvm- \
		-DCMAKE_USER_MAKE_RULES_OVERRIDE=./ClangOverrides.txt \
		-S . \
		-B out/build
run:
	./out/build/acm
