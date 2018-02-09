
        
          def create
    return render_404 unless can_read?(resource)
    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
      it 'overrides the rake method, and sets the sshkit_backend to SSHKit::Backend::Printer' do
    capture_io do
      flags '--dry-run', '-n'
    end
    sshkit_backend = Capistrano::Configuration.fetch(:sshkit_backend)
    expect(sshkit_backend).to eq(SSHKit::Backend::Printer)
  end
    
      context 'with default reaction' do
    before(:each) do
      mock_app do
        use Rack::Protection::CookieTossing
        run DummyApp
      end
    end
    
      it 'should not set the X-Frame-Options for other content types' do
    expect(get('/', {}, 'wants' => 'text/foo').headers['X-Frame-Options']).to be_nil
  end
    
      if ''.respond_to?(:encoding)  # Ruby 1.9+ M17N
    context 'PATH_INFO's encoding' do
      before do
        @app = Rack::Protection::PathTraversal.new(proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO'].encoding.to_s]] })
      end
    
      it 'passes errors through if :reaction => :report is used' do
    mock_app do
      use Rack::Protection, :reaction => :report
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['protection.failed'].to_s]] }
    end
    
      it 'accepts requests with the same Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    expect(session).not_to be_empty
  end
    
            # This is a convenient way to check whether the variable is used
        # in its entire variable lifetime.
        # For more precise usage check, refer Assignment#used?.
        #
        # Once the variable is captured by a block, we have no idea
        # when, where and how many times the block would be invoked
        # and it means we cannot track the usage of the variable.
        # So we consider it's used to suppress false positive offenses.
        def used?
          @captured_by_block || referenced?
        end
    
            def autocorrect(node)
          redundant_regex?(node) do |receiver, regex_str|
            receiver, regex_str = regex_str, receiver if receiver.is_a?(String)
            regex_str = regex_str[2..-1] # drop \A anchor
            regex_str = interpret_string_escapes(regex_str)
    
                  add_offense(condition)
            end
    
            def on_if(node)
          return unless nested_variable_comparison?(node.condition)
          add_offense(node)
        end
    
              arguments.each_with_index do |argument, index|
            optarg_positions << index if argument.optarg_type?
            arg_positions << index if argument.arg_type?
          end
    
      context 'called with three styles' do
    it 'applies second style to left and right' do
      rule = 'border-style: dashed double solid'
    
    describe 'buttons' do
  before(:all) do
    ParserSupport.parse_file('library/buttons')