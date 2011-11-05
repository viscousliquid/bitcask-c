#ifndef BITCASK_H
#define BITCASK_H

#define MAX_HEIGHT 16

struct bitcask_handle {
	int flags;
	char *dir;
	jsw_skip_t *keydir;
}

struct kd_entry {
	uint32_t key;
	uint32_t file_id;
	uint32_t kv_size;
	off_t pos;
	time_t tstamp;
}

struct kv_entry {
	int crc;
	int tstamp;
	u32 key_size;
	u32 value_size;
	char *key;
	char *value;
}

#endif
