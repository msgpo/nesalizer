#include <SDL.h>

// Video

void put_pixel(unsigned x, unsigned y, uint32_t color);

// Audio

int    const sample_rate = 44100;

double audio_buf_fill_level();
void   add_audio_samples(int16_t *samples, size_t len);
void   start_audio_playback();

// Input and events

extern Uint8 const*keys;

extern SDL_mutex *event_lock;

// Initialization and de-initialization

void init_sdl();
void deinit_sdl();

// Main loop and signalling of SDL thread

void frame_done();
void sdl_thread_loop();
// Used only when running test ROMs
void exit_sdl_thread();
