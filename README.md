# Sonic Robo Blast 2 NetPlus - Rollback Netcode mod

[Sonic Robo Blast 2](https://srb2.org/) is a 3D Sonic the Hedgehog fangame based on a modified version of [Doom Legacy](http://doomlegacy.sourceforge.net/).

NetPlus mod provides the ability to play network games without control lag using rollback netcode techniques, predicting the future game state before the server tells it.
If you think you have a good connection, or live in an area of the world with robust Internet infrastructure, good netcode is still mandatory. 

If the server isn't being hosted using this mod, then it'd work on top of the existing lockstep netcode. (Deterministic Prediction-Rollback based only on input from the server).

(Not yet implemented) If the server uses this mod, then more features will be available to clients using this mod too, and the network game will be more fluid.

## Dependencies
- NASM (x86 builds only)
- SDL2 (Linux/OS X only)
- SDL2-Mixer (Linux/OS X only)
- libupnp (Linux/OS X only)
- libgme (Linux/OS X only)
- libopenmpt (Linux/OS X only)

## Compiling

See [SRB2 Wiki/Source code compiling](http://wiki.srb2.org/wiki/Source_code_compiling)

## Disclaimer
Sonic Team Junior, LXShadow and John FrostFox are in no way affiliated with SEGA or Sonic Team and do not claim ownership of any of SEGA's intellectual property used in SRB2.
