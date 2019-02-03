
        
                default_connectors = {
          words_connector: ', ',
          two_words_connector: ' and ',
          last_word_connector: ', and '
        }
        if defined?(I18n)
          i18n_connectors = I18n.translate(:'support.array', locale: options[:locale], default: {})
          default_connectors.merge!(i18n_connectors)
        end
        options = default_connectors.merge!(options)
    
              def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
        initializer 'action_view.default_enforce_utf8' do |app|
      ActiveSupport.on_load(:action_view) do
        default_enforce_utf8 = app.config.action_view.delete(:default_enforce_utf8)
        unless default_enforce_utf8.nil?
          ActionView::Helpers::FormTagHelper.default_enforce_utf8 = default_enforce_utf8
        end
      end
    end
    
    #
    
              # WebSockets requests will have a Connection: Upgrade header
          if parser.http_method != 'GET' || parser.upgrade?
            super
          elsif parser.request_url =~ %r!^\/livereload.js!
            headers = [
              'HTTP/1.1 200 OK',
              'Content-Type: application/javascript',
              'Content-Length: #{reload_size}',
              '',
              '',
            ].join('\r\n')
            send_data(headers)
    
    module Gitlab
  module GithubImport
    module Caching
      # The default timeout of the cache keys.
      TIMEOUT = 24.hours.to_i
    
            def collection_method
          :lfs_objects
        end
    
          def action_for_rails(env)
        controller = env[CONTROLLER_KEY]
        action = '#{controller.class.name}##{controller.action_name}'
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
          it 'should be invalid when the referenced url doesn't contain a scenario' do
        stub_request(:get, 'http://example.com/scenarios/1/export.json').to_return(:status => 200, :body => invalid_data)
        subject.url = 'http://example.com/scenarios/1/export.json'
        expect(subject).not_to be_valid
        expect(subject.errors[:base]).to include('The provided data does not appear to be a valid Scenario.')
      end
    
    describe AgentRunner do
  context 'without traps' do
    before do
      stub.instance_of(Rufus::Scheduler).every
      stub.instance_of(AgentRunner).set_traps
      @agent_runner = AgentRunner.new
    end
    
          def header
        if @header.nil?
          if page = @page.header
            @header = page.text_data
          else
            @header = false
          end
        end
        @header
      end
    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@wiki.user_icons}')
        else
          super
        end
      end
    
          def has_footer
        if @footer
          @footer.formatted_data.strip.empty? ? false : true
        else
          @footer = (@page.footer || false)
          !!@footer
        end
      end
    
        assert_match /Edit/, last_response.body, ''Edit' link is blocked in history template'
    
        @wiki.clear_cache
    assert_nil @wiki.paged('H', 'G')
    page_2 = @wiki.paged('C', 'G/K')
    assert_equal 'INITIAL\n\nSPAM2\n', page_2.raw_data
    assert_equal 'def', page_2.version.message
    assert_not_equal page_1.version.sha, page_2.version.sha
  end
    
    context 'Unicode Support' do
  setup do
    @path = cloned_testpath('examples/revert.git')
    @wiki = Gollum::Wiki.new(@path)
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
    
    
    
    When /^I reset Bundler environment variable$/ do
  BUNDLE_ENV_VARS.each do |key|
    ENV[key] = nil
  end
end
    
        # Perform the actual interpolation. Takes the pattern to interpolate
    # and the arguments to pass, which are the attachment and style name.
    # You can pass a method name on your record as a symbol, which should turn
    # an interpolation pattern for Paperclip to use.
    def self.interpolate pattern, *args
      pattern = args.first.instance.send(pattern) if pattern.kind_of? Symbol
      result = pattern.dup
      interpolators_cache.each do |method, token|
        result.gsub!(token) { send(method, *args) } if result.include?(token)
      end
      result
    end
    
        # Validate the package
    if input.name.nil? or input.name.empty?
      logger.fatal('No name given for this package (set name with '-n', ' \
                    'for example, '-n packagename')')
      return 1
    end
    
        # the length requirement needs to know its own length too, because the length
    # is the entire length of the line, not just the contents.
    length = ret.length
    line_length = length.to_s
    length += line_length.length
    candidate_ret = '#{line_length} #{ret}'
    
      POSTINSTALL_ACTIONS = [ 'logout', 'restart', 'shutdown' ]
  OWNERSHIP_OPTIONS = ['recommended', 'preserve', 'preserve-other']
    
      option '--lint' , :flag, 'Check manifest with pkglint',
    :default => true
    
        File.write(build_path('comment'),  self.description + '\n')
    
        scripts[:after_install] = template(File.join('pleaserun', 'scripts', 'after-install.sh')).result(binding)
    scripts[:before_remove] = template(File.join('pleaserun', 'scripts', 'before-remove.sh')).result(binding)
  end # def input
    
        ::Dir.mkdir(File.join(builddir, 'manifests'))
    manifests.each do |manifest|
      dir = File.join(builddir, 'manifests', File.dirname(manifest))
      logger.info('manifests targeting: #{dir}')
      ::Dir.mkdir(dir) if !File.directory?(dir)