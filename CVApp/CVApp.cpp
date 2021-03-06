// CVApp.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <opencv2/opencv.hpp>

int main()
{
	const char* imagename = "../files/icefire.jpg";

	cv::Mat img = cv::imread(imagename);

	if (img.empty())
	{
		fprintf(stderr, "Can not load image %s\n", imagename);
		return -1;
	}

	cv::imshow("image", img);

	//此函数等待按键，按键盘任意键就返回
	cv::waitKey(0);

    return 0;
}

