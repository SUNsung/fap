
        
          // Check for input iterator errors
  if (!iter->status().ok()) {
    s = iter->status();
  }
    
    #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
    // A comparator for internal keys that uses a specified comparator for
// the user key portion and breaks ties by decreasing sequence number.
class InternalKeyComparator : public Comparator {
 private:
  const Comparator* user_comparator_;
 public:
  explicit InternalKeyComparator(const Comparator* c) : user_comparator_(c) { }
  virtual const char* Name() const;
  virtual int Compare(const Slice& a, const Slice& b) const;
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const;
  virtual void FindShortSuccessor(std::string* key) const;
    }
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
      // Evict any entry for the specified file number
  void Evict(uint64_t file_number);
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
    #include 'test_precomp.hpp'
#include 'opencv2/core/affine.hpp'
#include 'opencv2/calib3d.hpp'
#include <iostream>
    
        mutable std::vector<Point3f> corners3d;
private:
    void generateEdge(const Point3f& p1, const Point3f& p2, std::vector<Point3f>& out) const;
    Mat generateChessBoard(const Mat& bg, const Mat& camMat, const Mat& distCoeffs,
        const Point3f& zero, const Point3f& pb1, const Point3f& pb2,
        float sqWidth, float sqHeight, const std::vector<Point3f>& whole, std::vector<Point2f>& corners) const;
    void generateBasis(Point3f& pb1, Point3f& pb2) const;
    
        void dRv1(mat_t& dr3_dr1, mat_t& dt3_dr1)
    {
        dr3_dr1.create(3, 3);     dt3_dr1.create(3, 3);
    }
    
    
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic'', nullptr);
        return 0;
    }
#endif
    
    
    
    
    {        ok &= luaval_to_vec2(tolua_S, 2, &arg0, 'cc.PhysicsWorld:setGravity');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsWorld_setGravity'', nullptr);
            return 0;
        }
        cobj->setGravity(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.PhysicsWorld:setGravity',argc, 1);
    return 0;
    
    			if (settings->drawContactNormals == 1)
			{
				b2Vec2 p1 = point->position;
				b2Vec2 p2 = p1 + k_axisScale * point->normal;
				m_debugDraw.DrawSegment(p1, p2, b2Color(0.9f, 0.9f, 0.9f));
			}
			else if (settings->drawContactImpulse == 1)
			{
				b2Vec2 p1 = point->position;
				b2Vec2 p2 = p1 + k_impulseScale * point->normalImpulse * point->normal;
				m_debugDraw.DrawSegment(p1, p2, b2Color(0.9f, 0.9f, 0.3f));
			}
    
    
    {
    {			body->CreateFixture(&fd);
		}
	}
    
    // This is used to test sensor shapes.
class Breakable : public Test
{
public:
    }