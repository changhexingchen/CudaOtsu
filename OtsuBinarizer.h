#include "PngImage.h" 

#pragma once
class OtsuBinarizer
{
public:
	static PngImage* binarizeOnCpu(PngImage* imageToBinarize);
	static PngImage* binarizeOnGpu(PngImage* imageToBinarize);
private:
	OtsuBinarizer();
	static const int PIXEL_VALUE_RANGE = 256;
	static void calculateHistogram(std::vector<unsigned char>& image, std::vector<double>& histogram);
	static int findThreshold(std::vector<double>& histogram, long int totalPixels);
	static PngImage* binarizeImage(PngImage * imageToBinarize, int threshold);
};

