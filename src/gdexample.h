#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot
{

	class GDExample : public Sprite
	{
		GODOT_CLASS(GDExample, Sprite)

	private:
		float time_passed;
		float time_emit;
		float amplitude;
		float speed;

	public:
		// Godot will call to find out which methods can be called on our NativeScript and which properties it exposes.
		static void _register_methods();
		// Called after Godot has properly set up our object. It has to exist even if you don't place any code in it.
		void _init();

		GDExample();
		~GDExample();

		void _process(float delta);
		void set_speed(float p_speed);
		float get_speed();
	};
}

#endif