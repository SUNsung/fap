
        
              @actual_array = @tutorials_collection.docs.map(&:relative_path)
    end
    
          Jekyll.logger.info 'Total allocated: #{total_allocated_output} (#{report.total_allocated} objects)'.cyan
      Jekyll.logger.info 'Total retained:  #{total_retained_output} (#{report.total_retained} objects)'.cyan
    
    DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
    STDOUT.sync = true
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
      # Get the title for the page.
  #
  # @param [Middleman::Page] page
  #
  # @return [String]
  def title_for(page)
    if page && page.data.page_title
      return '#{page.data.page_title} - Vagrant by HashiCorp'
    end
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
          env[:box_url] = tf.path
      expect(box_collection).to receive(:find).
        with('foo/bar', 'virtualbox', '0.7').and_return(box)
      expect(box_collection).to receive(:add).never
      expect(app).to receive(:call).never
    
        # Initializes Bundler and the various gem paths so that we can begin
    # loading gems.
    def init!(plugins, repair=false)
      if !@initial_specifications
        @initial_specifications = Gem::Specification.find_all{true}
      else
        Gem::Specification.all = @initial_specifications
        Gem::Specification.reset
      end
    
            entries = []
        prune   = []
        @env.machine_index.each do |entry|
          # If we're pruning and this entry is invalid, skip it
          # and prune it later.
          if options[:prune] && !entry.valid?(@env.home_path)
            prune << entry
            next
          end
    
          # Valid entry because the machine does exist
      entryC_env = isolated_environment
      entryC_env.vagrantfile('')
      entryC_venv = entryC_env.create_vagrant_env
      entryC_machine = entryC_venv.machine(entryC_venv.machine_names[0], :dummy)
      entryC_machine.id = 'foo'
      entryC = new_entry(entryC_machine.name)
      entryC.provider = 'dummy'
      entryC.vagrantfile_path = entryC_env.workdir
      locked = iso_env.machine_index.set(entryC)
      iso_env.machine_index.release(locked)
    
        $stderr.puts 'ok'
  rescue => err
    $stderr.puts 'fail (' + err.type.to_s + ')'
    $stderr.puts err.message
    $stderr.puts err.backtrace
    $stderr.puts
  end
end

    
      # This is especially important for JRuby, since eof? there
  # is more than just a simple accessor.
  it 'does not affect the reading data' do
    gz = Zlib::GzipReader.new @io
    0.upto(9) do |i|
      gz.eof?.should be_false
      gz.read(1).should == @data[i, 1]
    end
    gz.eof?.should be_true
    gz.read().should == ''
    gz.eof?.should be_true
  end
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not insert anything into the stream' do
          @gz.ungetbyte nil
          @gz.read.should == 'abcde'
        end
    
    describe 'GzipWriter#write' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new ''.b
  end
    
        @inflator.finish do |chunk|
      @chunks << chunk
    end
  end
    
    Then(/^the default stage files are created$/) do
  staging = TestApp.test_app_path.join('config/deploy/staging.rb')
  production = TestApp.test_app_path.join('config/deploy/production.rb')
  expect(File.exist?(staging)).to be true
  expect(File.exist?(production)).to be true
end
    
          ServerKey = Struct.new(:hostname, :port)
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end
    
      def self.send_to_buffer(text, buffer_profile_id_code)
    client = Buffer::Client.new(ApplicationConfig['BUFFER_ACCESS_TOKEN'])
    client.create_update(
      body: {
        text:
        text,
        profile_ids: [
          buffer_profile_id_code,
        ]
      },
    )
  end
    
      private