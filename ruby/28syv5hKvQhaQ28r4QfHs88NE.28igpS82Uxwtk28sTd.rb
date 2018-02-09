
        
          url = File.dirname(url)
  url == FORWARD_SLASH ? url : '#{url}/'
end
    
    def source_dir(*subdirs)
  test_dir('source', *subdirs)
end
    
          new_theme_name = args.join('_')
      theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
      if theme.path.exist?
        Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.'
      end
    
      def find_matching_tag(tag)
    if key?(tag)
      tag
    else
      find_altivec_tag(tag) || find_or_later_tag(tag)
    end
  end
    
          plist_filename = if f.plist
        f.plist_path.basename
      else
        File.basename Dir['#{keg}/*.plist'].first
      end
      plist_link = '#{destination}/#{plist_filename}'
      plist_domain = f.plist_path.basename('.plist')
      destination_path = Pathname.new File.expand_path destination
      plist_path = destination_path/plist_filename
    
      def snow_leopard_64?
    MacOS.prefer_64_bit?
  end
end
    
        process_font_assets
    process_stylesheet_assets
    process_javascript_assets
    store_version
  end
    
        # unindent by n spaces
    def unindent(txt, n = 2)
      txt.gsub /^[ ]{#{n}}/, ''
    end
    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end