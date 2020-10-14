/*����2�ֶ�ֵ���ĺ�����ʵ�ֶ�ֵ��������ϰ���ṩ����ʾ����
��ʾ��opencv�Ķ�ֵ�������ǿ��ԶԲ�ɫͼ����д���ģ���
������һ�㲻��Բ�ɫͼ����ж�ֵ���������ڵ��ö�ֵ����
��֮ǰ���Ƚ�ԭͼתΪ�Ҷ�ͼ��*/#include <iostream>
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