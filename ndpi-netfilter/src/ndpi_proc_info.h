
ssize_t _ninfo_proc_read(struct ndpi_net *n, char __user *buf,
                              size_t count, loff_t *ppos,int family);

ssize_t ninfo_proc_read(struct file *file, char __user *buf,
                              size_t count, loff_t *ppos);

#ifdef NDPI_DETECTION_SUPPORT_IPV6
ssize_t ninfo6_proc_read(struct file *file, char __user *buf,
                              size_t count, loff_t *ppos);
#endif

ssize_t ninfo_proc_write(struct file *file, const char __user *buffer,
                     size_t length, loff_t *loff);

#ifdef BT_ANNOUNCE
ssize_t nann_proc_read(struct file *file, char __user *buf,
                              size_t count, loff_t *ppos);
#endif

ssize_t nproto_proc_read(struct file *file, char __user *buf,
                     size_t count, loff_t *ppos);

int nproto_proc_close(struct inode *inode, struct file *file);

ssize_t nproto_proc_write(struct file *file, const char __user *buffer,
                     size_t length, loff_t *loff);

ssize_t ndebug_proc_read(struct file *file, char __user *buf,
                     size_t count, loff_t *ppos);

int ndebug_proc_close(struct inode *inode, struct file *file);

ssize_t ndebug_proc_write(struct file *file, const char __user *buffer,
                     size_t length, loff_t *loff);

int risk_names(struct ndpi_net *n, char *lbuf,size_t count);

int nrisk_proc_open(struct inode *inode, struct file *file);

ssize_t nrisk_proc_read(struct file *file, char __user *buf,
                     size_t count, loff_t *ppos);
ssize_t nrisk_proc_write(struct file *file, const char __user *buffer,
		     size_t length, loff_t *loff);
int nrisk_proc_close(struct inode *inode, struct file *file);

int ncfg_proc_open(struct inode *inode, struct file *file);
ssize_t ncfg_proc_read(struct file *file, char __user *buf,
                     size_t count, loff_t *ppos);
ssize_t ncfg_proc_write(struct file *file, const char __user *buffer,
                     size_t length, loff_t *loff);
int ncfg_proc_close(struct inode *inode, struct file *file);
