
        
          def test_escape_javascript
    assert_equal '', escape_javascript(nil)
    assert_equal %(This \\'thing\\' is really\\n netos\\'), escape_javascript(%(This 'thing' is really\n netos'))
    assert_equal %(backslash\\\\test), escape_javascript(%(backslash\\test))
    assert_equal %(dont <\\/close> tags), escape_javascript(%(dont </close> tags))
    assert_equal %(unicode &#x2028; newline), escape_javascript(%(unicode \342\200\250 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    assert_equal %(unicode &#x2029; newline), escape_javascript(%(unicode \342\200\251 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    
            def tag_options(options, escape = true)
          return if options.blank?
          output = ''.dup
          sep    = ' '
          options.each_pair do |key, value|
            if TAG_PREFIXES.include?(key) && value.is_a?(Hash)
              value.each_pair do |k, v|
                next if v.nil?
                output << sep
                output << prefix_tag_option(key, k, v, escape)
              end
            elsif BOOLEAN_ATTRIBUTES.include?(key)
              if value
                output << sep
                output << boolean_tag_option(key)
              end
            elsif !value.nil?
              output << sep
              output << tag_option(key, value, escape)
            end
          end
          output unless output.empty?
        end
    
          # Returns a Hash of instance variables and their values, as defined by
      # the user in the test case, which are then assigned to the view being
      # rendered. This is generally intended for internal use and extension
      # frameworks.
      def view_assigns
        Hash[_user_defined_ivars.map do |ivar|
          [ivar[1..-1].to_sym, instance_variable_get(ivar)]
        end]
      end
    
              # Bubbled up from the adapter require. Prefix the exception message
          # with some guidance about how to address it and reraise.
          else
            raise e.class, 'Error loading the '#{adapter}' Action Cable pubsub adapter. Missing a gem it depends on? #{e.message}', e.backtrace
          end
        end
    
      def test_put_json
    with_test_route_set do
      put '/',
        params: '{'entry':{'summary':'content...'}}',
        headers: { 'CONTENT_TYPE' => 'application/json' }
    
        # Use the logger configured for ActionMailer::Base.
    def logger
      ActionMailer::Base.logger
    end
  end
end
    
        # Access the message instance.
    def message
      @_message
    end
    
          private
        def processed_mailer
          @processed_mailer ||= @mailer_class.new.tap do |mailer|
            mailer.params = @params
            mailer.process @action, *@args
          end
        end
    
            def clear_test_deliveries
          if ActionMailer::Base.delivery_method == :test
            ActionMailer::Base.deliveries.clear
          end
        end
    end
    
          { :title => 'Event', :entries => present_hash(payload) }
    else
      { :title => payload.to_s, :entries => [] }
    end
  end
    
      before_action :upgrade_warning, only: :index
    
      def edit
    @user_credential = current_user.user_credentials.find(params[:id])
  end
    
            It is possible to specify a list of dependencies which will be used by
        the template in the `Podfile.default` (normal targets) `Podfile.test`
        (test targets) files which should be stored in the
        `~/.cocoapods/templates` folder.
      DESC
      self.arguments = [
        CLAide::Argument.new('XCODEPROJ', :false),
      ]
    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
          #-----------------------------------------------------------------------#
    end
  end
end

    
      context 'called with two widths' do
    it 'applies to alternating sides' do
      rule = 'border-width: 2px 3px'
    
      context 'called with four sizes' do
    it 'applies different widths to all sides' do
      ruleset = 'position: fixed; ' +
                'top: 7px; ' +
                'right: 8px; ' +
                'bottom: 9px; ' +
                'left: 10px;'