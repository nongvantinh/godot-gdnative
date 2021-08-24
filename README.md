# Clone Project

This project use godot-cpp project as submodule.
So to clone it you must pass ***--recursive*** into git command:

`git clone --recursive https://github.com/nongvantinh/godot-gdnative.git`

if you forgot to add ***--recursive*** when you clone project then you must run command:

`git submodule update --init --recursive`


# Build project

First navigate to godot-cpp folder, and build cpp binding from there, **you only needs to do this once**.

```
cd godot-cpp
scons generate_bindings=yes -j16 platform=windows 
scons generate_bindings=yes -j16 platform=linux 
scons generate_bindings=yes -j16 platform=freebsd 
scons generate_bindings=yes -j16 platform=osx
scons generate_bindings=yes -j16 platform=ios
scons generate_bindings=yes -j16 platform=javascript

scons generate_bindings=yes -j16 platform=android android_arch=armv7
scons generate_bindings=yes -j16 platform=android android_arch=arm64v8
scons generate_bindings=yes -j16 platform=android android_arch=x86
scons generate_bindings=yes -j16 platform=android android_arch=x86_64

cd ..

scons -j16 platform=windows 
scons -j16 platform=linux 
scons -j16 platform=freebsd 
scons -j16 platform=osx
scons -j16 platform=ios
scons -j16 platform=javascript

scons -j16 platform=android android_arch=armv7
scons -j16 platform=android android_arch=arm64v8
scons -j16 platform=android android_arch=x86
scons -j16 platform=android android_arch=x86_64


```

- the command above is for copy and paste purpose, you can only compile for host platform. ***Cross-comppile is not support***.
- You can compile for android if you are using host: **windows**, **linux**, **osx** and android ndk must installed and add it to path variable with name ***ANDROID_NDK_ROOT***
or pass it when you calling scons:
`scons generate_bindings=yes -j16 platform=android android_arch=**armv7** ANDROID_NDK_ROOT="/PATH-TO-ANDROID-NDK/" `

run **scons -h** or look at SConstruct file for more information.
# Development advice
- One thing to remember: Never use Godot class outside your GDClass, because editor haven't loaded until it initialize.
- Example Enet created in [GDNative Godot 3.3.2](https://github.com/nongvantinh/godot-gdnative/files/7036955/gopet-cpp.zip)

