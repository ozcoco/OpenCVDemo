//
// Created by ozcomcn on 11/23/19.
//

#include "Demo.h"
#include <opencv2/opencv.hpp>


void Demo::sample() noexcept
{
    const cv::Mat &mat = cv::imread("/home/ozcomcn/Pictures/f8851d11b2e6d582c818f97df0832e27.jpg", cv::ImreadModes::IMREAD_GRAYSCALE);

    cv::namedWindow("sample", cv::WINDOW_KEEPRATIO);

    cv::imshow("sample", mat);

    cv::imwrite("/home/ozcomcn/Pictures/f8851d11b2e6d582c818f97df0832e27-gray.png", mat);

    cv::waitKey(0);

}