import numpy as np

def func(img):
    img[img>150]=150
    img[img<50] = 50
    return img


if __name__ == '__main__':
    import cv2
    img = cv2.imread("lena.jpg")
    img = func(img)
    cv2.imwrite("resule_ori.jpg",img)