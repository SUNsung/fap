
        
              it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
          it 'properly removes new lines of the build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: '24\n', xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
        options[:attribution] = <<-HTML
      &copy; Joyent, Inc. and other Node contributors<br>
      Licensed under the MIT License.<br>
      Node.js is a trademark of Joyent, Inc. and is used with its permission.<br>
      We are not endorsed by or affiliated with Joyent.
    HTML
    
        options[:fix_urls] = ->(url) do
      url.sub! %r{(#{Rust.base_url}.+/)\z}, '\1index.html'
      url.sub! '/unicode/u_str', '/unicode/str/'
      url
    end
    
        def as_json
      @pages
    end
    
      def test_truncate_rbuf
    Tempfile.create('test-truncate') {|f|
      f.puts 'abc'
      f.puts 'def'
      f.rewind
      assert_equal('abc\n', f.gets)
      f.truncate(3)
      assert_equal(nil, f.gets, '[ruby-dev:24197]')
    }
  end
    
        set = Set['1',nil,'2',nil,'0','1',false]
    assert_equal(true, set.include?(nil))
    assert_equal(true, set.include?(false))
    assert_equal(true, set.include?('1'))
    assert_equal(false, set.include?(0))
    assert_equal(false, set.include?(true))
  end
    
    describe :string_unpack_unicode, shared: true do
  it 'decodes Unicode codepoints as ASCII values' do
    [ ['\x00',      [0]],
      ['\x01',      [1]],
      ['\x08',      [8]],
      ['\x0f',      [15]],
      ['\x18',      [24]],
      ['\x1f',      [31]],
      ['\x7f',      [127]],
      ['\xc2\x80',  [128]],
      ['\xc2\x81',  [129]],
      ['\xc3\xbf',  [255]]
    ].should be_computed_by(:unpack, 'U')
  end
    
        respond_to do |format|
      if @book.save
        format.html { redirect_to @book, notice: 'Book was successfully created.' }
        format.json { render :show, status: :created, location: @book }
      else
        format.html { render :new }
        format.json { render json: @book.errors, status: :unprocessable_entity }
      end
    end
  end
    
            # @param annotated_source [String] string passed to the matchers
        #
        # Separates annotation lines from source lines. Tracks the real
        # source line number that each annotation corresponds to.
        #
        # @return [AnnotatedSource]
        def self.parse(annotated_source)
          source      = []
          annotations = []
    
                  include Something
              # Comment
              def do_something; end
    
        execute 'ensure-sidekiq-is-setup-with-monit' do 
      command %Q{ 
        monit reload 
      } 
    end
    
          def create_worker_spec
        template_file = File.join(
            'spec/workers',
            class_path,
            '#{file_name}_worker_spec.rb'
        )
        template 'worker_spec.rb.erb', template_file
      end
    
        module ActionMailer
      def sidekiq_delay(options={})
        Proxy.new(DelayedMailer, self, options)
      end
      def sidekiq_delay_for(interval, options={})
        Proxy.new(DelayedMailer, self, options.merge('at' => Time.now.to_f + interval.to_f))
      end
      def sidekiq_delay_until(timestamp, options={})
        Proxy.new(DelayedMailer, self, options.merge('at' => timestamp.to_f))
      end
      alias_method :delay, :sidekiq_delay
      alias_method :delay_for, :sidekiq_delay_for
      alias_method :delay_until, :sidekiq_delay_until
    end
    
      # Print deprecation notices to the Rails logger.
  config.active_support.deprecation = :log