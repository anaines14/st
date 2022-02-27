const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#050401", /* black   */
  [1] = "#4A831A", /* red     */
  [2] = "#749321", /* green   */
  [3] = "#AF8B1E", /* yellow  */
  [4] = "#86A526", /* blue    */
  [5] = "#D7A31D", /* magenta */
  [6] = "#C78B28", /* cyan    */
  [7] = "#eed387", /* white   */

  /* 8 bright colors */
  [8]  = "#a6935e",  /* black   */
  [9]  = "#4A831A",  /* red     */
  [10] = "#749321", /* green   */
  [11] = "#AF8B1E", /* yellow  */
  [12] = "#86A526", /* blue    */
  [13] = "#D7A31D", /* magenta */
  [14] = "#C78B28", /* cyan    */
  [15] = "#eed387", /* white   */

  /* special colors */
  [256] = "#050401", /* background */
  [257] = "#eed387", /* foreground */
  [258] = "#eed387",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
