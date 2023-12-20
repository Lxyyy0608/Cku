#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() 
{
    // 加载图像
    Mat image = imread("/Users/xyl/Desktop/test/resourse/1.jpg"); // 替换图像路径
    if (image.empty()) 
    {
        // 检查图像是否成功加载
        cout << "无法加载图像" << endl;
        return -1;
    }

    // 显示原始图像 // imshow 用于在窗口中显示图像
    imshow("原始图像", image);
    if (waitKey(0) == 27) 
    { // waitKey 等待用户按键，按ESC键退出
        destroyWindow("原始图像");
    } 
    else 
    {
        return 0; // 如果按的不是ESC键，则退出程序
    }

    // 将图像转换为灰度图
    // cvtColor 将图像从一个颜色空间转换到另一个，这里是从 BGR 到灰度
    Mat grayImage;
    cvtColor(image, grayImage, COLOR_BGR2GRAY);
    imshow("灰度图像", grayImage);
    if (waitKey(0) == 27) 
    {
        destroyWindow("灰度图像");
    } 
    else 
    {
        return 0;
    }

    // 将灰度图像二值化
    // threshold 用于将图像二值化，这里设置阈值为 128
    Mat binaryImage;
    threshold(grayImage, binaryImage, 128, 255, THRESH_BINARY);
    imshow("二值化图像", binaryImage);
    if (waitKey(0) == 27) 
    {
        destroyWindow("二值化图像");
    } 
    else 
    {
        return 0;
    }

    // 对灰度图像进行高斯模糊处理
    // GaussianBlur 对图像应用高斯模糊，这里核的大小为 5x5
    Mat blurredImage;
    GaussianBlur(grayImage, blurredImage, Size(5, 5), 0);
    imshow("高斯模糊图像", blurredImage);
    if (waitKey(0) == 27) 
    {
        destroyWindow("高斯模糊图像");
    } 
    else 
    {
        return 0;
    }

    return 0;
}
