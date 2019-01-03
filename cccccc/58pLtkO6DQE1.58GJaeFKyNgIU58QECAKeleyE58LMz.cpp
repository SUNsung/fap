
        
        /**
 * Changelog:
 * - March 2013, Diederik Huys:    original version
 * - November 2014, Pieter Wuille: updated to use Peter Dettman's parallel multiplication algorithm
 * - December 2014, Pieter Wuille: converted from YASM to GCC inline assembly
 */
    
        if (b->infinity) {
        *r = *a;
        return;
    }
    if (a->infinity) {
        secp256k1_fe bzinv2, bzinv3;
        r->infinity = b->infinity;
        secp256k1_fe_sqr(&bzinv2, bzinv);
        secp256k1_fe_mul(&bzinv3, &bzinv2, bzinv);
        secp256k1_fe_mul(&r->x, &b->x, &bzinv2);
        secp256k1_fe_mul(&r->y, &b->y, &bzinv3);
        secp256k1_fe_set_int(&r->z, 1);
        return;
    }
    r->infinity = 0;
    
    	b2Vec2 origDir(1.0f,0.0f);
	b2Vec2* resultVecs = new b2Vec2[4*nNodes];// nodes may be visited more than once, unfortunately - change to growable array!
	int32 nResultVecs = 0;
	b2PolyNode* currentNode = &nodes[minYIndex];
	b2PolyNode* startNode = currentNode;
	b2Assert(currentNode->nConnected > 0);
	b2PolyNode* nextNode = currentNode->GetRightestConnection(origDir);
	if (!nextNode) goto CleanUp; // Borked, clean up our mess and return
	resultVecs[0] = startNode->position;
	++nResultVecs;
	while (nextNode != startNode){
		if (nResultVecs > 4*nNodes){
			/*
			printf('%d, %d, %d\n',(int)startNode,(int)currentNode,(int)nextNode);
			printf('%f, %f -> %f, %f\n',currentNode->position.x,currentNode->position.y, nextNode->position.x, nextNode->position.y);
				p->printFormatted();
				printf('Dumping connection graph: \n');
				for (int32 i=0; i<nNodes; ++i) {
					printf('nodex[%d] = %f; nodey[%d] = %f;\n',i,nodes[i].position.x,i,nodes[i].position.y);
					printf('//connected to\n');
					for (int32 j=0; j<nodes[i].nConnected; ++j) {
						printf('connx[%d][%d] = %f; conny[%d][%d] = %f;\n',i,j,nodes[i].connected[j]->position.x, i,j,nodes[i].connected[j]->position.y);
					}
				}
				printf('Dumping results thus far: \n');
				for (int32 i=0; i<nResultVecs; ++i) {
					printf('x[%d]=map(%f,-3,3,0,width); y[%d] = map(%f,-3,3,height,0);\n',i,resultVecs[i].x,i,resultVecs[i].y);
				}
			//*/
			b2Assert(false); //nodes should never be visited four times apiece (proof?), so we've probably hit a loop...crap
		}
		resultVecs[nResultVecs++] = nextNode->position;
		b2PolyNode* oldNode = currentNode;
		currentNode = nextNode;
		//printf('Old node connections = %d; address %d\n',oldNode->nConnected, (int)oldNode);
		//printf('Current node connections = %d; address %d\n',currentNode->nConnected, (int)currentNode);
		nextNode = currentNode->GetRightestConnection(oldNode);
		if (!nextNode) goto CleanUp; // There was a problem, so jump out of the loop and use whatever garbage we've generated so far
		//printf('nextNode address: %d\n',(int)nextNode);
	}
    
    #ifndef B3_BROADPHASE_CALLBACK_H
#define B3_BROADPHASE_CALLBACK_H
    
    #define	B3_DBVT_BP_PROFILE					0
//#define B3_DBVT_BP_SORTPAIRS				1
#define B3_DBVT_BP_PREVENTFALSEUPDATE		0
#define B3_DBVT_BP_ACCURATESLEEPING		0
#define B3_DBVT_BP_ENABLE_BENCHMARK		0
#define B3_DBVT_BP_MARGIN					(b3Scalar)0.05
    
    struct b3ContactSolverInfoData
{
	
    }
    
    	void	resolveSplitPenetrationImpulseCacheFriendly(
       b3SolverBody& bodyA,b3SolverBody& bodyB,
        const b3SolverConstraint& contactConstraint);
    
    /// point to point constraint between two rigidbodies each with a pivotpoint that descibes the 'ballsocket' location in local space
B3_ATTRIBUTE_ALIGNED16(class) b3Point2PointConstraint : public b3TypedConstraint
{
#ifdef IN_PARALLELL_SOLVER
public:
#endif
	
	b3Vector3	m_pivotInA;
	b3Vector3	m_pivotInB;
	
	int			m_flags;
	b3Scalar	m_erp;
	b3Scalar	m_cfm;
	
public:
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_Marmalade_CreateDeviceObjects();
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    bool ImGui_Marmalade_CreateDeviceObjects()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
            for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                // User callback (registered via ImDrawList::AddCallback)
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                ImVec4 clip_rect = ImVec4(pcmd->ClipRect.x - pos.x, pcmd->ClipRect.y - pos.y, pcmd->ClipRect.z - pos.x, pcmd->ClipRect.w - pos.y);
                if (clip_rect.x < fb_width && clip_rect.y < fb_height && clip_rect.z >= 0.0f && clip_rect.w >= 0.0f)
                {
                    // Apply scissor/clipping rectangle
                    glScissor((int)clip_rect.x, (int)(fb_height - clip_rect.w), (int)(clip_rect.z - clip_rect.x), (int)(clip_rect.w - clip_rect.y));
    }
    }
    }
    
        const GLchar* fragment_shader_glsl_300_es =
        'precision mediump float;\n'
        'uniform sampler2D Texture;\n'
        'in vec2 Frag_UV;\n'
        'in vec4 Frag_Color;\n'
        'layout (location = 0) out vec4 Out_Color;\n'
        'void main()\n'
        '{\n'
        '    Out_Color = Frag_Color * texture(Texture, Frag_UV.st);\n'
        '}\n';
    
    // The aim of imgui_impl_vulkan.h/.cpp is to be usable in your engine without any modification. 
// IF YOU FEEL YOU NEED TO MAKE ANY CHANGE TO THIS CODE, please share them and your feedback at https://github.com/ocornut/imgui/
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    #ifdef IMGUI_VULKAN_DEBUG_REPORT
static VKAPI_ATTR VkBool32 VKAPI_CALL debug_report(VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage, void* pUserData)
{
    (void)flags; (void)object; (void)location; (void)messageCode; (void)pUserData; (void)pLayerPrefix; // Unused arguments
    fprintf(stderr, '[vulkan] ObjectType: %i\nMessage: %s\n\n', objectType, pMessage);
    return VK_FALSE;
}
#endif // IMGUI_VULKAN_DEBUG_REPORT
    
    Status WriteBatchBase::Delete(ColumnFamilyHandle* column_family,
                              const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return Delete(column_family, key_slice);
}
    
      virtual Status Read(uint64_t offset, size_t n, Slice* result,
                      char* scratch) const override;
    
    // Example structure that describes a compaction task.
struct CompactionTask {
  CompactionTask(
      DB* _db, Compactor* _compactor,
      const std::string& _column_family_name,
      const std::vector<std::string>& _input_file_names,
      const int _output_level,
      const CompactionOptions& _compact_options,
      bool _retry_on_fail)
          : db(_db),
            compactor(_compactor),
            column_family_name(_column_family_name),
            input_file_names(_input_file_names),
            output_level(_output_level),
            compact_options(_compact_options),
            retry_on_fail(_retry_on_fail) {}
  DB* db;
  Compactor* compactor;
  const std::string& column_family_name;
  std::vector<std::string> input_file_names;
  int output_level;
  CompactionOptions compact_options;
  bool retry_on_fail;
};
    
      // Initialize pointer options for each column family
  for (size_t i = 0; i < loaded_cf_descs.size(); ++i) {
    auto* loaded_bbt_opt = reinterpret_cast<BlockBasedTableOptions*>(
        loaded_cf_descs[0].options.table_factory->GetOptions());
    // Expect the same as BlockBasedTableOptions will be loaded form file.
    assert(loaded_bbt_opt->block_size == bbt_opts.block_size);
    // However, block_cache needs to be manually initialized as documented
    // in rocksdb/utilities/options_util.h.
    loaded_bbt_opt->block_cache = cache;
  }
  // In addition, as pointer options are initialized with default value,
  // we need to properly initialized all the pointer options if non-defalut
  // values are used before calling DB::Open().
  assert(loaded_cf_descs[0].options.compaction_filter == nullptr);
  loaded_cf_descs[0].options.compaction_filter = compaction_filter.get();
    
    // Get Thread-local IOStatsContext object pointer
IOStatsContext* get_iostats_context();
    
      // Obtain the name of an operation given its type.
  static const std::string& GetOperationName(OperationType op_type);
    
      // Up to this many background threads will copy files for CreateNewBackup()
  // and RestoreDBFromBackup()
  // Default: 1
  int max_background_operations;