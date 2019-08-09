
        
          def open_dry_run_modal(agent)
    visit edit_agent_path(agent)
    click_on('Dry Run')
    expect(page).to have_text('Event to send')
  end
    
        it 'in the future' do
      expect(relative_distance_of_time_in_words(Time.now+5.minutes)).to eq('in 5m')
    end
  end
end

    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
            describe 'with control links' do
          it 'creates the links' do
            valid_parsed_data[:control_links] = [
              { :controller => 1, :control_target => 0 }
            ]
    
      describe '#recursively_interpolate_jsonpaths' do
    it 'interpolates all string values in a structure' do
      struct = {
        :int => 5,
        :string => 'this <escape $.works>',
        :array => ['<works>', 'now', '<$.there.world>'],
        :deep => {
          :string => 'hello <there.world>',
          :hello => :world
        }
      }
      data = { :there => { :world => 'WORLD' }, :works => 'should work' }
      expect(Utils.recursively_interpolate_jsonpaths(struct, data)).to eq({
        :int => 5,
        :string => 'this should+work',
        :array => ['should work', 'now', 'WORLD'],
        :deep => {
          :string => 'hello WORLD',
          :hello => :world
        }
      })
    end
  end
    
        it 'should raise error when response says unauthorized' do
      stub(HTTParty).post { {'Response' => 'Not authorized'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Not authorized/)
    end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
            selected_modules.each do |m|
          mod = Devise::Models.const_get(m.to_s.classify)
    
          def timeout_in
        self.class.timeout_in
      end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
          def has_sidebar
        @sidebar = (@page.sidebar || false) if @sidebar.nil? && @page
        !!@sidebar
      end
    
        assert_no_match /Edit/, last_response.body, ''Edit' link not blocked in history template'
    
    opts = OptionParser.new do |opts|
  # define program name (although this defaults to the name of the file, just in case...)
  opts.program_name = 'gollum'
    
  # set basic info for the '--help' command (options will be appended automatically from the below definitions)
  opts.banner = '
  Gollum is a multi-format Wiki Engine/API/Frontend.
    
  Usage:
      gollum [options] [git-repo]
    
  Arguments:
      [git-repo]                     Path to the git repository being served. If not specified, current working directory is used.
  
  Notes:
      Paths for all options are relative to <git-repo> unless absolute.
      This message is only a basic description. For more information, please visit:
          https://github.com/gollum/gollum
  
  OPTIONS'
  
  # define gollum options  
  opts.separator ''
  opts.separator '  Major:'
  
  opts.on('-h', '--host [HOST]', 'Specify the hostname or IP address to listen on. Default: '0.0.0.0'.') do |host|
    options[:bind] = host
  end
  opts.on('-p', '--port [PORT]', 'Specify the port to bind Gollum with. Default: '4567'.') do |port|
    begin
      # don't use 'port.to_i' here... it doesn't raise errors which might result in a nice confusion later on
      options[:port] = Integer(port)
    rescue ArgumentError
      puts 'Error: '#{port}' is not a valid port number.'
      exit 1
    end
  end
  opts.on('-c', '--config [FILE]', 'Specify path to the Gollum's configuration file.') do |file|
    options[:config] = file
  end
  opts.on('-r', '--ref [REF]', 'Specify the branch to serve. Default: 'master'.') do |ref|
    wiki_options[:ref] = ref
  end
  opts.on('-a', '--adapter [ADAPTER]', 'Launch Gollum using a specific git adapter. Default: 'grit'.') do |adapter|
    Gollum::GIT_ADAPTER = adapter
  end
  opts.on('--bare', 'Declare '<git-repo>' to be bare. This is only necessary when using the grit adapter.') do
    wiki_options[:repo_is_bare] = true
  end
  opts.on('-b', '--base-path [PATH]', 'Specify the leading portion of all Gollum URLs (path info). Default: '/'.',
    'Example: setting this to '/wiki' will make the wiki accessible under 'http://localhost:4567/wiki/'.') do |base_path|
      
    # first trim a leading slash, if any
    base_path.sub!(/^\/+/, '')
    
      end
end

    
    # Set ruby to UTF-8 mode
# This is required for Ruby 1.8.7 which gollum still supports.
$KCODE = 'U' if RUBY_VERSION[0, 3] == '1.8'