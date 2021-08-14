scons generate_bindings=yes -j16 platform=android android_arch=x86
`build for android: armv7a:`

armv7a-linux-androideabi21-clang++ -fPIC -o src/init.o -c src/init.cpp -g -O3 -std=c++14 -Igodot-cpp/include -Igodot-cpp/include/core -Igodot-cpp/include/gen -Igodot-cpp/godot-headers
armv7a-linux-androideabi21-clang++ -o bin/libgodot-cpp.android.armv7.so -shared src/init.o -Lgodot-cpp/bin -lgodot-cpp.android.debug.armv7

`build for android: arm64v8:`

aarch64-linux-android29-clang++  -fPIC -o src/init.o -c src/init.cpp -g -O3 -std=c++14 -Igodot-cpp/include -Igodot-cpp/include/core -Igodot-cpp/include/gen -Igodot-cpp/godot-headers
aarch64-linux-android29-clang++  -o bin/libgodot-cpp.android.arm64v8.so -shared src/init.o -Lgodot-cpp/bin -lgodot-cpp.android.debug.arm64v8

`windows:`

cl /Fosrc/init.obj /c src/init.cpp /nologo -EHsc -DNDEBUG /MDd /Igodot-cpp\include /Igodot-cpp\include\core /Igodot-cpp\include\gen /Igodot-cpp\godot-headers
link /nologo /dll /out:bin\libgodot-cpp.windows.dll /implib:bin\libgodot-cpp.windows.lib src\init.obj godot-cpp\bin\libgodot-cpp.windows.debug.64.lib