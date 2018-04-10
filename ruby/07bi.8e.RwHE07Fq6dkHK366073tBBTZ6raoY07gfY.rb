
        
          def execute
    Gitlab::Metrics.measure(:import_export_clean_up) do
      return unless File.directory?(path)
    
      def evernote_oauth_token
    service && service.token
  end
end

    
      def set_table_sort(sort_options)
    valid_sorts = sort_options[:sorts] or raise ArgumentError.new('You must specify :sorts as an array of valid sort attributes.')
    default = sort_options[:default] || { valid_sorts.first.to_sym => :desc }
    
      def index
    set_table_sort sorts: %w[provider name global], default: { provider: :asc }
    
      def update
    @user_credential = current_user.user_credentials.find(params[:id])
    
          # This inserts a block with the given key and value.
      #
      # @param [String] key
      # @param [String] value
      def insert(key, value)
        # Insert the new block into the value
        new_block = <<BLOCK
# VAGRANT-BEGIN: #{key}
#{value.strip}
# VAGRANT-END: #{key}
BLOCK
    
              opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box remove <name>'
            o.separator ''
            o.separator 'Options:'
            o.separator ''
    
            # Parse the options
        argv = parse_options(opts)
        return if !argv
        if argv.length < 2
          raise Vagrant::Errors::CLIInvalidUsage,
            help: opts.help.chomp
        end
    
        prune
  end
    
          it 'reports that 32-bit PowerPC machines can't run ppc64 executables' do
        allow(Hardware::CPU).to receive(:type).and_return :ppc
        allow(Hardware::CPU).to receive(:bits).and_return 32
        expect(Hardware::CPU.can_run?(:ppc64)).to be false
      end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
            post '/', :file => Rack::Test::UploadedFile.new(temp_file.path), :other => '<bar>'
        expect(body).to eq('_escaped_params_tmp_file\nhello world\n&lt;bar&gt;')
      ensure
        File.unlink(temp_file.path)
      end
    end
  end
end

    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
    end
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
      it 'accepts requests with the same Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    expect(session).not_to be_empty
  end
    
        expect(get('/..', :foo => '<bar>')).to be_ok
  end