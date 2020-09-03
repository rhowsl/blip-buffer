#include "Blip_Buffer.h"

// class typedefs or something
typedef const char* blargg_err_t;

Blip_Buffer* blip_buffer_create() 
{
	return &Blip_Buffer();
}

void blip_buffer_destroy(Blip_Buffer* buffer)
{
	delete buffer;
}

blargg_err_t blip_buffer_set_sample_rate(Blip_Buffer* buffer, long samples_per_sec, int msec_length = 1000 / 4)
{
	return buffer->set_sample_rate(samples_per_sec, msec_length);
}

void blip_buffer_set_clock_rate(Blip_Buffer* buffer, long clock_rate)
{
	buffer->clock_rate(clock_rate);
}

long blip_buffer_get_sample_rate(Blip_Buffer* buffer)
{
	return buffer->sample_rate();
}

int blip_buffer_get_length(Blip_Buffer* buffer)
{
	return buffer->length();
}

long blip_buffer_get_clock_rate(Blip_Buffer* buffer)
{
	return buffer->clock_rate();
}

void blip_buffer_set_bass_freq(Blip_Buffer* buffer, int frequency)
{
	buffer->bass_freq(frequency);
}

int blip_buffer_get_output_latency(Blip_Buffer* buffer)
{
	return buffer->output_latency();
}

void blip_buffer_clear(Blip_Buffer* buffer, int entire_buffer = 1)
{
	buffer->clear(entire_buffer);
}

long blip_buffer_samples_avail(Blip_Buffer* buffer)
{
	return buffer->samples_avail();
}

void blip_buffer_remove_samples(Blip_Buffer* buffer, long count)
{
	return buffer->remove_samples(count);
}

long blip_buffer_count_samples(Blip_Buffer* buffer, long duration)
{
	return buffer->count_samples((blip_time_t)duration);
}

void blip_buffer_mix_samples(Blip_Buffer* buffer, blip_sample_t* samples, long count)
{
	buffer->mix_samples(samples, count);
}

blip_time_t blip_buffer_count_clocks(Blip_Buffer* buffer, long count)
{
	return buffer->count_samples(count);
}

// TODO: Implement undocumented

