import cv2
path = 'C:\\Users\\MSI-NB\\Desktop\\catphoto.jpg'

img = cv2.imread('C:\\Users\\MSI-NB\\Desktop\\catphoto.jpg')
#cv2.imshow("Color", img)
#gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
#cv2.imshow("Gray", gray)
#cv2.waitKey(0)

blue, green, red = cv2.split(img)

cv2.imshow('blue', blue)
cv2.imshow('green', green)
cv2.imshow('red', red)
blue = blue-100

newRGB = cv2.merge((blue, green, red))
cv2.imshow("the new one", newRGB)

cv2.waitKey(0)
cv2.destroyAllWindows()


