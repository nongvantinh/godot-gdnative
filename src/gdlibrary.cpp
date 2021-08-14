// Three functions implemented here need to be defined without a namespace.
#include "gdexample.h"

// Called when Godot loads our plugin.
extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o)
{
	godot::Godot::gdnative_init(o);
}

// Called when Godot unloads our plugin.
extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o)
{
	godot::Godot::gdnative_terminate(o);
}

// Tells Godot about all the NativeScripts in our GDNative plugin here.
extern "C" void GDN_EXPORT godot_nativescript_init(void *handle)
{
	godot::Godot::nativescript_init(handle);

	godot::register_class<godot::GDExample>();
}