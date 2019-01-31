
        
            void mul(const Size2D &size,
             const u8 * src0Base, ptrdiff_t src0Stride,
             const s16 * src1Base, ptrdiff_t src1Stride,
             s16 * dstBase, ptrdiff_t dstStride,
             f32 scale,
             CONVERT_POLICY cpolicy);
    
        typedef ptrdiff_t  stride_t;
    
                vec128 v_src = vld3q(src + js), v_dst;
            v_src.val[0] = vrev64q(v_src.val[0]);
            v_src.val[1] = vrev64q(v_src.val[1]);
            v_src.val[2] = vrev64q(v_src.val[2]);