
        
                  theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
          command_return = ActionCommandReturn.new(
        return_value: action_return,
        return_value_type: action_class_ref.return_type,
        closure_argument_value: closure_argument_value
      )
      return command_return
    end
    
          def self.category
        :source_control
      end
    
          it 'sets the configuration to Release' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              configuration: 'Release'
            )
          end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path[0]} #{path[1]}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path})
          end').runner.execute(:test)
        end
      end
    
    # test monkey patched method on both (simulated) OSes
describe 'monkey patch of String.shellescape (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        it 'strips leading and trailing dashes' do
      expect(AgentsExporter.new(:name => ',foo,').filename).to eq('foo.json')
    end
    
      describe 'helpers' do
    it 'should generate a correct request options hash' do
      expect(@checker.send(:request_options)).to eq({headers: {'User-Agent' => 'Huginn - https://github.com/huginn/huginn', 'Authorization' => 'Bearer '1234token''}})
    end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V1 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
        def __internal_state
      {
        items: @items,
        results_cache: @results_cache
      }
    end
  end
end

    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
    # define charCodeAt on String
class String
  def charCodeAt(k)
    # use scan, nil check, and unpack instead of ord for 1.8
    # 1.9 can simply use self[k].ord
    # http://stackoverflow.com/questions/7793177/split-utf8-string-regardless-of-ruby-version
    c = self.scan(/./mu)[k]
    return nil if c.nil?
    c.unpack('U')[0]
  end
end
    
          def page_name
        @name.gsub('-', ' ')
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
    
          def previous_link
      end
    
      test 'create sets the correct path for a relative path subdirectory with the page file directory set' do
    Precious::App.set(:wiki_options, { :page_file_dir => 'foo' })
    dir  = 'bardir'
    name = '#{dir}/baz'
    get '/create/foo/#{name}'
    assert_match(/\/#{dir}/, last_response.body)
    assert_no_match(/[^\/]#{dir}/, last_response.body)
    # reset page_file_dir
    Precious::App.set(:wiki_options, { :page_file_dir => nil })
  end
    
        # make a backup of the option and sanitize it
    base_path_original = base_path.dup
    base_path = CGI.escape(base_path)
    
    # then let the user know if we changed the URL
    unless base_path_original == base_path
      puts <<MSG
Warning: your base-path has been sanitized:
  - original: '#{base_path_original}'
  - sanitized: '#{base_path}'
MSG
    end
      
    # and finally, let others enjoy our hard work:
    wiki_options[:base_path] = base_path
  end
  opts.on('--page-file-dir [PATH]', 'Specify the subdirectory for all pages. Default: repository root.', 
    'Example: setting this to 'pages' will make Gollum serve only pages at '<git-repo>/pages/*'.') do |path|
    wiki_options[:page_file_dir] = path
  end
  opts.on('--css', 'Inject custom CSS into each page. The '<git-repo>/custom.css' file is used (must be committed).') do
    wiki_options[:css] = true
  end
  opts.on('--js', 'Inject custom JavaScript into each page. The '<git-repo>/custom.js' file is used (must be committed).') do
    wiki_options[:js] = true
  end
  opts.on('--emoji', 'Parse and interpret emoji tags (e.g. :heart:).') do
    wiki_options[:emoji] = true
  end
  opts.on('--no-edit', 'Disable the feature of editing pages.')  do
    wiki_options[:allow_editing] = false
  end
  opts.on('--live-preview', 'Enable the live preview feature in page editor.') do
    wiki_options[:live_preview] = true
  end
  opts.on('--no-live-preview', 'Disable the live preview feature in page editor.') do
    wiki_options[:live_preview] = false
  end
  opts.on('--allow-uploads [MODE]', [:dir, :page], 'Enable file uploads.',
    'If set to 'dir', Gollum will store all uploads in the '<git-repo>/uploads/' directory.',
    'If set to 'page', Gollum will store each upload at the currently edited page.') do |mode|
    wiki_options[:allow_uploads]    = true
    wiki_options[:per_page_uploads] = true if mode == :page
  end
  opts.on('--mathjax', 'Enable MathJax (renders mathematical equations).',
    'By default, uses the 'TeX-AMS-MML_HTMLorMML' config with the 'autoload-all' extension.') do
    wiki_options[:mathjax] = true
  end
  opts.on('--irb', 'Launch Gollum in 'console mode', with a predefined API.') do
    options[:irb] = true
  end
  
  opts.separator ''
  opts.separator '  Minor:'
  
  opts.on('--h1-title', 'Use the first '<h1>' as page title.') do
    wiki_options[:h1_title] = true
  end
  opts.on('--show-all', 'Also show files in the file view. By default, only valid pages are shown.') do
    wiki_options[:show_all] = true
  end
  opts.on('--collapse-tree', 'Collapse the tree, when file view is opened. By default, the tree is expanded.') do
    wiki_options[:collapse_tree] = true
  end
  opts.on('--user-icons [MODE]', [:gravatar, :identicon, :none], 'Use specific user-icons for history view.',
    'Can be set to 'gravatar', 'identicon' or 'none'. Default: 'none'.') do |mode|
    wiki_options[:user_icons] = mode
  end
  opts.on('--mathjax-config [FILE]', 'Specify path to a custom MathJax configuration.',
    'If not specified, uses the '<git-repo>/mathjax.config.js' file.') do |file|
    wiki_options[:mathjax_config] = file || 'mathjax.config.js'
  end
  opts.on('--plantuml-url [URL]', 'Sets the PlantUML server endpoint.') do |url|
    wiki_options[:plantuml_url] = url
  end
  opts.on('--template-dir [PATH]', 'Specify custom mustache template directory.') do |path|
    wiki_options[:template_dir] = path
  end
  
  opts.separator ''
  opts.separator '  Common:'
  
  opts.on('--help', 'Display this message.') do
    puts opts
    exit 0
  end
  opts.on('--version', 'Display the current version of Gollum.') do
    puts 'Gollum ' + Gollum::VERSION
    exit 0
  end
  
  opts.separator ''
end