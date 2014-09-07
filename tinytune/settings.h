// CPU clock rate
#define F_CPU 16000000
// Number of bytes to pre-calculate. Not conclusively shown that this helps much.
#define SAMPLE_BUFFER 24
// Sample clock updates at this rate in Hz
#define SAMPLE_RATE 24000UL
// Max number of voices
#define N_VOICES 5
// Right shift divide for output waveform. Use for course global volume setting
#define OUTPUT_SCALE_SHIFT 3