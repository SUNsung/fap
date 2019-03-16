
        
            def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def load_capybara_selenium
      require 'capybara/dsl'
      require 'selenium/webdriver'
      Capybara.register_driver :chrome do |app|
        options = Selenium::WebDriver::Chrome::Options.new(args: %w[headless disable-gpu])
        Capybara::Selenium::Driver.new(app, browser: :chrome, options: options)
      end
      Capybara.javascript_driver = :chrome
      Capybara.current_driver = :chrome
      Capybara.run_server = false
      Capybara
    end
    
            css('.l-sub-section', '.alert', '.banner').each do |node|
          node.name = 'blockquote'
        end
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
    
        desc 'Release all gems as packages'
    task :all => [:test, :commit_version] + GEMS_AND_ROOT_DIRECTORIES.keys
  end
end

    
      at_exit { Application.run! if $!.nil? && Application.run? }
end
    
          def masked_token?(token)
        token.length == TOKEN_LENGTH * 2
      end
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
        EMPTY_TYPE = 'inode/x-empty'
    SENSIBLE_DEFAULT = 'application/octet-stream'
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end
    
        # Returns a the attachment hash.  See Paperclip::Attachment#hash_key for
    # more details.
    def hash attachment=nil, style_name=nil
      if attachment && style_name
        attachment.hash_key(style_name)
      else
        super()
      end
    end
    
        bin_dir = attributes[:pear_bin_dir] || 'usr/bin'
    logger.info('Setting bin_dir', :bin_dir => bin_dir)
    safesystem('pear', '-c', config, 'config-set', 'bin_dir', bin_dir)
    
        if i < args.size
      if args[i].kind_of?(Hash)
        opts = Hash[args[i].map {|k,v| [k.to_sym, v]} ]
        i += 1
      end
    else
      opts = Hash[]
    end