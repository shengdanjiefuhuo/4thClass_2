/*调用2种二值化的函数，实现二值化，本练习不提供完整示例。
提示：opencv的二值化函数是可以对彩色图像进行处理的，但
是我们一般不会对彩色图像进行二值化，所以在调用二值化函
数之前，先将原图转为灰度图。*/#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	cv::Mat srcMat = imread("C:/Users/hp/Desktop/2.jpg",0);
	cv::Mat result1;
	cv::Mat result2;
	

	threshold(srcMat, result1, 100, 255, THRESH_BINARY);
	adaptiveThreshold(srcMat, result2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);

	imshow("src1", result1);
	imshow("src2", result2);
	
	waitKey(0);
	return 0;

}