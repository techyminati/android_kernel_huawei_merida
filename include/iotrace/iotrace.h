
#ifndef _IO_TRACE_H
#define _IO_TRACE_H

#include<linux/tracepoint.h>

/* Event 914009000
	the block info */
/* sd card exist */
#define V914009000_SD_CARD_EXIST_SMALLINT "SD_CARD_EXIST"
/* data part free space */
#define V914009000_STROAGE_MANFID_INT "STROAGE_MANFID"
/* partition name */
#define V914009000_PARTITION_INT "PARTITION_NAME"
/* total read data in blk */
#define V914009000_HOST_TOTAL_READ_INT "HOST_TOTAL_READ"
/* total write data in blk */
#define V914009000_HOST_TOTAL_WRITE_INT "HOST_TOTAL_WRITE"
/* 4k read delay in five */
#define V914009000_READ_DELAY_4K_FIVE_INT "READ_DELAY_4K_FIVE"
/* 4k write delay in five */
#define V914009000_WRITE_DELAY_4K_FIVE_INT "WRITE_DELAY_4K_FIVE"
/* 4k read delay in four */
#define V914009000_READ_DELAY_4K_FOUR_INT "READ_DELAY_4K_FOUR"
/* 4k write delay in four */
#define V914009000_WRITE_DELAY_4K_FOUR_INT "WRITE_DELAY_4K_FOUR"
/* 4k read delay in three */
#define V914009000_READ_DELAY_4K_THREE_INT "READ_DELAY_4K_THREE"
/* 4k write delay in three */
#define V914009000_WRITE_DELAY_4K_THREE_INT "WRITE_DELAY_4K_THREE"
/* 4k read delay in two */
#define V914009000_READ_DELAY_4K_TWO_INT "READ_DELAY_4K_TWO"
/* 4k write delay in two */
#define V914009000_WRITE_DELAY_4K_TWO_INT "WRITE_DELAY_4K_TWO"
/* 4k read delay in one */
#define V914009000_READ_DELAY_4K_ONE_INT "READ_DELAY_4K_ONE"
/* 4k write delay in one */
#define V914009000_WRITE_DELAY_4K_ONE_INT "WRITE_DELAY_4K_ONE"
/* 128k read delay in five */
#define V914009000_READ_DELAY_128K_FIVE_INT "READ_DELAY_128K_FIVE"
/* 128k write delay in five */
#define V914009000_WRITE_DELAY_128K_FIVE_INT "WRITE_DELAY_128K_FIVE"
/* 128k read delay in four */
#define V914009000_READ_DELAY_128K_FOUR_INT "READ_DELAY_128K_FOUR"
/* 128k write delay in four */
#define V914009000_WRITE_DELAY_128K_FOUR_INT "WRITE_DELAY_128K_FOUR"
/* 128k read delay in three */
#define V914009000_READ_DELAY_128K_THREE_INT "READ_DELAY_128K_THREE"
/* 128k write delay in three */
#define V914009000_WRITE_DELAY_128K_THREE_INT "WRITE_DELAY_128K_THREE"
/* 128k read delay in two */
#define V914009000_READ_DELAY_128K_TWO_INT "READ_DELAY_128K_TWO"
/* 128k write delay in two */
#define V914009000_WRITE_DELAY_128K_TWO_INT "WRITE_DELAY_128K_TWO"
/* 128k read delay in one */
#define V914009000_READ_DELAY_128K_ONE_INT "READ_DELAY_128K_ONE"
/* 128k write delay in one */
#define V914009000_WRITE_DELAY_128K_ONE_INT "WRITE_DELAY_128K_ONE"
/* 1024k read delay in five */
#define V914009000_READ_DELAY_1024K_FIVE_INT "READ_DELAY_1024K_FIVE"
/* 1024k write delay in five */
#define V914009000_WRITE_DELAY_1024K_FIVE_INT "WRITE_DELAY_1024K_FIVE"
/* 1024k read delay in four */
#define V914009000_READ_DELAY_1024K_FOUR_INT "READ_DELAY_1024K_FOUR"
/* 1024k write delay in four */
#define V914009000_WRITE_DELAY_1024K_FOUR_INT "WRITE_DELAY_1024K_FOUR"
/* 1024k read delay in three */
#define V914009000_READ_DELAY_1024K_THREE_INT "READ_DELAY_1024K_THREE"
/* 1024k write delay in three */
#define V914009000_WRITE_DELAY_1024K_THREE_INT "WRITE_DELAY_1024K_THREE"
/* 1024k read delay in two */
#define V914009000_READ_DELAY_1024K_TWO_INT "READ_DELAY_1024K_TWO"
/* 1024k write delay in two */
#define V914009000_WRITE_DELAY_1024K_TWO_INT "WRITE_DELAY_1024K_TWO"
/* 1024k read delay in one */
#define V914009000_READ_DELAY_1024K_ONE_INT "READ_DELAY_1024K_ONE"
/* 1024k write delay in one */
#define V914009000_WRITE_DELAY_1024K_ONE_INT "WRITE_DELAY_1024K_ONE"
/* 4k average read delay */
#define V914009000_READ_DELAY_4K_AVERAGE_INT "READ_DELAY_4K_AVERAGE"
/* 4k average write delay */
#define V914009000_WRITE_DELAY_4K_AVERAGE_INT "WRITE_DELAY_4K_AVERAGE"
/* 128k  average read delay */
#define V914009000_READ_DELAY_128K_AVERAGE_INT "READ_DELAY_128K_AVERAGE"
/* 128k average write delay */
#define V914009000_WRITE_DELAY_128K_AVERAGE_INT "WRITE_DELAY_128K_AVERAGE"
/* 1024k  average read delay */
#define V914009000_READ_DELAY_1024K_AVERAGE_INT "READ_DELAY_1024K_AVERAGE"
/* 1024k average write delay */
#define V914009000_WRITE_DELAY_1024K_AVERAGE_INT "WRITE_DELAY_1024K_AVERAGE"
/* min read delay */
#define V914009000_UFS_QUEUE_TAG_ONE_INT "UFS_QUEUE_TAG_ONE"
/* min write delay */
#define V914009000_UFS_QUEUE_TAG_TWO_INT "UFS_QUEUE_TAG_TWO"
/* max read delay */
#define V914009000_UFS_QUEUE_TAG_THREE_INT "UFS_QUEUE_TAG_THREE"
/* max read delay */
#define V914009000_UFS_QUEUE_TAG_FOUR_INT "UFS_QUEUE_TAG_FOUR"
/* running read io number */
#define V914009000_READ_RUN_IO_NUM_INT "READ_RUN_IO_NUM"
/* running write io number */
#define V914009000_WRITE_RUN_IO_NUM_INT "WRITE_RUN_IO_NUM"
/* running read io sectors */
#define V914009000_READ_RUN_IO_SECTOR_INT "READ_RUN_IO_SECTOR"
/* running write io sectors */
#define V914009000_WRITE_RUN_IO_SECTOR_INT "WRITE_RUN_IO_SECTOR"
/* running read io ticks */
#define V914009000_READ_RUN_IO_TICKS_INT "READ_RUN_IO_TICKS"
/* running write io ticks */
#define V914009000_WRITE_RUN_IO_TICKS_INT "WRITE_RUN_IO_TICKS"
/* running read io flight */
#define V914009000_READ_RUN_IO_FLIGHT_INT "READ_RUN_IO_FLIGHT"
/* running write io flight */
#define V914009000_WRITE_RUN_IO_FLIGHT_INT "WRITE_RUN_IO_FLIGHT"
/* read iops */
#define V914009000_READ_IOPS_INT "READ_IOPS"
/* write iops */
#define V914009000_WRITE_IOPS_INT "WRITE_IOPS"
/* read bandith */
#define V914009000_READ_BANDITH_INT "READ_BANDITH"
/* write bandith */
#define V914009000_WRITE_BANDITH_INT "WRITE_BANDITH"

DECLARE_TRACE(generic_perform_write_enter,
        TP_PROTO(struct file *file, size_t count, loff_t pos),
        TP_ARGS(file, count, pos));

DECLARE_TRACE(generic_perform_write_end,
        TP_PROTO(struct file *file, size_t count),
        TP_ARGS(file, count));

DECLARE_TRACE(generic_file_read_begin,
        TP_PROTO(struct file *filp, size_t count),
        TP_ARGS(filp, count));

DECLARE_TRACE(generic_file_read_end,
        TP_PROTO(struct file *filp, size_t count),
        TP_ARGS(filp, count));

/*
DECLARE_TRACE(ext4_da_write_begin_enter,
        TP_PROTO(struct inode *inode, loff_t pos, unsigned int len,
              unsigned int flags),
        TP_ARGS(inode, pos, len, flags)
    );
    */
DECLARE_TRACE(ext4_da_write_begin_end,
        TP_PROTO(struct inode *inode, loff_t pos, unsigned int len,
              unsigned int flags),
        TP_ARGS(inode, pos, len, flags)
    );

DECLARE_TRACE(ext4_sync_write_wait_end,
        TP_PROTO(struct file *file, int datasync),
        TP_ARGS(file, datasync)
    );

/*DECLARE_TRACE(ext4_sync_file_begin,
        TP_PROTO(struct file *file, int datasync),
        TP_ARGS(file, datasync)
    );

*/
DECLARE_TRACE(ext4_sync_file_end,
        TP_PROTO(struct file *file, int ret),
        TP_ARGS(file, ret)
    );

DECLARE_TRACE(f2fs_detected_quasi,
        TP_PROTO(struct bio *bio),
        TP_ARGS(bio)
    );

DECLARE_TRACE(block_write_begin_enter,
        TP_PROTO(struct inode *inode, struct page *page, loff_t pos,
            unsigned int len),
        TP_ARGS(inode, page, pos, len)
    );

DECLARE_TRACE(block_write_begin_end,
        TP_PROTO(struct inode *inode, struct page *page, int err),
        TP_ARGS(inode, page, err)
    );

DECLARE_TRACE(mpage_da_map_and_submit,
        TP_PROTO(struct inode *inode, unsigned long long fblk, unsigned int len),
        TP_ARGS(inode, fblk, len)
    );

/*M*/
DECLARE_TRACE(block_crypt_dec_pending,
        TP_PROTO(struct bio *bio),
        TP_ARGS(bio)
    );

DECLARE_TRACE(block_kcryptd_crypt,
        TP_PROTO(struct bio *bio),
        TP_ARGS(bio)
    );

DECLARE_TRACE(block_dm_request,
        TP_PROTO(struct request_queue *q, struct bio *bio),
        TP_ARGS(q, bio)
    );

DECLARE_TRACE(block_crypt_map,
        TP_PROTO(struct bio *bio, sector_t sector),
        TP_ARGS(bio, sector)
    );

DECLARE_TRACE(block_throttle_weight,
        TP_PROTO(struct bio *bio, unsigned int weight, unsigned int nr_queued),
        TP_ARGS(bio, weight, nr_queued)
    );

DECLARE_TRACE(block_throttle_dispatch,
        TP_PROTO(struct bio *bio, unsigned int weight),
        TP_ARGS(bio, weight)
    );

DECLARE_TRACE(block_throttle_iocost,
        TP_PROTO(uint64_t bps, unsigned int iops, uint64_t bytes_disp, unsigned int io_disp),
        TP_ARGS(bps, iops, bytes_disp, io_disp)
    );

DECLARE_TRACE(block_throttle_limit_start,
        TP_PROTO(struct bio *bio, int max_inflights, atomic_t inflights),
        TP_ARGS(bio, max_inflights, inflights)
    );

DECLARE_TRACE(block_throttle_limit_end,
        TP_PROTO(struct bio *bio),
        TP_ARGS(bio)
    );

DECLARE_TRACE(block_throttle_bio_in,
        TP_PROTO(struct bio *bio),
        TP_ARGS(bio)
    );

DECLARE_TRACE(block_throttle_bio_out,
        TP_PROTO(struct bio *bio, long delay),
        TP_ARGS(bio, delay)
    );

DECLARE_TRACE(block_bio_wbt_done,
        TP_PROTO(struct bio *bio),
        TP_ARGS(bio)
    );

#ifdef CONFIG_IOCACHE
/*IOCACHE*/
DECLARE_TRACE(iocache_drain_last_trans_enter,
        TP_PROTO(unsigned long trans_total,unsigned long tot_uppages),
        TP_ARGS(trans_total, tot_uppages)
    );

DECLARE_TRACE(iocache_drain_last_trans_end,
        TP_PROTO(unsigned int submitted),
        TP_ARGS(submitted)
    );
#endif
#endif
