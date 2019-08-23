
        
        def normalize_bullets(markdown)
  markdown.gsub(%r!\n\s{2}\*{1}!, '\n-')
end
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
        #   it 'can add a new trailer' do
    #     # remove existing
    #     version.upload_trailer!(nil, 'English', 'ipad')
    
          def update_podspec(version = nil)
        new_version = version || @version_value
        updated_podspec_content = @podspec_content.gsub(@version_regex, '#{@version_match[:begin]}#{new_version}#{@version_match[:end]}')
    
            it 'returns the current version once parsed with longer appendix' do
          test_content = 'spec.version = '1.3.2.4.5''
          result = @version_podspec_file.parse(test_content)
          expect(result).to eq('1.3.2.4.5')
          expect(@version_podspec_file.version_value).to eq('1.3.2.4.5')
          expect(@version_podspec_file.version_match[:major]).to eq('1')
          expect(@version_podspec_file.version_match[:minor]).to eq('3')
          expect(@version_podspec_file.version_match[:patch]).to eq('2')
          expect(@version_podspec_file.version_match[:appendix]).to eq('.4.5')
        end
      end
    
            # to support frozen strings (e.g. ENV variables) too
        # we have to dupe the value
        # in < Ruby 2.4.0 `.dup` is not support by boolean values
        # and there is no good way to check if a class actually
        # responds to `dup`, so we have to rescue the exception
        begin
          value = value.dup
        rescue TypeError
          # Nothing specific to do here, if we can't dupe, we just
          # deal with it (boolean values can't be from env variables anyway)
        end
        self.options[method_sym] = value
      else
        # We can't set this value, maybe the tool using this configuration system has its own
        # way of handling this block, as this might be a special block (e.g. ipa block) that's only
        # executed on demand
        if @block_for_missing
          @block_for_missing.call(method_sym, arguments, block)
        else
          self.options[method_sym] = '' # important, since this will raise a good exception for free
        end
      end
    end
    
          def pipe(language: nil, locale: nil, log_path: nil)
        tee_command = ['tee']
        tee_command << '-a' if log_path && File.exist?(log_path)
        tee_command << log_path.shellescape if log_path
    
          if self.mac?
        # First check for manually install iTMSTransporter
        user_local_itms_path = '/usr/local/itms'
        return user_local_itms_path if File.exist?(user_local_itms_path)
    
            version_podspec_file = Helper::PodspecHelper.new(podspec_path, params[:require_variable_prefix])
    
        def to_a
      @filters.dup
    end
    
            css('h1:not(:first-child)').each do |node|
          node.name = 'h2'
        end unless at_css('h2')
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
      it 'calls the given block for each byte in the stream, passing the byte as an argument' do
    gz = Zlib::GzipReader.new @io
    
      it 'returns false when at EOF when there's data left in the buffer to read' do
    gz = Zlib::GzipReader.new @io
    gz.read(9)
    gz.eof?.should be_false
    gz.read
    gz.eof?.should be_true
  end
    
    describe 'GzipReader#getc' do
    
      it 'returns the position' do
    gz = Zlib::GzipReader.new @io
    
      it 'invokes seek method on the associated IO object' do
    # first, prepare the mock object:
    (obj = mock('io')).should_receive(:get_io).any_number_of_times.and_return(@io)
    def obj.read(args); get_io.read(args); end
    def obj.seek(pos, whence = 0)
      ScratchPad.record :seek
      get_io.seek(pos, whence)
    end
    
    describe :gzipreader_each, shared: true do
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not prepend anything to the stream' do
          @gz.ungetbyte nil
          @gz.read.should == '12345abcde'
        end
    
      namespace :symlink do
    desc 'Symlink release to current'
    task :release do
      on release_roles :all do
        tmp_current_path = release_path.parent.join(current_path.basename)
        execute :ln, '-s', release_path, tmp_current_path
        execute :mv, tmp_current_path, current_path.parent
      end
    end
    
    Then(/^the invalid (.+) release is ignored$/) do |filename|
  test = 'ls -g #{TestApp.releases_path} | grep #{filename}'
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
        def set_if_empty(key, value=nil, &block)
      set(key, value, &block) unless keys.include?(key)
    end
    
          def call
        ask_question
        value_or_default
      end
    
            # rubocop:disable Style/MethodMissing
        def method_missing(key, value=nil)
          if value
            set(lvalue(key), value)
          else
            fetch(key)
          end
        end
        # rubocop:enable Style/MethodMissing
    
          # Internal use only.
      def peek(key, default=nil, &block)
        value = fetch_for(key, default, &block)
        while callable_without_parameters?(value)
          value = (values[key] = value.call)
        end
        value
      end