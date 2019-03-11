
        
                  def initialize(template_object, object_name, method_name, object,
                         sanitized_attribute_name, text, value, input_html_options)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @sanitized_attribute_name = sanitized_attribute_name
            @text = text
            @value = value
            @input_html_options = input_html_options
          end
    
              super(object_name, method_name, template_object, options)
        end
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
          test 'when specify an :except option which does not match current action name' do
        controller = WithExceptConditional.new
        controller.process(:index)
        assert_equal 'Overwrite Hello index!', controller.response_body
      end
    
    def liquid_escape(markdown)
  markdown.gsub(%r!(`{[{%].+[}%]}`)!, '{% raw %}\\1{% endraw %}')
end
    
    def envygeeks(url)
  return url if url.end_with?(FORWARD_SLASH) || url == FORWARD_SLASH
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
                # stream_file_data would free us from keeping livereload.js in memory
            # but JRuby blocks on that call and never returns
            send_data(reload_body)
            close_connection_after_writing
          else
            body = 'This port only serves livereload.js over HTTP.\n'
            headers = [
              'HTTP/1.1 400 Bad Request',
              'Content-Type: text/plain',
              'Content-Length: #{body.bytesize}',
              '',
              '',
            ].join('\r\n')
            send_data(headers)
            send_data(body)
            close_connection_after_writing
          end
        end
        # rubocop:enable Metrics/MethodLength
      end
    end
  end
end

    
            is_swift = FastlaneCore::FastlaneFolder.swift?
        fastlane_client_language = is_swift ? :swift : :ruby
        action_launch_context = FastlaneCore::ActionLaunchContext.context_for_action_name(@program[:name], fastlane_client_language: fastlane_client_language, args: ARGV)
        FastlaneCore.session.action_launched(launch_context: action_launch_context)
    
          it 'allows you to specify a prefix' do
        prefix = '16309-'
    
          it 'works with exclude regex' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              exclude_regex: /Test/
            )
          end').runner.execute(:test)
    
          if conflicting_options
        conflicting_options.each do |conflicting_option_key|
          UI.user_error!('Conflicting option key must be a symbol') unless conflicting_option_key.kind_of?(Symbol)
        end
      end
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
        os = 'windows'
    shelljoin_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        array = testcase['input']
        expect_correct_implementation_to_be_called(array, :shelljoin, os)
        joined = array.shelljoin
        expect(joined).to eq(testcase['expect'][os])
      end
    end
  end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
        def bubble_subject(root)
      root.children.each do |child|
        bubble_subject(child) if child.is_a?(Tree::RuleNode) || child.is_a?(Tree::DirectiveNode)
        next unless child.is_a?(Tree::RuleNode) && !child.children.empty?
        next unless child.children.all? do |c|
          next unless c.is_a?(Tree::RuleNode)
          first_simple_sel(c).is_a?(Sass::Selector::Parent) && first_sseq(c).subject?
        end
        first_sseq(child).subject = true
        child.children.each {|c| first_sseq(c).subject = false}
      end
    end
    
        # The options for the Sass engine.
    # See {file:SASS_REFERENCE.md#Options the Sass options documentation}.
    #
    # @return [{Symbol => Object}]
    attr_reader :options
    
            @options[:sourcemap] = (type || :auto).to_sym
      end
    
          REDUNDANT_DIRECTORY = /#{Regexp.escape(File::SEPARATOR)}\.#{Regexp.escape(File::SEPARATOR)}/
      # Given a base directory and an `@import`ed name,
      # finds an existent file that matches the name.
      #
      # @param dir [String] The directory relative to which to search.
      # @param name [String] The filename to search for.
      # @return [(String, Symbol)] A filename-syntax pair.
      def find_real_file(dir, name, options)
        # On windows 'dir' or 'name' can be in native File::ALT_SEPARATOR form.
        dir = dir.gsub(File::ALT_SEPARATOR, File::SEPARATOR) unless File::ALT_SEPARATOR.nil?
        name = name.gsub(File::ALT_SEPARATOR, File::SEPARATOR) unless File::ALT_SEPARATOR.nil?