
#ifndef CONFIG_H
#define CONFIG_H

#define MODEL_WIDTH 96
#define MODEL_HEIGHT 96
#define NUM_CHANNELS 3
#define NUM_CLASSES 4

// Class names
const char* class_names[] = {
    "Teeth",
    "Caries",
    "Cavity",
    "Tooth"
};

// Detection thresholds
#define CONFIDENCE_THRESHOLD 0.6
#define MAX_DETECTIONS 10

#endif // CONFIG_H
