
        
            def set_after_all(platform, block)
      unless after_all_blocks[platform].nil?
        UI.error('You defined multiple `after_all` blocks in your `Fastfile`. The last one being set will be used.')
      end
      after_all_blocks[platform] = block
    end
    
              expect(result).to eq('swiftlint lint')
        end
      end
    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
    # test monkey patched method on both (simulated) OSes
describe 'monkey patch of String.shellescape (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
        SCHEME_RGX = /\A[^:\/?#]+:/
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def initialize(content)
      @content = content
      @html = document? ? parse_as_document : parse_as_fragment
    end
    
        def format_path(path)
      path.to_s.remove File.join(File.expand_path('.'), '')
    end
    
            css('.openParens').each do |node|
          node.parent.name = 'pre'
          node.parent.content = node.parent.css('code, pre').map(&:content).join('\n')
        end
    
          def include_default_entry?
        INDEX.add?([name, type].join(';')) ? true : false # ¯\_(ツ)_/¯
      end
    
      it 'raises a TypeError when passed nil' do
    lambda { sleep(nil)   }.should raise_error(TypeError)
  end
    
      ruby_version_is '2.6' do
    it 'raises RuntimeError when `exception: true` is given and the command exits with a non-zero exit status' do
      lambda { @object.system(ruby_cmd('exit 1'), exception: true) }.should raise_error(RuntimeError)
    end
    
      it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end
    
        trace_var :$Kernel_trace_var_global, proc {|value| captured = value}
    
    When /^I (?:sign|log) in as '([^']*)'( on the mobile website)?$/ do |email, mobile|
  @me = User.find_by_email(email)
  @me.password ||= 'password'
  automatic_login
  confirm_login mobile
end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
          it 'should be catched when it means that the target is not found' do
        post :create, params: {post_id: -1}, format: :json
        expect(response.code).to eq('422')
      end
    
    # Lazily initialized.
    @@hexCharCodeArray = 0;
    
          def format
        @format = (@page.format || false) if @format.nil? && @page
        @format.to_s.downcase
      end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
    def bump_version
  old_file = File.read('lib/#{name}.rb')
  old_version_line = old_file[/^\s*VERSION\s*=\s*.*/]
  new_version = next_version
  # replace first match of old vesion with new version
  old_file.sub!(old_version_line, '  VERSION = '#{new_version}'')
    
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
    
        def forbid(msg = 'Forbidden. This wiki is set to no-edit mode.')
      @message = msg
      status 403
      halt mustache :error
    end