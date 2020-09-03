#include "Blip_Buffer.h"

// class typedefs or something
typedef const char* blargg_err_t;

// Constructor
Blip_Buffer* blip_buffer_crate();
// Public function
void blip_buffer_destroy(Blip_Buffer* buffer);
blargg_err_t blip_buffer_set_sample_rate(Blip_Buffer* buffer, long samples_per_sec, int msec_length = 1000 / 4);
void blip_buffer_set_clock_rate(Blip_Buffer* buffer, long clock_rate);
long blip_buffer_get_sample_rate(Blip_Buffer* buffer);
int blip_buffer_get_length(Blip_Buffer* buffer);
long blip_buffer_get_clock_rate(Blip_Buffer* buffer);
void blip_buffer_set_bass_freq(Blip_Buffer* buffer, int frequency);
int blip_buffer_get_output_latency(Blip_Buffer* buffer);
void blip_buffer_clear(Blip_Buffer* buffer, int entire_buffer = 1);
long blip_buffer_samples_avail(Blip_Buffer* buffer);
void blip_buffer_remove_samples(Blip_Buffer* buffer, long count);
long blip_buffer_count_samples(Blip_Buffer* buffer, long duration);
void blip_buffer_mix_samples(Blip_Buffer* buffer, blip_sample_t* samples, long count);
blip_time_t blip_buffer_count_clocks(Blip_Buffer* buffer, long count);

