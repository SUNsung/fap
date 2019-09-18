
        
          context 'generating limited posts' do
    setup do
      clear_dest
      @site = fixture_site('limit_posts' => 5)
      @site.process
      @index = File.read(dest_dir('index.html'))
    end
    
              @highlighter = begin
            if @config.key?('enable_coderay') && @config['enable_coderay']
              Jekyll::Deprecator.deprecation_message(
                'You are using 'enable_coderay', ' \
                'use syntax_highlighter: coderay in your configuration file.'
              )
    
            markdown = Converters::Markdown.new(Utils.deep_merge_hashes(@config, override))
        result = nokogiri_fragment(markdown.convert(<<~MARKDOWN))
          ~~~ruby
          puts 'Hello World'
          ~~~
        MARKDOWN
    
    def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
          def comment_line(comment_line); end
    
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

    
          def parse(podspec_content)
        @podspec_content = podspec_content
        @version_match = @version_regex.match(@podspec_content)
        UI.user_error!('Could not find version in podspec content '#{@podspec_content}'') if @version_match.nil?
        @version_value = @version_match[:value]
      end
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
      # Checks whether it's a devise mapped resource or not.
  def assert_is_devise_resource! #:nodoc:
    unknown_action! <<-MESSAGE unless devise_mapping
Could not find devise mapping for path #{request.fullpath.inspect}.
This may happen for two reasons:
    
      end
end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
        def default_path_names(options)
      @path_names = Hash.new { |h,k| h[k] = k.to_s }
      @path_names[:registration] = ''
      @path_names.merge!(options[:path_names]) if options[:path_names]
    end
    
          module ClassMethods
        # Attempt to find a user by password reset token. If a user is found, return it
        # If a user is not found, return nil
        def with_reset_password_token(token)
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, token)
          to_adapter.find_first(reset_password_token: reset_password_token)
        end
    
          private
    
          prepare_header
      prepare_format
      prepare_output
    end
    
      def test_limit
    assert_equal([[[]]], Marshal.load(Marshal.dump([[[]]], 3)))
    assert_raise(ArgumentError) { Marshal.dump([[[]]], 2) }
    assert_nothing_raised(ArgumentError, '[ruby-core:24100]') { Marshal.dump('\u3042', 1) }
  end
    
      before :each do
    @data = '{'a':1234}'
    @zip = [31, 139, 8, 0, 0, 0, 0, 0, 0, 3, 171, 86, 74, 84, 178, 50,
            52, 50, 54, 169, 5, 0, 196, 20, 118, 213, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
        describe 'with a multi-byte character' do
      it 'appends the character to the stream' do
        @gz.ungetc 'ŷ'
        @gz.read.should == 'ŷ'
      end
    
    describe 'Zlib::Inflate#finish' do
    
          context 'which contains a method call' do
        let(:src) { '{a: 1, b: 2, c: Kernel.exit}' }
    
            def on_send(node)
          return unless node.arguments? && node.parenthesized?
    
      %w[module class].each do |keyword|
    it_behaves_like('at the top of the body', keyword)
    it_behaves_like('non-repeated visibility modifiers', keyword)
    it_behaves_like('unused visibility modifiers', keyword)
    
        # Return a hash of the options given at invocation, minus the ones that have
    # no effect on which offenses and disabled line ranges are found, and thus
    # don't affect caching.
    def relevant_options_digest(options)
      options = options.reject { |key, _| NON_CHANGING.include?(key) }
      options = options.to_s.gsub(/[^a-z]+/i, '_')
      # We must avoid making file names too long for some filesystems to handle
      # If they are short, we can leave them human-readable
      options.length <= 32 ? options : Digest::SHA1.hexdigest(options)
    end
  end
end

    
      it 'registers an offense for `raise` guard clause not followed ' \
     'by empty line when `if` condition is after heredoc' do
    expect_offense(<<~RUBY)
      def foo
        raise ArgumentError, <<-MSG if path
          Must be called with mount point
        MSG
      ^^^^^ Add empty line after guard clause.
        bar
      end
    RUBY
  end