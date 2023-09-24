# vrlin
um I guess more like a theremin but idk the right hand feels more like using a bow, and VRLin sounds better than VReremin.

## [how to set it up](setup.md)

## stuff about it:
This turns some input from your VR controllers into midi output, sent to the midi device of your choice.

So what I did was I installed [loopMIDI](https://www.tobias-erichsen.de/software/loopmidi.html), which just takes whatever midi output it's given, and sends it as input, I choose to send the midi output from the VRLin to this loopback midi, and in a program like fl studio, I enable the loopback midi device's input ONLY (not output. That'll cause feedback).

Pressing anything on your right controller playes a note.<br>
Releasing what you pressed releases the note 🤯

And then there's 
