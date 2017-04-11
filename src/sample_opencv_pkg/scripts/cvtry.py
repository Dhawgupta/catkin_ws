import rospy
import sys
import cv2
#import cv2.cv as cv
from sensor_msg.msg import Image, CameraInfo
from cv_bridge import CvBridge, CvBridgeError
import numpy as np

class cvBridgeDemo():
	def __init__(self):
		self.node_name = "cv_bridge_demo"
		#initialize the node
		rospy.init_node(self.node_name)
		
		# what we do to shutdown
		rospy.on_shutdown(self.cleanup)
		
		#creat opencv dipaly window
		cv2.namedWindow(self.cv_window_name)
		cv2.moveWindow(self.cv_window_name, 25, 75)
		
		cv2.namedWindow("Depth Image")
		cv2.moveWindow("Depth Image", 25, 350)

		self.bridge = CvBridge()
		
		self.image_sub = rospy.Subscriber("/camera/rgb/image_color", Image,self.image_callback)
		self.depth_sub = rospy.Subscriber("/camera/depth/image_raw", Image,self.depth_callback)
		rospy.loginfo("Waiting for image topics ....")

	def image_callback(self , ros_image):
		# use the cv brifgt to vonert the ros to oepncv
		try:
			frame = self.bridge.imgmsg_to_cv(ros_image,"bgr8")
		except CvBridgeError, e:
			print e


		# onvert the image to numpy for python

		frame = np.array(frame, dtype = np.uint8)

		display_image = self.process_image(frame)
		cv2.imshow
