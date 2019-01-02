
        
        protected Q_SLOTS:
    void accept();
    
        QVariant value() const;
    void setValue(const QVariant &value);
    
        /* Check NULLs for conversion */
    CHECK(secp256k1_ecdsa_sign(both, &normal_sig, message, privkey, NULL, NULL) == 1);
    ecount = 0;
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(both, NULL, &recsig) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(both, &normal_sig, NULL) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(both, &normal_sig, &recsig) == 1);
    
    static void CheckParseTorReplyMapping(std::string input, std::map<std::string,std::string> expected)
{
    BOOST_TEST_MESSAGE(std::string('CheckParseTorReplyMapping(') + input + ')');
    auto ret = ParseTorReplyMapping(input);
    BOOST_CHECK_EQUAL(ret.size(), expected.size());
    auto r_it = ret.begin();
    auto e_it = expected.begin();
    while (r_it != ret.end() && e_it != expected.end()) {
        BOOST_CHECK_EQUAL(r_it->first, e_it->first);
        BOOST_CHECK_EQUAL(r_it->second, e_it->second);
        r_it++;
        e_it++;
    }
}
    
    // To keep it as transparent as possible, the macros below have been generated
// using python via the excellent cog.py code generation script.  This avoids
// the need for a bunch of complex (but more general) preprocessor tricks as
// used in boost.preprocessor.
//
// To rerun the code generation in place, use `cog.py -r tinyformat.h`
// (see http://nedbatchelder.com/code/cog).  Alternatively you can just create
// extra versions by hand.
    
    // Bech32 is a string encoding format used in newer address types.
// The output consists of a human-readable part (alphanumeric), a
// separator character (1), and a base32 data section, the last
// 6 characters of which are a checksum.
//
// For more information, see BIP 173.
    
    inline b3Quat b3QuatInvert(b3QuatConstArg q)
{
	return (b3Quat)(-q.xyz, q.w);
}
    
    This software is provided 'as-is', without any express or implied warranty.
In no event will the authors be held liable for any damages arising from the use of this software.
Permission is granted to anyone to use this software for any purpose, 
including commercial applications, and to alter it and redistribute it freely, 
subject to the following restrictions:
    
    	void getInfo1NonVirtual (b3ConstraintInfo1* info,const b3RigidBodyData* bodies);
    
    1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/
    
    	int		registerConvexPolyhedron(class b3ConvexUtility* convex);
    
    
    {
    {
    {			float fAngle = b3Sqrt(b3Dot3F4(angvel, angvel));
			
			//limit the angular motion
			if(fAngle*timeStep > BT_GPU_ANGULAR_MOTION_THRESHOLD)
			{
				fAngle = BT_GPU_ANGULAR_MOTION_THRESHOLD / timeStep;
			}
			if(fAngle < 0.001f)
			{
				// use Taylor's expansions of sync function
				axis = angvel * (0.5f*timeStep-(timeStep*timeStep*timeStep)*0.020833333333f * fAngle * fAngle);
			}
			else
			{
				// sync(fAngle) = sin(c*fAngle)/t
				axis = angvel * ( b3Sin(0.5f * fAngle * timeStep) / fAngle);
			}
			
			b3Quat dorn;
			dorn.x = axis.x;
			dorn.y = axis.y;
			dorn.z = axis.z;
			dorn.w = b3Cos(fAngle * timeStep * 0.5f);
			b3Quat orn0 = bodies[nodeID].m_quat;
			b3Quat predictedOrn = b3QuatMul(dorn, orn0);
			predictedOrn = b3QuatNormalized(predictedOrn);
			bodies[nodeID].m_quat=predictedOrn;
		}
		//linear velocity		
		bodies[nodeID].m_pos +=  bodies[nodeID].m_linVel * timeStep;
		
		//apply gravity
		bodies[nodeID].m_linVel += gravityAcceleration * timeStep;
		
	}
	
}
    
    ///The b3GeometryUtil helper class provides a few methods to convert between plane equations and vertices.
class b3GeometryUtil
{
	public:
	
	
		static void	getPlaneEquationsFromVertices(b3AlignedObjectArray<b3Vector3>& vertices, b3AlignedObjectArray<b3Vector3>& planeEquationsOut );
    }
    
    /**
 * @brief Return true if the failed query is no longer blacklisted.
 *
 * There are two scenarios where a blacklisted query becomes 'unblacklisted'.
 * The first is simple, the amount of time it was blacklisted for has expired.
 * The second is more complex, the query failed but the schedule has requested
 * that the query should not be blacklisted.
 *
 * @param blt The time the query was originally blacklisted.
 * @param query The scheduled query and its options.
 */
static inline bool blacklistExpired(size_t blt, const ScheduledQuery& query) {
  if (getUnixTime() > blt) {
    return true;
  }
    }
    
    Status EventsConfigParserPlugin::update(const std::string& source,
                                        const ParserConfig& config) {
  auto events = config.find('events');
  if (events != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(events->second.doc(), obj);
    data_.add('events', obj, data_.doc());
  }
  return Status();
}
    
    Status KafkaTopicsConfigParserPlugin::update(const std::string& source,
                                             const ParserConfig& config) {
  auto topics = config.find(kKafkaTopicParserRootKey);
  if (topics != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(topics->second.doc(), obj);
    data_.add(kKafkaTopicParserRootKey, obj);
  }
  return Status();
}
    
    Status OptionsConfigParserPlugin::update(const std::string& source,
                                         const ParserConfig& config) {
  auto co = config.find('options');
  if (co == config.end()) {
    return Status();
  }
    }
    
    #include <osquery/config/config.h>
#include <osquery/config/tests/test_utils.h>
#include <osquery/database.h>
#include <osquery/filesystem/filesystem.h>
#include <osquery/registry.h>
#include <osquery/registry_interface.h>
#include <osquery/system.h>
    
    
    {  size_t accesses = 0_sz;
  if (doc.doc().HasMember('file_accesses') &&
      doc.doc()['file_accesses'].IsArray()) {
    accesses = doc.doc()['file_accesses'].Size();
  }
  EXPECT_EQ(accesses, 2_sz);
}
    
    namespace osquery {
    }
    
          JSON tree;
      Status parse_status = tree.fromString(json);
      if (!parse_status.ok()) {
        VLOG(1) << 'Could not parse JSON from TLS config node API';
      }