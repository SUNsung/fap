
        
                inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        # this is not really the command that would have been executed, but a 'fabricated' representation for tests (by Actions.sh) that includes both command that would have been run
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
            expect(result[1]).to start_with('security set-keychain-settings')
        expect(result[1]).to include('-t 300')
        expect(result[1]).to_not(include('-l'))
        expect(result[1]).to_not(include('-u'))
        expect(result[1]).to include('~/Library/Keychains/test.keychain')
        expect(result[2]).to start_with('security list-keychains -s')
        expect(result[2]).to end_with(File.expand_path('~/Library/Keychains/test.keychain').to_s)
      end
    
            Fastlane::FastFile.new.parse('lane :test do
          import_certificate ({
            keychain_name: '#{keychain}',
            keychain_password: '#{password}',
            certificate_path: '#{cert_name}',
            certificate_password: '#{password}'
          })
        end').runner.execute(:test)
      end
    
                result = Fastlane::FastFile.new.parse('lane :test do
              swiftlint(ignore_exit_status: true)
            end').runner.execute(:test)
          end
        end
    
      it 'returns true when passed ?d if the argument is a directory' do
    Kernel.test(?d, @dir).should == true
  end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
      # set version
  content.sub! /(s\.version.*=\s+).*/, '\\1\'#{Rack::Protection::VERSION}\''
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to eq('connect-src 'self'; default-src none; img-src 'self'; report-uri /my_amazing_csp_report_parser; script-src 'self'; style-src 'self'')
  end
    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
          def use_identicon
        @wiki.user_icons == 'identicon'
      end
    
          def has_path
        !@path.nil?
      end
    
    $contexts = []
    
      test 'previews content on the first page of an empty wiki' do
    @path = cloned_testpath('examples/empty.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {})
    post '/preview', :content => 'abc', :format => 'markdown'
    assert last_response.ok?
  end
    
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