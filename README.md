# uqm-3ds

An unsuccessful and broken attempt to port the Ur-Quan masters to the Nintendo 3DS.
This shit just straight up doesn't work.

The current source will actually compile it seems but will not link no matter what I try, somehow both SDL 1.2 and SDL 2 both have missing/undefined functions for the 3ds despite being directly compiled for the platform.
As well as some ancient scrungly version of libvorbis I found online this is just not going well. Basically a digital cry for help at this point.

Enter uqm-0.8.0 and run make, watch it probably fail due to include paths and even if it does work, watch it completely fail to link :)
