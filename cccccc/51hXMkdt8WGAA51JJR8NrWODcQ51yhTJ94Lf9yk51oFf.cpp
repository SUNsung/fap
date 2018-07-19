
        
        /* End of file. */

    
    void cv::cuda::flip(InputArray, OutputArray, int, Stream&) { throw_no_cuda(); }
    
    static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
    	virtual bool is_server() const;
	virtual ConnectionStatus get_connection_status() const = 0;
    
    
    {	// Check the amount resampler can really handle.
	// If it cannot, wait 'wait_resampler_phase_limit' times.
	// This mechanism contributes to smoother pause/unpause operation.
	if (p_frames <= resampler.get_num_of_ready_frames() ||
			wait_resampler_limit <= wait_resampler) {
		wait_resampler = 0;
		return resampler.mix(p_buffer, p_frames);
	}
	wait_resampler++;
	return false;
}
    
    	GodotDeepPenetrationContactResultCallback(const btCollisionObjectWrapper *body0Wrap, const btCollisionObjectWrapper *body1Wrap) :
			btManifoldResult(body0Wrap, body1Wrap),
			m_penetration_distance(0),
			m_other_compound_shape_index(0) {}
    
    
#ifndef PCFREAD_H_
#define PCFREAD_H_
    
        struct huff_tables
    {
      bool ac_table;
      uint  look_up[256];
      uint  look_up2[256];
      uint8 code_size[256];
      uint  tree[512];
    };
    
    # if defined(OC_COLLECT_METRICS)
typedef struct oc_mode_metrics oc_mode_metrics;
# endif
typedef struct oc_mode_rd      oc_mode_rd;
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q16
static OPUS_INLINE opus_val32 MULT16_32_Q16_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q16\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b),'r'(a<<16)
  );
  return rd_hi;
}
#define MULT16_32_Q16(a, b) (MULT16_32_Q16_armv4(a, b))
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/