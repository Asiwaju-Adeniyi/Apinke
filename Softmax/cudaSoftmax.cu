#include <cuda_runtime.h> 
#include <cstdlib> 
#include <cstdio> 

__global__ void softmax (int h, int w, float* input, float* output) {
    int col = threadIdx.x + blockDim.x * blockIdx.x;
    int row = threadIdx.y + blockDim.y * blockIdx.y;

    if (row < h && col < w) {
        float maxVal = input[row * w];

        for (int i = 0; i < w; i++) {
            maxVal = max(maxVal, input[row * w + i]);
        }

        float div = 0.0f;
        for (int i = 0; i < w; i++) {
            div += exp(input[row * w + i] - maxVal);
        }

        output[row * width + col] = exp(input[row * width + col] - maxVal) / (div);
    }
}
