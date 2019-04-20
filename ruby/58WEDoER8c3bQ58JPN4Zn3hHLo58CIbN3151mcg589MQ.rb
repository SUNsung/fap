
        
                def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
                options = options.dup
            options[:field_name]           = @method_name
            options[:include_position]     = true
            options[:prefix]             ||= @object_name
            options[:index]                = @auto_index if @auto_index && !options.has_key?(:index)
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end