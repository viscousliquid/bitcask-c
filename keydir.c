
#include "bitcask.h"

/* Open a new or existing Bitcask datastore with additional options.
 * Valid options include read write (if this process is going to be a
 * writer and not just a reader) and sync on put (if this writer would
 * prefer to sync the write after every write operation).
 * The directory must be readable and writable by this process, and
 * only one process may open a Bitcask with read write at a time. */
struct bitcask_handle *open(const char *dir, int flags)
{
}
/* Retrieve a value by key from a Bitcask datastore. */
struct kv_entry get(struct bitcask_handle *bh, void *key)
{
}

/* Store a key and value in a Bitcask datastore. */
int put(struct bitcask_handle *bh, void *key, void *value)
{
}

/* Delete a key from a Bitcask datastore. */
int delete(struct bitcask_handle *bh, void *key)
{
}

/* List all keys in a Bitcask datastore. */
void *list_keys(struct bitcask_handle *bh)
{
}

/* Fold over all K/V pairs in a Bitcask datastore,
 * f is expected to be of the form: F(K,V,Acc0) --> Acc.*/
int fold(struct bitcask_handle *bh, int *f(), int acc0)
{
}

/* Merge several data ﬁles within a Bitcask datastore into a more
 * compact form. Also, produce hintﬁles for faster startup. */
int merge(const char *dir)
{
}

/* Force any writes to sync to disk. */
int sync(struct bitcask_handle *bh)
{
}

/* Close a Bitcask data store and push all pending writes 
 * (if any) to disk. */

int close(struct bitcask_handle *bh)
{
}

