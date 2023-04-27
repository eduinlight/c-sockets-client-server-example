build:
	cd out/build ; \
	make
configure:
	export CC=/usr/bin/clang ; \
	export CXX=/usr/bin/clang++ ; \
	cmake \
		-D_CMAKE_TOOLCHAIN_PREFIX=llvm- \
		-DCMAKE_USER_MAKE_RULES_OVERRIDE=./ClandOverrides.txt \
		-S . \
		-B out/build
run:
	./out/build/acm
docker:
	docker exec -it c-socket-server bash
clean:
	rm -rf ./out
