#ifndef BOX_H
#define BOX_H
#include "darknet.h"

box float_to_box(float *f, int stride);
float overlap(float x1, float w1, float x2, float w2);
float box_intersection(box a, box b);
float box_union(box a, box b);
float box_iou(box a, box b);
int nms_comparator(const void *pa, const void *pb);
void do_nms_sort(detection *dets, int total, int classes, float thresh);

#endif
