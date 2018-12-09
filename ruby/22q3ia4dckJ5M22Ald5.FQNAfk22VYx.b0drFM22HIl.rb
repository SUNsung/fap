
        
              # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
                  [:year, :month, :day, :hour, :min, :sec].each do |key|
                default[key] ||= time.send(key)
              end
    
              def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class TextField < Base # :nodoc:
        include Placeholderable
    
        # Render but returns a valid Rack body. If fibers are defined, we return
    # a streaming body that renders the template piece by piece.
    #
    # Note that partials are not supported to be rendered with streaming,
    # so in such cases, we just wrap them in an array.
    def render_body(context, options)
      if options.key?(:partial)
        [render_partial(context, options)]
      else
        StreamingTemplateRenderer.new(@lookup_context).render(context, options)
      end
    end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
                c.action do |args, opts|
              Jekyll::Commands::NewTheme.process(args, opts)
            end
          end
        end
    
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
    
          if ARGV.git?
        system 'git', 'init'
        system 'git', 'add', '-A'
      end
      if ARGV.interactive?
        ohai 'Entering interactive mode'
        puts 'Type `exit' to return and finalize the installation'
        puts 'Install to this prefix: #{formula.prefix}'
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
      def self.path(name)
    Formulary.core_path(name)
  end
    
          action_return = run(
        action_named: action_name,
        action_class_ref: action_class_ref,
        parameter_map: parameter_map
      )
    
          it 'handles the exclude_dirs parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle')
      end
    
      describe 'shell_command_from_args' do
    it 'returns the string when a string is passed' do
      command = command_from_args('git commit -m 'A message'')
      expect(command).to eq('git commit -m 'A message'')
    end
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
        describe 'import' do
      it 'finds a normal keychain name relative to ~/Library/Keychains' do
        expected_command = 'security import item.path -k '#{Dir.home}/Library/Keychains/login.keychain' -P #{''.shellescape} -T /usr/bin/codesign -T /usr/bin/security &> /dev/null'
    
    # Contributors should always provide a changelog when submitting a PR
if github.pr_body.length < 5
  warn('Please provide a changelog summary in the Pull Request description @#{github.pr_author}')
end
    
            # Download a file from the remote machine to the local machine.
        #
        # @param [String] from Path of the file on the remote machine.
        # @param [String] to Path of where to save the file locally.
        def download(from, to)
        end
    
            # This returns all the action hooks.
        #
        # @return [Array]
        def action_hooks(hook_name)
          result = []
    
        # Checks if this registry has any items.
    #
    # @return [Boolean]
    def empty?
      @items.keys.empty?
    end
    
      private