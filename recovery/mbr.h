#ifndef MBR_H
#define MBR_H

/*
 *                                                                                                                                                                             
 * Initial author: Floris Bos                                                                                                                                                
 * Maintained by Raspberry Pi                                                                                                                                                
 *                                                                                                                                                                       
 * See LICENSE.txt for license details                                                                                                                                 
 *                                                                                                                                                                   
 */

/* MBR on disk structures */

struct mbr_partition_entry {
    unsigned char bootable;
    char begin_hsc[3];
    unsigned char id;
    char end_hsc[3];
    unsigned int starting_sector;
    unsigned int nr_of_sectors;
} __attribute__ ((packed));

struct mbr_table {
    char bootcode[446];
    mbr_partition_entry part[4];
    char signature[2];
} __attribute__ ((packed));

#endif // MBR_H
