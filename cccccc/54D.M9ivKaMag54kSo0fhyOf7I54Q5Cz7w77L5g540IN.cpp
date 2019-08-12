
        
        BOOST_FIXTURE_TEST_SUITE(univalue_tests, BasicTestingSetup)
    
          if ((step % 100) == 0) {
        ASSERT_TRUE(CompareIterators(step, &model, db_, NULL, NULL));
        ASSERT_TRUE(CompareIterators(step, &model, db_, model_snap, db_snap));
        // Save a snapshot from each DB this time that we'll use next
        // time we compare things, to make sure the current state is
        // preserved with the snapshot
        if (model_snap != NULL) model.ReleaseSnapshot(model_snap);
        if (db_snap != NULL) db_->ReleaseSnapshot(db_snap);
    }
    
    template <>
IMF_EXPORT
void FloatVectorAttribute::writeValueTo
    (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream &, int) const;
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
        if (abs (double (fps) - double (fps_59_94())) < e)
	return fps_59_94();
    
        if (header.hasType() && isDeepData(header.type()))
    {
        version |= NON_IMAGE_FLAG;
    }
    else
    {
        // (TODO) we may want to check something else in function signature
        // instead of hasTileDescription()?
        if (header.hasTileDescription())
            version |= TILED_FLAG;
    }
    
    
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    #endif /* IMFINPUTPART_H_ */

    
    
    {  if (!base::JSONWriter::Write(top_dictionary, &json))
    return false;
  int written = base::WriteFile(path, json.data(), (int)json.size());
  if (static_cast<unsigned>(written) != json.size()) {
    LOG(ERROR) << 'Error writing ' << path.AsUTF8Unsafe()
               << ' ; write result:' << written << ' expected:' << json.size();
    return false;
  }
  return true;
}
    
    
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Clipboard);
};
    
      private:
    bool WriteText(ClipboardData& data) {
      DCHECK(data.type == TYPE_TEXT);
      scw_->WriteText(base::UTF8ToUTF16(*(data.data)));
      return true;
    }
    
    bool ParagraphModel::Comparable(const ParagraphModel &other) const {
  if (justification_ != other.justification_)
    return false;
  if (justification_ == JUSTIFICATION_CENTER ||
      justification_ == JUSTIFICATION_UNKNOWN)
    return true;
  int tolerance = (tolerance_ + other.tolerance_) / 4;
  return NearlyEqual(margin_ + first_indent_,
                     other.margin_ + other.first_indent_, tolerance) &&
         NearlyEqual(margin_ + body_indent_,
                     other.margin_ + other.body_indent_, tolerance);
}
    
    RES ResourceFormatLoaderVideoStreamGDNative::load(const String &p_path, const String &p_original_path, Error *r_error) {
	FileAccess *f = FileAccess::open(p_path, FileAccess::READ);
	if (!f) {
		if (r_error) {
			*r_error = ERR_CANT_OPEN;
		}
		return RES();
	}
	memdelete(f);
	VideoStreamGDNative *stream = memnew(VideoStreamGDNative);
	stream->set_file(p_path);
	Ref<VideoStreamGDNative> ogv_stream = Ref<VideoStreamGDNative>(stream);
	if (r_error) {
		*r_error = OK;
	}
	return ogv_stream;
}
    
    	int shadow_atlas_size;
	ShadowAtlasQuadrantSubdiv shadow_atlas_quadrant_subdiv[4];
    
    	void set_agent_height(float p_value);
	float get_agent_height() const;
    
    protected:
	Error set_error(Error p_error) const;
    
    
    {	const char *ptr;
	static StaticCString create(const char *p_ptr);
};
    
    
    {
    {
    {					if (bytes < 256) {
						buffer[bytes++] = byte;
						// If we know the size of the current packet receive it if it reached the expected size
						if (bytes >= expected_size) {
							md->receive_input_packet(timestamp, buffer, bytes);
							bytes = 0;
						}
					}
				}
			} while (ret > 0);
		}
    
    	Vector<snd_rawmidi_t *> connected_inputs;
    
    MIDIDriverCoreMidi::MIDIDriverCoreMidi() :
		client(0) {
}
    
    #endif // WINMIDI_ENABLED

    
    godot_int GDAPI godot_pool_vector2_array_size(const godot_pool_vector2_array *p_self) {
	const PoolVector<Vector2> *self = (const PoolVector<Vector2> *)p_self;
	return self->size();
}
    
    	ClassDB::bind_method(D_METHOD('set_service_type', 'type'), &UPNPDevice::set_service_type);
	ClassDB::bind_method(D_METHOD('get_service_type'), &UPNPDevice::get_service_type);
	ADD_PROPERTY(PropertyInfo(Variant::STRING, 'service_type'), 'set_service_type', 'get_service_type');
    
    	bool is_valid_gateway() const;
	String query_external_address() const;
	int add_port_mapping(int port, int port_internal = 0, String desc = '', String proto = 'UDP', int duration = 0) const;
	int delete_port_mapping(int port, String proto = 'UDP') const;