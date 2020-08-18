This openFrameworks application allows to send images from 2 Aravis cameras (tested with FLIR gigE cameras).
There is also a simple BRCOSA shader for basic image correction, and display parameters are accessible via OSC (i.e. with the attached Max patcher).

# Installation:
Some externals ofAddons are necessary:
- https://github.com/bltzr/ofxAravis.git
- https://github.com/astellato/ofxSyphon.git 

You might need to add a Code Signing Identity in the XCode project’s Build Settings, and add a `--deep` flag in Other Code Signing Flags

And… it should be OK. Please let me know in the issues if it doesn’t, after looking at the notes below.

This runs on Mac so far. Might work on Linux, too, with some tweaking here and there.. 

# Notes for self (and others) on the dependency management process:
- I first did the whole [Aravis](https://github.com/AravisProject/aravis) installation, with all dependencies, and with the original [ofxAravis](https://github.com/underdoeg/ofxAravis) addon, but then added the compiled lib to my (slightly tweaked) [fork of it](https://github.com/bltzr/ofxAravis), which only required to install glib and libusb (with brew) on a new machine.

- I then tried just by installing glib and libusb with [homebrew](https://brew.sh/)
```
brew install glib libusb
```

- Then copied all libs and includes into the libs folder, of-style. Haven’t tested this on a clean machine, though. Please report if that fails.
