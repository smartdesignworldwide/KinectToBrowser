# Kinect to Browser

The code in this repo helps sending distance range captured from a kinect device to a browser session to be manipulated in the front end. It uses [OpenFrameworks](https://www.openframeworks.cc) to capture kinect data and [Spacebrew](https://docs.spacebrew.cc) to bridge the connection.

##Built for...
This code is known to work in Openframeworks 0.9.0 on Mac  OS. Kinect V1 only.

##Setup

1. [Download OpenFrameworks](http://openframeworks.cc/download/) and place it in your preferred location.

2. Clone this repository inside the apps folder inside the Openframeworks structure.

	```
	git clone https://github.com/smartdesignworldwide/KinectToBrowser
	```

3. Move the ofxSpacebrew and ofxLibwebsockets addons from the OF_addons folder in the repo to the addons folder in the OpenFrameworks structure. Updated / Released versions of these addons may be found in the original repos [here](https://github.com/Spacebrew/ofxSpacebrew) and [here](https://github.com/labatrockwell/ofxLibwebsockets), but the included versions are known to work.

4. If you don't have Node JS installed in your machine, download the installer [from here](https://nodejs.org) and follow install instructions.

5. Navigate your terminal to the *spacebrew_server* folder in the repo. 

6. Install dependencies:

	```
	npm install
	```

7. Setup is done!

##Running
####Set up the spacebrew server locally

1. Navigate your terminal to the *spacebrew_server* folder in the repo.
2. Run Spacebrew locally, listening to port 9000 by default. 
	
	```
	node node_server_forever.js
	```

####Run the OF sender
If you went through the setup steps correctly – the repo is placed in the *apps* folder and all addons are in the *addons* folder – you can open the *OF_kinect_sender.xcodeproj* file inside the *OF_kinect_sender* folder.

Make sure your kinect device is connected and press play on XCode.

####Run the JS receiver
Open the *index.html* inside the *JS_receiver* folder in a modern browser such as Chrome. 

**All front end code is contained within this file. This is the file you want to edit to use  Kinect Distance Data in the browser**

####Connect it all together!
Visit the Spacebrew admin page at [http://spacebrew.github.io/spacebrew/admin/admin.html?server=localhost](http://spacebrew.github.io/spacebrew/admin/admin.html?server=localhost) and connect your sender to your receiver. Voilá, Kinect to Browser, done.



