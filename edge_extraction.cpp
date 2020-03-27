#include <iostream>
#include <opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	VideoCapture cap;

	cap.open(0);

	while (1)
	{
		cv::Mat src;
		cv::Mat dstX;
		cv::Mat dstY;

		cap >> src;
		cv::Sobel(src, dstX, CV_16SC1, 1, 0, 3); //x方向边缘
		cv::Sobel(src, dstY, CV_16SC1, 0, 1, 3); //y方向边缘

		cv::imshow("原图", src);
		cv::imshow("x方向边缘", dstX);
		cv::imshow("y方向边缘", dstY);

		waitKey(30);
	}
}
