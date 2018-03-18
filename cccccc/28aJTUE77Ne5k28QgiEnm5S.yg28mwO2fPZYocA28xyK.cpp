
        
        
    { private:
  App();
  DISALLOW_COPY_AND_ASSIGN(App);
};
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
      scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
  converter->SetStripNullFromObjects(true);
    
    void AutofillAgent::ShowSuggestions(const WebInputElement& element,
                                    bool autofill_on_empty_values,
                                    bool requires_caret_at_end,
                                    bool display_warning_if_disabled) {
  if (!element.isEnabled() || element.isReadOnly() || !element.isTextField() ||
      element.isPasswordField() || !element.suggestedValue().isEmpty())
    return;
    }
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
      float zoom_level = web_view->zoomLevel();
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
    typedef std::map<std::string,std::string> KeyMap;
    
    void MenuItem::SetTooltip(const std::string& tooltip) {
  gtk_widget_set_tooltip_text(menu_item_, tooltip.c_str());
}
    
    template <class ElemType>
void PostComputingActions<ElemType>::BatchNormalizationStatistics(IDataReader * dataReader, const vector<wstring>& evalNodeNames, 
    const wstring newModelPath, const size_t mbSize, const int iters)
{
    // since the mean and variance of bn will be modified in statistics,
    // training mode will make it work. And there is no back prop, other parameters
    // are fixed during computing.
    ScopedNetworkOperationMode modeGuard(m_net, NetworkOperationMode::training);
    }
    
    // -----------------------------------------------------------------------
// functions exposed by this module
// -----------------------------------------------------------------------
    
    // access the parser through one of these functions
ExpressionPtr ParseConfigDictFromString(wstring text, wstring location, vector<wstring>&& includePaths);          // parses a list of dictionary members, returns a dictionary expression
// TODO: These rvalue references are no longer adding value, change to const<>&
//ExpressionPtr ParseConfigDictFromFile(wstring path, vector<wstring> includePaths);              // likewise, but from a file path
ExpressionPtr ParseConfigExpression(const wstring& sourceText, vector<wstring>&& includePaths); // parses a single expression from sourceText, which is meant to contain an include statement, hence includePaths
    
    // The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DATAWRITER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DATAWRITER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef _WIN32
#if defined(DATAWRITER_EXPORTS)
#define DATAWRITER_API __declspec(dllexport)
#elif defined(DATAWRITER_LOCAL)
#define DATAWRITER_API
#else
#define DATAWRITER_API __declspec(dllimport)
#endif
#else
#define DATAWRITER_API
#endif
    
    
    {    return std::equal(s1.begin(), s1.end(), s2.begin(), [](const TElement& a, const TElement& b)
    {
        return std::tolower(a) == std::tolower(b);
    });
}
    
    int getifaddrs(struct ifaddrs** result) {
	int fd = socket(PF_NETLINK, SOCK_RAW, NETLINK_ROUTE);
	if (fd < 0) {
		return -1;
	}
	netlinkrequest ifaddr_request;
	memset(&ifaddr_request, 0, sizeof(ifaddr_request));
	ifaddr_request.header.nlmsg_flags = NLM_F_ROOT | NLM_F_REQUEST;
	ifaddr_request.header.nlmsg_type = RTM_GETADDR;
	ifaddr_request.header.nlmsg_len = NLMSG_LENGTH(sizeof(ifaddrmsg));
	ssize_t count = send(fd, &ifaddr_request, ifaddr_request.header.nlmsg_len, 0);
	if (static_cast<size_t>(count) != ifaddr_request.header.nlmsg_len) {
		close(fd);
		return -1;
	}
	struct ifaddrs* start = NULL;
	struct ifaddrs* current = NULL;
	char buf[kMaxReadSize];
	ssize_t amount_read = recv(fd, &buf, kMaxReadSize, 0);
	while (amount_read > 0) {
		nlmsghdr* header = reinterpret_cast<nlmsghdr*>(&buf[0]);
		size_t header_size = static_cast<size_t>(amount_read);
		for ( ; NLMSG_OK(header, header_size);
		      header = NLMSG_NEXT(header, header_size)) {
			switch (header->nlmsg_type) {
			case NLMSG_DONE:
				// Success. Return.
				*result = start;
				close(fd);
				return 0;
			case NLMSG_ERROR:
				close(fd);
				freeifaddrs(start);
				return -1;
			case RTM_NEWADDR: {
				ifaddrmsg* address_msg =
						reinterpret_cast<ifaddrmsg*>(NLMSG_DATA(header));
				rtattr* rta = IFA_RTA(address_msg);
				ssize_t payload_len = IFA_PAYLOAD(header);
				while (RTA_OK(rta, payload_len)) {
					if (rta->rta_type == IFA_ADDRESS) {
						int family = address_msg->ifa_family;
						if (family == AF_INET || family == AF_INET6) {
							ifaddrs* newest = new ifaddrs;
							memset(newest, 0, sizeof(ifaddrs));
							if (current) {
								current->ifa_next = newest;
							} else {
								start = newest;
							}
							if (populate_ifaddrs(newest, address_msg, RTA_DATA(rta),
									     RTA_PAYLOAD(rta)) != 0) {
								freeifaddrs(start);
								*result = NULL;
								return -1;
							}
							current = newest;
						}
					}
					rta = RTA_NEXT(rta, payload_len);
				}
				break;
			}
			}
		}
		amount_read = recv(fd, &buf, kMaxReadSize, 0);
	}
	close(fd);
	freeifaddrs(start);
	return -1;
}
    
    
    {    static inline void sub_and_store(jpgd_block_t* pDst, const Matrix44& a, const Matrix44& b)
    {
      for (int r = 0; r < 4; r++)
      {
        pDst[0*8 + r] = static_cast<jpgd_block_t>(a.at(r, 0) - b.at(r, 0));
        pDst[1*8 + r] = static_cast<jpgd_block_t>(a.at(r, 1) - b.at(r, 1));
        pDst[2*8 + r] = static_cast<jpgd_block_t>(a.at(r, 2) - b.at(r, 2));
        pDst[3*8 + r] = static_cast<jpgd_block_t>(a.at(r, 3) - b.at(r, 3));
      }
    }
  };
    
    static const vorbis_residue_template _res_8s_0[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__8c0_s_single,&_huff_book__8c0_s_single,
   &_resbook_8s_0,&_resbook_8s_0},
};
static const vorbis_residue_template _res_8s_1[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__8c1_s_single,&_huff_book__8c1_s_single,
   &_resbook_8s_1,&_resbook_8s_1},
};
    
    typedef ogg_int16_t vorbis_fpu_control;
    
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
    
                    _asm
                {       fld flt
                        fistp intgr
                } ;
    
    #undef    silk_min_int
static OPUS_INLINE opus_int silk_min_int(opus_int a, opus_int b)
{
    ops_count += 1;
    return (((a) < (b)) ? (a) : (b));
}
    
    extern JSClass  *jsb_cocos2d_Physics3DShape_class;
extern JSObject *jsb_cocos2d_Physics3DShape_prototype;
    
    
    
        virtual void DrawPolygon(const b2Vec2* vertices, int vertexCount, const b2Color& color);
    
    class AddPair : public Test
{
public:
    }
    
    #endif

    
    /**
 * Symbolicates a stack trace into a given vector
 *
 * @param symbols The vector to receive the output. The vector is cleared and
 * enough room to keep the frames are reserved.
 *
 * @param stackTrace The input stack trace
 */
FBEXPORT void getStackTraceSymbols(std::vector<StackTraceElement>& symbols,
                                   const std::vector<InstructionPointer>& trace);
    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
    
    template <typename T, typename U>
inline bool operator==(U* ptr, const RefPtr<T>& ref) {
  return ref.get() == ptr;
}
    
      void reset(T* other = NULL) {
    T* old = (T*)pthread_getspecific(m_key);
    if (old != other) {
      FBASSERT(m_cleanup);
      m_cleanup(old);
      pthread_setspecific(m_key, other);
    }
  }
    
    
    {
    {}}
