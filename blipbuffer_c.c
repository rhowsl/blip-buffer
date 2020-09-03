#include "Blip_Buffer.h"

// class typedefs or something
typedef const char* blargg_err_t;

void blipbuffer_crate(Blip_Buffer* buffer) 
{
	buffer = &Blip_Buffer();
}

void blipbuffer_destroy(Blip_Buffer* buffer)
{
	delete buffer;
}

blargg_err_t blipbuffer_set_sample_rate(Blip_Buffer* buffer, long samples_per_sec, int msec_length = 1000 / 4)
{
	return buffer->set_sample_rate(samples_per_sec, msec_length);
}

void blipbuffer_set_clock_rate(Blip_Buffer* buffer, long clock_rate)
{
	buffer->clock_rate(clock_rate);
}

long blipbuffer_get_sample_rate(Blip_Buffer* buffer)
{
	return buffer->sample_rate();
}

int blipbuffer_get_length(Blip_Buffer* buffer)
{
	return buffer->length();
}

long blipbuffer_get_clock_rate(Blip_Buffer* buffer)
{
	return buffer->clock_rate();
}

void blipbuffer_set_bass_freq(Blip_Buffer* buffer, int frequency)
{
	buffer->bass_freq(frequency);
}

int blipbuffer_get_output_latency(Blip_Buffer* buffer)
{
	return buffer->output_latency();
}

void blipbuffer_clear(Blip_Buffer* buffer, int entire_buffer = 1)
{
	buffer->clear(entire_buffer);
}

long blipbuffer_samples_avail(Blip_Buffer* buffer)
{
	return buffer->samples_avail();
}

void blipbuffer_remove_samples(Blip_Buffer* buffer, long count)
{
	return buffer->remove_samples(count);
}

long blipbuffer_count_samples(Blip_Buffer* buffer, long duration)
{
	return buffer->count_samples((blip_time_t)duration);
}

void blipbuffer_mix_samples(Blip_Buffer* buffer, blip_sample_t* samples, long count)
{
	buffer->mix_samples(samples, count);
}

blip_time_t blipbuffer_count_clocks(Blip_Buffer* buffer, long count)
{
	return buffer->count_samples(count);
}

// TODO: Implement undocumented

