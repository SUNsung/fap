
        
          def execute
    Gitlab::Metrics.measure(:import_export_clean_up) do
      return unless File.directory?(path)
    
        if params[:sort].present?
      attribute, direction = params[:sort].downcase.split('.')
      unless valid_sorts.include?(attribute)
        attribute, direction = default.to_a.first
      end
    else
      attribute, direction = default.to_a.first
    end
    
      def test_bom_32le
    assert_bom(['\xFF\xFE\0', '\0'], __method__)
  end
    
      def check(as, bs)
    if IGNORE_CASE
      as = as.map {|xs| xs.map {|x| x.upcase } }
      bs = bs.map {|xs| xs.map {|x| x.upcase } }
    end
    assert_equal(as.sort, bs.sort)
  end
    
      it 'decodes past NULL bytes when passed the '*' modifier' do
    'a\x00b c'.unpack(unpack_format('*')).should == ['a\x00b c']
  end
end

    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
        run.should be_true
  end
    
          output = input_path if @options[:in_place]
      write_output(out, output)
    rescue Sass::SyntaxError => e
      raise e if @options[:trace]
      file = ' of #{e.sass_filename}' if e.sass_filename
      raise 'Error on line #{e.sass_line}#{file}: #{e.message}\n  Use --trace for backtrace'
    rescue LoadError => err
      handle_load_error(err)
    end
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
      # Converts an interpolation array to source.
  #
  # @param interp [Array<String, Sass::Script::Tree::Node>] The interpolation array to convert.
  # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
  # @return [String]
  def self._interp_to_src(interp, options)
    interp.map {|r| r.is_a?(String) ? r : r.to_sass(options)}.join
  end
end

    
      config = Merb::Plugins.config[:sass] || Merb::Plugins.config['sass'] || {}
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
    end
    
          unless file.file?
        return 'File #{file} could not be found'
      end