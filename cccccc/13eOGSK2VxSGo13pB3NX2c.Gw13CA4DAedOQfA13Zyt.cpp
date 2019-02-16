
        
        #if defined(__linux)
static Slice TrimSpace(Slice s) {
  size_t start = 0;
  while (start < s.size() && isspace(s[start])) {
    start++;
  }
  size_t limit = s.size();
  while (limit > start && isspace(s[limit-1])) {
    limit--;
  }
  return Slice(s.data() + start, limit - start);
}
#endif
    
      // Set of table files to protect from deletion because they are
  // part of ongoing compactions.
  std::set<uint64_t> pending_outputs_ GUARDED_BY(mutex_);
    
    static std::string IKey(const std::string& user_key,
                        uint64_t seq,
                        ValueType vt) {
  std::string encoded;
  AppendInternalKey(&encoded, ParsedInternalKey(user_key, seq, vt));
  return encoded;
}
    
    // If filename is a leveldb file, store the type of the file in *type.
// The number encoded in the filename is stored in *number.  If the
// filename was successfully parsed, returns true.  Else return false.
bool ParseFileName(const std::string& filename,
                   uint64_t* number,
                   FileType* type);
    
    class FileNameTest { };
    
    bool MemTable::Get(const LookupKey& key, std::string* value, Status* s) {
  Slice memkey = key.memtable_key();
  Table::Iterator iter(&table_);
  iter.Seek(memkey.data());
  if (iter.Valid()) {
    // entry format is:
    //    klength  varint32
    //    userkey  char[klength]
    //    tag      uint64
    //    vlength  varint32
    //    value    char[vlength]
    // Check that it belongs to same user key.  We do not check the
    // sequence number since the Seek() call above should have skipped
    // all entries with overly large sequence numbers.
    const char* entry = iter.key();
    uint32_t key_length;
    const char* key_ptr = GetVarint32Ptr(entry, entry+5, &key_length);
    if (comparator_.comparator.user_comparator()->Compare(
            Slice(key_ptr, key_length - 8),
            key.user_key()) == 0) {
      // Correct user key
      const uint64_t tag = DecodeFixed64(key_ptr + key_length - 8);
      switch (static_cast<ValueType>(tag & 0xff)) {
        case kTypeValue: {
          Slice v = GetLengthPrefixedSlice(key_ptr + key_length);
          value->assign(v.data(), v.size());
          return true;
        }
        case kTypeDeletion:
          *s = Status::NotFound(Slice());
          return true;
      }
    }
  }
  return false;
}
    
    
    {
    {    std::string accelerate_checkins_expire_str = '-1';
    Status status = getDatabaseValue(kPersistentSettings,
                                     'distributed_accelerate_checkins_expire',
                                     accelerate_checkins_expire_str);
    if (!status.ok() || getUnixTime() > tryTo<unsigned long int>(
                                            accelerate_checkins_expire_str, 10)
                                            .takeOr(0ul)) {
      pause(std::chrono::seconds(FLAGS_distributed_interval));
    } else {
      pause(std::chrono::seconds(kDistributedAccelerationInterval));
    }
  }
}
    
    
    {  // If the splayed interval was not restored from the database.
  auto splay = splayValue(interval, FLAGS_schedule_splay_percent);
  content = std::to_string(interval) + ':' + std::to_string(splay);
  setDatabaseValue(kPersistentSettings, 'interval.' + name, content);
  return splay;
}
    
    #include 'Extension.h'
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>
    
        // eg.
    // p..p..p..p..p..p..p
    // 1..2..3..4..5..6..7
    // want p to be 1, 2, 3, 4, 5, 6
    if (time == 1)
    {
        p = _points->count() - 1;
        lt = 1;
    }
    else 
    {
        p = time / _deltaT;
        lt = (time - _deltaT * (float)p) / _deltaT;
    }
    
    // Interpolate
    Vec2 pp0 = _points->getControlPointAtIndex(p-1);
    Vec2 pp1 = _points->getControlPointAtIndex(p+0);
    Vec2 pp2 = _points->getControlPointAtIndex(p+1);
    Vec2 pp3 = _points->getControlPointAtIndex(p+2);
    
    bool DeccelAmplitude::initWithAction(Action *action, float duration)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _rate = 1.0f;
        _other = (ActionInterval*)(action);
        action->retain();
    }
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCGRID3D_ACTION_H__
#define __ACTION_CCGRID3D_ACTION_H__
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    SplitCols* SplitCols::create(float duration, unsigned int cols)
{
    SplitCols *action = new (std::nothrow) SplitCols();
    }
    
    struct Tile;
/**
@brief ShuffleTiles action.
@details This action make the target node shuffle with many tiles in random order.
        You can create the action by these parameters:
        duration, grid size, the random seed.
*/
class CC_DLL ShuffleTiles : public TiledGrid3DAction
{
public:
    /** 
    * @brief Create the action with grid size, random seed and duration.
    * @param duration Specify the duration of the ShuffleTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the creation success, return a pointer of ShuffleTiles action; otherwise, return nil.
    */
    static ShuffleTiles* create(float duration, const Size& gridSize, unsigned int seed);
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        // Overrides
    void startWithTarget(Node *target) override;
    void update(float dt) override;
    ActionTween* reverse() const override;
    ActionTween *clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    /** 
     * @brief Initializes the action with the property name (key), and the from and to parameters.
     * @param duration The duration of the ActionTween. It's a value in seconds.
     * @param key The key of property which should be updated.
     * @param from The value of the specified property when the action begin.
     * @param to The value of the specified property when the action end.
     * @return If the initialization success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, const std::string& key, float from, float to);
    
    PolygonInfo AutoPolygon::generatePolygon(const std::string& filename, const Rect& rect, float epsilon, float threshold)
{
    AutoPolygon ap(filename);
    return ap.generateTriangles(rect, epsilon, threshold);
}
