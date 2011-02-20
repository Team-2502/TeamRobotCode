#ifndef ENCODER_LISTENER_H
#define ENCODER_LISTENER_H

#include "EventListener.h"
#include "EventDispatcher.h"

class Encoder;

class EncoderListener : public EventListener
{
	public:
		EncoderListener(EventDispatcher* e);
		~EncoderListener();
		void setParent(EventDispatcher *par) { parent = par; }
		bool update();
		
	private:
		Encoder* lift;
		int lastCount;
		EventDispatcher *parent;
};

#endif