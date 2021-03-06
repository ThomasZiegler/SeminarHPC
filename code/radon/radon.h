/*
 * radon.h -- perform the radon transform of an image
 *
 * (c) 2013 Prof Dr Andreas Mueller, Hochschule Rapperswil
 */
#ifndef _radon_h
#define _radon_h

#include <opencv.hpp>

extern double	margin;

extern cv::Mat	radon(const char *filename, int width, int height,
			double scale = 1.0, bool mask = false);

#endif /* _radon_h */
