#ifndef STAT_H //adding header guards to protect from either of these structs from being redefined, pretty much if
	       //the same header file is being included multiple times in single compilation, this attempts to prevent
#define STAT_H

#define T_DIR  1   // Directory
#define T_FILE 2   // File
#define T_DEV  3   // Device

struct stat {
  short type;  // Type of file
  int dev;     // File system's disk device
  uint ino;    // Inode number
  short nlink; // Number of links to file
  uint size;   // Size of file in bytes
};

struct iostats {
  uint read_bytes;     // the total number of bytes read
  uint write_bytes;    // the total number of bytes written
};

#endif // STAT_H

