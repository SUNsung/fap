
        
            OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, magic);
    OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, version);
    
        if (im < 0 || im >= HUF_ENCSIZE || iM < 0 || iM >= HUF_ENCSIZE)
	invalidTableSize();
    
    
char *
IStream::readMemoryMapped (int n)
{
    throw IEX_NAMESPACE::InputExc ('Attempt to perform a memory-mapped read '
			 'on a file that is not memory mapped.');
    return 0;
}
    
        void		initialize ();
    void                multiPartInitialize(InputPartData* part);
    void                compatibilityInitialize(OPENEXR_IMF_INTERNAL_NAMESPACE::IStream& is);
    TiledInputFile *	tFile ();
    
    friend void TiledOutputFile::copyPixels (InputFile &);
    
    Data *		_data;
    
    
    {				set_value(get_value() - (custom_step >= 0 ? custom_step : get_step()));
				return;
			}
    
    
    {	particles_editor->edit(Object::cast_to<CPUParticles>(p_object));
}
    
    	void _process_packet(int p_from, const uint8_t *p_packet, int p_packet_len);
	void _process_simplify_path(int p_from, const uint8_t *p_packet, int p_packet_len);
	void _process_confirm_path(int p_from, const uint8_t *p_packet, int p_packet_len);
	Node *_process_get_node(int p_from, const uint8_t *p_packet, int p_packet_len);
	void _process_rpc(Node *p_node, const StringName &p_name, int p_from, const uint8_t *p_packet, int p_packet_len, int p_offset);
	void _process_rset(Node *p_node, const StringName &p_name, int p_from, const uint8_t *p_packet, int p_packet_len, int p_offset);
	void _process_raw(int p_from, const uint8_t *p_packet, int p_packet_len);
    
    	int line = 1;
	String total_code;
    
    
    {	AudioStreamPreview();
};
    
    
    {	ClassDB::bind_method(D_METHOD('_set_key'), &DictionaryPropertyEdit::_set_key);
	ClassDB::bind_method(D_METHOD('_set_value'), &DictionaryPropertyEdit::_set_value);
	ClassDB::bind_method(D_METHOD('_notif_change'), &DictionaryPropertyEdit::_notif_change);
	ClassDB::bind_method(D_METHOD('_notif_changev'), &DictionaryPropertyEdit::_notif_changev);
	ClassDB::bind_method(D_METHOD('_dont_undo_redo'), &DictionaryPropertyEdit::_dont_undo_redo);
}
    
    		undo_redo->create_action(TTR('Remove BlendSpace1D Point'));
		undo_redo->add_do_method(blend_space.ptr(), 'remove_blend_point', selected_point);
		undo_redo->add_undo_method(blend_space.ptr(), 'add_blend_point', blend_space->get_blend_point_node(selected_point), blend_space->get_blend_point_position(selected_point), selected_point);
		undo_redo->add_do_method(this, '_update_space');
		undo_redo->add_undo_method(this, '_update_space');
		undo_redo->commit_action();
    
    	Ref<StyleBox> style = get_stylebox('panel', 'PopupMenu');
	Ref<Font> font = get_font('font', 'PopupMenu');
	Ref<Texture> slot_icon = get_icon('VisualShaderPort', 'EditorIcons');
    
    /*!
 * \brief load a data matrix
 * \param fname the name of the file
 * \param silent whether print messages during loading
 * \param out a loaded data matrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromFile(const char *fname,
                                    int silent,
                                    DMatrixHandle *out);
    
        for (size_t i = 0; i < symbol_bits_; i++) {
      size_t byte_idx = ((offset + 1) * symbol_bits_ - (i + 1)) / bits_per_byte;
      byte_idx += detail::kPadding;
      size_t bit_idx =
          ((bits_per_byte + i) - ((offset + 1) * symbol_bits_)) % bits_per_byte;
    }
    
    TEST(Param, VectorStreamRead) {
  std::vector<int> vals = {3, 2, 1};
  std::stringstream ss;
  std::vector<int> vals_in;
    }