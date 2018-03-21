#ifndef SWAY_OIS_INPUTEVENTS_H
#define SWAY_OIS_INPUTEVENTS_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

#include <boost/function.hpp> // boost::function

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(ois)

struct EventArgs {
	// Empty
};

struct KeyboardEventArgs : public EventArgs {
	u32_t keycode;
};

struct MouseEventArgs : public EventArgs {
	s32_t x, y;
	s32_t button;
};

typedef boost::function<void (const KeyboardEventArgs &)> KeyboardEventCallbackFunc_t;
typedef boost::function<void (const MouseEventArgs &)> MouseEventCallbackFunc_t;

NAMESPACE_END(ois)
NAMESPACE_END(sway)

#endif // SWAY_OIS_INPUTEVENTS_H