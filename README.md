erm I just made it for myself n later decided to dump it here. Feel free to ask for help if it's not working for you

Discord: asgrk

## what is this
turns some input from your VR controllers into midi output, sent to the midi device of your choice.

to run it: download vrlin.exe and openvr_api.dll, place them wherever as long as they're both in the same folder, start steamvr, and launch vrlin.exe. It should give you a numbered list of midi devices to send output to.

to use it as midi input you could install [loopMIDI](https://www.tobias-erichsen.de/software/loopmidi.html), which just takes whatever midi output it's given and sends it as input, choose to send the vr midi output to this loopback midi, and in a program like fl studio, enable the loopback midi device's input ONLY (not output. That'll cause feedback).

Pressing anything on your right controller plays middle C.<br>
Releasing what you pressed releases the note

And then there's two motion controls: the "bow", and the "finger placement"

The "bow" is just the velocity on the x axis (I think lol. One of the axises) of the right controller while a button on the right controller is pressed. It controls midi controller #16. You could map it to control a level knob of something. You press a button on the right controller and wave it around and it'll change that controller based on the speed in um a direction. Idk I just try to find whatever direction affects the midi output the most, or find the direction that doesn't affect it and go perpendicular to that

The  "finger placement" is the height of the left controller while a button on the left controller is pressed. It controlls midi controller #17. You could map it to the pitch bend of something.

So if I wanted to link the speed of the right controller to maybe a level knob in the Serum plugin in fl studio: 

![Linking "bow" to level knob in fl studio](gifs/how%20to%20link%20vr%20midi.gif)

This is assuming you have the loopMIDI setup mentioned earlier
