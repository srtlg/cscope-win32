To support running Cscope in directories with spaces I have slightly changed database format:
Double quote as a base directory separator was introduced instead of white space.

Later I realised that was not necessary. If, for some reason, you want to use vanilla Cscope format, use _-X_ command-line option.

The current version should work in directories containing white spaces in their names regardless _-X_ option.