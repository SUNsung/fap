
        
              def initialize(string)
        @value = string
      end
    
              if argv.length == 2
            # @deprecated
            @env.ui.warn('WARNING: The second argument to `vagrant box remove`')
            @env.ui.warn('is deprecated. Please use the --provider flag. This')
            @env.ui.warn('feature will stop working in the next version.')
            options[:provider] = argv[1]
          end
    
              box_name     = argv[0]
          box_provider = argv[1].to_sym
          box_version  = argv[2]
    
      def test_each_char_extended_file
    [nil, {:textmode=>true}, {:binmode=>true}].each do |mode|
      Tempfile.create('test-extended-file', mode) {|f|
        assert_nil(f.getc)
        f.print 'a'
        f.rewind
        result = []
        f.each_char {|b| result << b }
        assert_equal([?a], result, 'mode = <#{mode}>')
      }
    end
  end
    
      def hash      # :nodoc:
    @hash.hash
  end
    
    class TC_Enumerable < Test::Unit::TestCase
  def test_to_set
    ary = [2,5,4,3,2,1,3]
    
      it 'kills sleeping thread' do
    sleeping_thread = Thread.new do
      sleep
      ScratchPad.record :after_sleep
    end
    Thread.pass while sleeping_thread.status and sleeping_thread.status != 'sleep'
    sleeping_thread.send(@method)
    sleeping_thread.join
    ScratchPad.recorded.should == nil
  end
    
      it 'handles bad leap seconds by carrying values forward' do
    with_timezone 'UTC' do
      time = Time.send(@method, 2017, 7, 5, 23, 59, 60)
      time.sec.should == 0
      time.min.should == 0
      time.hour.should == 0
      time.day.should == 6
      time.month.should == 7
    end
  end
    
    Print a list of currently running Applications and associated
Bundle IDs, which may be useful in a Cask uninstall stanza, eg
    
    class Profile
  def pod_bin
    File.expand_path('../pod', __FILE__)
  end
    
          def executable_path
        <<-EOS
### Installation Source
    
            # Clones the template from the remote in the working directory using
        # the name of the Pod.
        #
        # @return [void]
        #
        def clone_template
          UI.section('Cloning `#{template_repo_url}` into `#{@name}`.') do
            git! ['clone', template_repo_url, @name]
          end
        end
    
          def update_available?(gem_name)
        latest = Gem.latest_version_for(gem_name)
        return false if latest.nil?
        latest > installed_gem_version(gem_name)
      end
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
            #target = $LOADED_FEATURES.grep(/#{path}/).first
        #puts path
        #puts caller.map { |c| '  #{c}' }.join('\n')
        #fontsize = [10, duration * 48].max
        puts '#{duration},#{path},#{source}'
      end
      #puts caller.map { |c| ' => #{c}' }.join('\n')
    end