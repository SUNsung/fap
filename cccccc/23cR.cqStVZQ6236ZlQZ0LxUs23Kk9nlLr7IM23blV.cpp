
        
        		{
			//zero texture
			PoolVector<uint8_t>::Write w = tex.imgdata.write();
			ERR_FAIL_COND_V(texsize * texsize * p_color_size > tex.imgdata.size(), ret);
			for (int i = 0; i < texsize * texsize * p_color_size; i++) {
				w[i] = 0;
			}
		}
		tex.offsets.resize(texsize);
		for (int i = 0; i < texsize; i++) //zero offsets
			tex.offsets.write[i] = 0;
    
    void VideoStreamPlaybackGDNative::cleanup() {
	if (data_struct)
		interface->destructor(data_struct);
	if (pcm)
		memfree(pcm);
	pcm = NULL;
	time = 0;
	num_channels = -1;
	interface = NULL;
	data_struct = NULL;
}
    
    class NavigationMesh : public Resource {
    }
    
    
    {	return collided;
}
    
    	operator String() const;
	bool is_empty() const;
    
    
    {		return String();
	}
    
    	Vector<MIDIEndpointRef> connected_sources;
    
    #include 'gdnative/string_name.h'