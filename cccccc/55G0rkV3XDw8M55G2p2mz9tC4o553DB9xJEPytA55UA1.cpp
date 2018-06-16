
        
        
    {}  // namespace atom
    
    namespace base {
class FilePath;
}
    
    namespace chrome {
class MonitorFinder;
    }
    
    #include <set>
#include <string>
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
      /**
   * @brief Computes the error gradient w.r.t. the ELU inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} = \left\{
   *        \begin{array}{lr}
   *            1           & \mathrm{if} \; x > 0 \\
   *            y + \alpha  & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$ if propagate_down[0].
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    /**
 * @brief Takes two+ Blobs, interprets last Blob as a selector and
 *  filter remaining Blobs accordingly with selector data (0 means that
 * the corresponding item has to be filtered, non-zero means that corresponding
 * item needs to stay).
 */
template <typename Dtype>
class FilterLayer : public Layer<Dtype> {
 public:
  explicit FilterLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    static int make_prefixes(struct ifaddrs* ifaddr, int family, int prefixlen) {
	char* prefix = NULL;
	if (family == AF_INET) {
		sockaddr_in* mask = new sockaddr_in;
		mask->sin_family = AF_INET;
		memset(&mask->sin_addr, 0, sizeof(in_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 32) {
			prefixlen = 32;
		}
		prefix = reinterpret_cast<char*>(&mask->sin_addr);
	} else if (family == AF_INET6) {
		sockaddr_in6* mask = new sockaddr_in6;
		mask->sin6_family = AF_INET6;
		memset(&mask->sin6_addr, 0, sizeof(in6_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 128) {
			prefixlen = 128;
		}
		prefix = reinterpret_cast<char*>(&mask->sin6_addr);
	} else {
		return -1;
	}
	for (int i = 0; i < (prefixlen / 8); i++) {
		*prefix++ = 0xFF;
	}
	char remainder = 0xff;
	remainder <<= (8 - prefixlen % 8);
	*prefix = remainder;
	return 0;
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
    
    
    void opus_ifft_neon(const kiss_fft_state *st,
                    const kiss_fft_cpx *fin,
                    kiss_fft_cpx *fout);
    
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