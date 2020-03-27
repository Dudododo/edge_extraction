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

		cv::Sobel(src, dstX, CV_8U, 1, 0, 3, 1, 0, BORDER_DEFAULT); //x方向边缘
		cv::Sobel(src, dstY, CV_8U, 0, 1, 3, 1, 0, BORDER_DEFAULT); //y方向边缘

		cv::imshow("原图", src);
		cv::imshow("x方向边缘", dstX);
		cv::imshow("y方向边缘", dstY);

		waitKey(30);
	}
}
