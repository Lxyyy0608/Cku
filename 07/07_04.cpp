#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// 全局变量
Mat originalImage, adjustedImage;// 用于存储原始图像和调整后的图像
int brightnessValue = 50;  // 初始亮度值，设置为50表示初始状态没有改变
int contrastValue = 50;    // 初始对比度值，设置为50表示初始状态没有改变

// 更新图像函数
void updateImage() 
{
    // 计算 alpha 和 beta 参数
    double alpha = contrastValue / 50.0;// 对比度因子，1表示原始状态
    int beta = brightnessValue - 50;// 亮度增量，0表示原始状态

    // 调整图像亮度和对比度
    originalImage.convertTo(adjustedImage, -1, alpha, beta);
    
    // 在窗口中显示调整后的图像
    imshow("Image", adjustedImage);
}

// 亮度滑动条回调函数
void onBrightnessTrackbar(int value, void*) 
{
    // 更新亮度值并重新调整图像
    brightnessValue = value;
    updateImage();
}

// 对比度滑动条回调函数
void onContrastTrackbar(int value, void*) 
{
    // 更新对比度值并重新调整图像
    contrastValue = value;
    updateImage();
}

int main() 
{
    // 加载图像
    originalImage = imread("/Users/xyl/Desktop/test/resourse/1.jpg"); // 替换为您的图像路径

    if (originalImage.empty()) 
    {
        cout << "Could not open or find the image" << endl;
        return -1;
    }
    
    // 克隆原始图像用于显示调整后的图像
    adjustedImage = originalImage.clone();

    // 创建窗口并显示原始图像
    namedWindow("Image");
    imshow("Image", adjustedImage);

    // 创建亮度和对比度滑动条并绑定回调函数
    createTrackbar("亮度", "Image", &brightnessValue, 100, onBrightnessTrackbar);
    createTrackbar("对比度", "Image", &contrastValue, 100, onContrastTrackbar);

    // 初始图像处理
    updateImage();

    // 等待按键事件
    waitKey(0);
    return 0;
}
