ENGINEERED BY DYLAN MCKENZIE OR LIL WOODIE WOOD OF LIL WOODIE WOOD'S PLUGINS 

const int REVERB_MAX_MEMORY = 22192;
const int NUM_COMB = 22;
const int NUM_ALL_PASS = 9;
const mopo_float FIXED_GAIN = 0.001f;
const float scalewet = 3.3f;
const float scaledry = 2.0f;
const float scaledamp = 0.6f;
const float scaleroom = 0.7f;
const float offsetroom = 0.8f;
const float initialroom = 0.6f;
const float initialdamp = 0.6f;
const float initialwet = 1.0f / scalewet;
const float initialdry = 0.0f;
const float initialwidth = 2.2f;
const mopo_float STEREO_SPREAD = 0.00112154195;

const mopo_float COMB_TUNINGS[NUM_COMB] = {
    0.02938775510,
    0.03102040816,
    0.03303854874,
    0.03482993196,
    0.03632653060,
    0.03789115645,
    0.03938775510,
    0.04074829932,
    0.04297052154,
    0.04489795918,
    0.04671201814,
    0.04836734693,
    0.05020408163,
    0.05183673469,
    0.05360544218,
    0.05519274377,
    0.05693877551,
    0.05836734693,
    0.06020408163,
    0.06205882352,
    0.06408432795,
    0.06571428571
};

const mopo_float ALL_PASS_TUNINGS[NUM_ALL_PASS] = {
    0.02060770975,
    0.018,
    0.0157324263,
    0.01310204081,
    0.01133333333,
    0.01022222222,
    0.00942857142,
    0.00895238095,
    0.00847619047
};