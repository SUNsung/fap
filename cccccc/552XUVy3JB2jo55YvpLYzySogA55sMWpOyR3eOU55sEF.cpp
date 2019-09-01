
        
          // base::SingleThreadTaskRunner:
  bool PostDelayedTask(const base::Location& from_here,
                       base::OnceClosure task,
                       base::TimeDelta delay) override;
  bool RunsTasksInCurrentSequence() const override;
  bool PostNonNestableDelayedTask(const base::Location& from_here,
                                  base::OnceClosure task,
                                  base::TimeDelta delay) override;
    
    
    {
    {      int device_name_index = 0;
      for (auto& source : screen_sources) {
        const auto& device_name = device_names[device_name_index++];
        std::wstring wide_device_name;
        base::UTF8ToWide(device_name.c_str(), device_name.size(),
                         &wide_device_name);
        const int64_t device_id =
            display::win::DisplayInfo::DeviceIdFromDeviceName(
                wide_device_name.c_str());
        source.display_id = base::NumberToString(device_id);
      }
    }
#elif defined(OS_MACOSX)
    // On Mac, the IDs across the APIs match.
    for (auto& source : screen_sources) {
      source.display_id = base::NumberToString(source.media_list_source.id.id);
    }
#endif  // defined(OS_WIN)
    // TODO(ajmacd): Add Linux support. The IDs across APIs differ but Chrome
    // only supports capturing the entire desktop on Linux. Revisit this if
    // individual screen support is added.
    std::move(screen_sources.begin(), screen_sources.end(),
              std::back_inserter(captured_sources_));
  }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(DownloadItem);
};
    
    
    {}  // namespace api
    
    #endif  // SHELL_BROWSER_API_ATOM_API_MENU_VIEWS_H_

    
    
typedef TypedAttribute<OPENEXR_IMF_INTERNAL_NAMESPACE::Envmap> EnvmapAttribute;
    
    
    
    #include <ImfFloatVectorAttribute.h>
    
    
FrameBuffer::Iterator
FrameBuffer::find (const string &name)
{
    return find (name.c_str());
}
    
    
    //----------------------------------------------------------------------
    // Preview image:
    //
    // The preview image is a PreviewImageAttribute whose name is 'preview'.
    // This attribute is special -- while an image file is being written,
    // the pixels of the preview image can be changed repeatedly by calling
    // OutputFile::updatePreviewImage().
    //
    // Convenience functions:
    //
    // setPreviewImage(p)
    //     calls insert ('preview', PreviewImageAttribute (p))
    //
    // previewImage()
    //     returns typedAttribute<PreviewImageAttribute>('preview').value()
    //
    // hasPreviewImage()
    //     return findTypedAttribute<PreviewImageAttribute>('preview') != 0
    //
    //----------------------------------------------------------------------
    
    
void
hufBuildEncTable
    (Int64*	frq,	// io: input frequencies [HUF_ENCSIZE], output table
     int*	im,	//  o: min frq index
     int*	iM)	//  o: max frq index
{
    //
    // This function assumes that when it is called, array frq
    // indicates the frequency of all possible symbols in the data
    // that are to be Huffman-encoded.  (frq[i] contains the number
    // of occurrences of symbol i in the data.)
    //
    // The loop below does three things:
    //
    // 1) Finds the minimum and maximum indices that point
    //    to non-zero entries in frq:
    //
    //     frq[im] != 0, and frq[i] == 0 for all i < im
    //     frq[iM] != 0, and frq[i] == 0 for all i > iM
    //
    // 2) Fills array fHeap with pointers to all non-zero
    //    entries in frq.
    //
    // 3) Initializes array hlink such that hlink[i] == i
    //    for all array entries.
    //
    }
    
     
        IMF_EXPORT
        void                rawPixelDataToBuffer (int scanLine,
                                                  char *pixelData,
                                                  int &pixelDataSize) const;
    
    //-----------------------------------------------------------------------------
//
//	class IntAttribute
//
//-----------------------------------------------------------------------------
    
      // Is page valid?
  GBool isOk() { return ok; }
    
    #ifndef PAGE_TRANSITION_H
#define PAGE_TRANSITION_H
    
    class ExternalSecurityHandler: public SecurityHandler {
public:
    }
    
      SplashFont *getCurrentFont() { return font; }
    
    
    {
    {}  // namespace data
}  // namespace xgboost
#endif  // XGBOOST_DATA_SPARSE_PAGE_WRITER_H_

    
      /**
  * \brief Column sampler constructor.
  * \note This constructor synchronizes the RNG seed across processes.
  */
  ColumnSampler() {
    uint32_t seed = common::GlobalRandom()();
    rabit::Broadcast(&seed, sizeof(seed), 0);
    rng_.seed(seed);
  }
    
    
    {  void setTimeout(std::chrono::seconds timeout)
  {
    timeout_ = std::move(timeout);
  }
};
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    #include 'DHTAbstractMessage.h'
#include 'A2STR.h'
#include 'ValueBase.h'
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
      ~DHTTaskExecutor();
    
    void DHTTaskFactoryImpl::setCommonProperty(
    const std::shared_ptr<DHTAbstractTask>& task)
{
  task->setRoutingTable(routingTable_);
  task->setMessageDispatcher(dispatcher_);
  task->setMessageFactory(factory_);
  task->setTaskQueue(taskQueue_);
  task->setLocalNode(localNode_);
}
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    #endif // D_DHT_TOKEN_TRACKER_H

    
    #include 'DHTMessage.h'
    
        const auto FACE_NUMBER_PARTS = 70u;
    #define FACE_PAIRS_RENDER_GPU \
        0,1,  1,2,  2,3,  3,4,  4,5,  5,6,  6,7,  7,8,  8,9,  9,10,  10,11,  11,12,  12,13,  13,14,  14,15,  15,16,  17,18,  18,19,  19,20, \
        20,21,  22,23,  23,24,  24,25,  25,26,  27,28,  28,29,  29,30,  31,32,  32,33,  33,34,  34,35,  36,37,  37,38,  38,39,  39,40,  40,41, \
        41,36,  42,43,  43,44,  44,45,  45,46,  46,47,  47,42,  48,49,  49,50,  50,51,  51,52,  52,53,  53,54,  54,55,  55,56,  56,57,  57,58, \
        58,59,  59,48,  60,61,  61,62,  62,63,  63,64,  64,65,  65,66,  66,67,  67,60
    #define FACE_SCALES_RENDER_GPU 1
    const std::vector<unsigned int> FACE_PAIRS_RENDER {FACE_PAIRS_RENDER_GPU};
    #define FACE_COLORS_RENDER_GPU 255.f,    255.f,    255.f
    const std::vector<float> FACE_COLORS_RENDER{FACE_COLORS_RENDER_GPU};
    const std::vector<float> FACE_SCALES_RENDER{FACE_SCALES_RENDER_GPU};
    
    
    {        detail::errHandler(error, __CREATE_PROGRAM_WITH_BINARY_ERR);
        if (err != NULL) {
            *err = error;
        }
    }
    
    #ifdef USE_3D_ADAM_MODEL
    #include <adam/totalmodel.h>
#endif
#include <openpose/core/common.hpp>
#include <openpose/gui/enumClasses.hpp>
#include <openpose/gui/gui.hpp>
    
    namespace op
{
    struct PersonEntry
    {
        long long counterLastDetection;
        std::vector<cv::Point2f> keypoints;
        std::vector<char> status;
        /*
        PersonEntry(long long _last_frame, 
                    std::vector<cv::Point2f> _keypoints,
                    std::vector<char> _active):
                    last_frame(_last_frame), keypoints(_keypoints),
                    active(_active)
                    {}
        */
    };
    class OP_API PersonIdExtractor
    {
    }
    }