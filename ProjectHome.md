[Cscope](http://cscope.sf.net) is a tool for browsing C/C++ code. It is especially useful when used with Vim.

Here you can find a native Win32 port of Cscope, i.e. without Cygwin or DJGPP. What's been done?

  * Support for DOS-style filenames.
  * The environment variables TMP and EDITOR are not required (but you can set them).
  * TAB and ESC key handling.
  * Some support for file and directory names with spaces
  * Double quotes in CSCOPE\_EDITOR and EDITOR env.vars handling.