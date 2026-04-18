# wvkbd - On-screen keyboard for wlroots that sucks less



## Features

This is my fork of wvkbd, beyond a custom HU layout I have also made some minor changes to fit my needs:

-large side margins so it looks palatable on a large display.

-Fully transparent layer shell background, so it doesn't draw over vertical bars.

-Added a tacky red exit button, so now the keyboard can be closed more easily.

-Added a bunch of special characters so compose mode doesn't need to be used anymore outside of capital letters.

-Added a media key section to the bottom row.

-Theming choices..

## Dependencies

You'll need the following developer packages

 - cairo
 - pango
 - wayland-client
 - xkbcommon

You also need [scdoc](https://git.sr.ht/~sircmpwn/scdoc/) to generate the documentation.


## Usage

After first build `make clean LAYOUT=sina` must be run before `make LAYOUT=sina`!
To run my layout use the command `./wvkbd-sina -L 250` withing your wvkbd folder.



## To contribute to the original wvkbd project

Any contributions are welcome, there are two ways to contribute, the first one is **preferred**:

1. [Sourcehut](https://git.sr.ht/~proycon/wvkbd) - Submit your patches using `git send-email` to [~mil/sxmo-devel@lists.sr.ht](mailto:~mil/sxmo-devel@lists.sr.ht), follow [these contribution guidelines](https://sxmo.org/contribute/). Questions can also be asked on Sxmo's [mailing lists](https://sxmo.org/support/).
2. [Github](https://github.com/jjsullivan5196/wvkbd/) - Submit a pull request or open an issue *(legacy method)*

This project was started by [John Sullivan](https://jsullivan.cc/) and is
currently being maintained by the [Sxmo](https://sxmo.org) project, whose
maintainers will ensure both git remotes are kept in sync at all times.

For code contributions, please run `make format` (requires `clang-format`)
before sending a patch (opening a PR) and include as much relevant detail as
possible.

## Related projects

* [clickclack](https://git.sr.ht/~proycon/clickclack) - Audio/haptic feedback (standalone)
* [swipeGuess](https://git.sr.ht/~earboxer/swipeGuess) - Word-completion for swipe-typing
* [Sxmo](https://sxmo.org) - A hackable mobile interface environment for Linux phones that adopted wvkbd as its keyboard
* [svkbd](https://tools.suckless.org/x/svkbd/) - A similar project as wvkbd but for X11 rather than Wayland
* [squeekboard](https://gitlab.gnome.org/World/Phosh/squeekboard) - The virtual keyboard developed for the Librem5 (used
	by Phosh)
