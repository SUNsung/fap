
        
            def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
    package = FPM::Package::Dir.new
    
        if info.include?('repository')
      self.url = info['repository']['url']
    else
      self.url = 'https://npmjs.org/package/#{self.name}'
    end
    
      def output(output_path)
    create_scripts
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end