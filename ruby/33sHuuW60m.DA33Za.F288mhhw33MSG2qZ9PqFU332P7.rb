
        
                display_user_error!(e, error_info)
      else
        # Pass the error instead of a message so that the inspector can do extra work to simplify the query
        show_github_issues(e) if should_show_github_issues
    
          it 'handles the exclude_dirs parameter with multiple  elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle', 'Packages/'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle --exclude-dir Packages/')
      end
    end
  end
end

    
          it 'cannot have both path and pathspec parameters' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'myfile.txt', pathspec: '*.txt')
          end').runner.execute(:test)
        end.to raise_error(FastlaneCore::Interface::FastlaneError)
      end
    end
  end
end

    
          it 'works with all parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /.*/,
              exclude_regex: /Test.m/,
              report_type: 'pmd',
              report_path: 'report_path.xml',
              max_priority_1: 10,
              max_priority_2: 20,
              max_priority_3: 30,
              thresholds: ['LONG_LINE=200', 'LONG_METHOD=200'],
              enable_rules: ['DoubleNegative', 'DeadCode'],
              disable_rules: ['GotoStatement', 'ShortVariableName'],
              list_enabled_rules: true,
              enable_clang_static_analyzer: true,
              enable_global_analysis: true,
              allow_duplicated_violations: true
            )
          end').runner.execute(:test)
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
            it 'doesn't display a deprecation message when loading a config if a deprecated option doesn't have a value' do
          c = FastlaneCore::ConfigItem.new(key: :foo,
                                           description: 'foo',
                                           deprecated: 'replaced by bar')
          values = {
            foo: 'something'
          }
          expect(FastlaneCore::UI).to receive(:deprecated).with('Using deprecated option: '--foo' (replaced by bar)')
          config = FastlaneCore::Configuration.create([c], values)
        end
    
    <script>
  // reading
  var es = new EventSource('/stream');
  es.onmessage = function(e) { $('#chat').append(e.data + '\n') };
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
        <div id='backtrace' class='condensed'>
      <h3>BACKTRACE</h3>
      <p><a href='#' id='expando'
            onclick='toggleBacktrace(); return false'>(expand)</a></p>
      <p id='nav'><strong>JUMP TO:</strong>
         <% unless bad_request?(exception) %>
            <a href='#get-info'>GET</a>
            <a href='#post-info'>POST</a>
         <% end %>
         <a href='#cookie-info'>COOKIES</a>
         <a href='#env-info'>ENV</a>
      </p>
      <div class='clear'></div>
    
    begin
  require 'bundler'
  Bundler::GemHelper.install_tasks
rescue LoadError => e
  $stderr.puts e
end
    
            elsif masked_token?(token)
          token = unmask_token(token)
    
          def drop_session(env)
        session(env).clear if session? env
      end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :selected  => @page.version.id == v.id,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
          }
        end
      end
    
    # Disable the metadata feature
$METADATA = false
    
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