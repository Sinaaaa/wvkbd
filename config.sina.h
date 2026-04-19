#ifndef config_h_INCLUDED
#define config_h_INCLUDED

#define DEFAULT_FONT "Sans 18"
#define DEFAULT_ROUNDING 0
static const int transparency = 170;

struct clr_scheme schemes[] = {
{
  /* Scheme [0] */
  .bg = {.bgra = {15, 15, 15, 0}},             /* <--- Change 'transparency' to 0 */
  .fg = {.bgra = {45, 45, 45, transparency}},  /* Buttons stay at 200 (solid-ish) */
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.bgra = {255, 229, 207, transparency}},   /* TEXT COLOR NORMAL */
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* colors */
  .bg = {.bgra = {15, 15, 15, transparency}},
  .fg = {.bgra = {89, 80, 71, 100}},
  .high = {.bgra = {100, 100, 150, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.bgra = {255, 229, 207, transparency}},
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},

{
    /* Scheme [2] - Your New Scheme ESC */
    .bg = {.bgra = {228, 199, 195, transparency}}, 
    .fg = {.bgra = {18, 17, 69, transparency}},    /* BACKGROUND SECTION */ 
    .high = {.bgra = {100, 100, 255, transparency}}, /* Bright Red when pressed */
    .swipe = {.bgra = {100, 255, 100, 64}},
    .text = {.bgra = {255, 229, 207, transparency}},
    .font = DEFAULT_FONT,
    .rounding = DEFAULT_ROUNDING,
  },
  
{
    /* Scheme [3] - Your New Scheme */
    .bg = {.bgra = {228, 199, 195, transparency}},  
    .fg = {.bgra = {228, 199, 195, transparency}},    /* Dark Red background */ 
    .high = {.bgra = {228, 199, 195,transparency}}, /* Bright Red when pressed */
    .swipe = {.bgra = {228, 199, 195, 64}},
	.text = {.bgra = {49, 33, 30, transparency}},
    .font = DEFAULT_FONT,
    .rounding = DEFAULT_ROUNDING,
  },  
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id layers[] = {
  Full, // First layout is the default layout on startup
  Special,
  NumLayouts // signals the last item, may not be omitted
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id landscape_layers[] = {
  Full, // First layout is the default layout on startup
  Special,
  NumLayouts // signals the last item, may not be omitted
};

#endif // config_h_INCLUDED
