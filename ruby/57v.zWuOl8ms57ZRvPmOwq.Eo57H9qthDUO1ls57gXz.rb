
        
            def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
      private
    
          # Sign in a user that already was authenticated. This helper is useful for logging
      # users in after sign up. All options given to sign_in is passed forward
      # to the set_user method in warden.
      # If you are using a custom warden strategy and the timeoutable module, you have to
      # set `env['devise.skip_timeout'] = true` in the request to use this method, like we do
      # in the sessions controller: https://github.com/plataformatec/devise/blob/master/app/controllers/devise/sessions_controller.rb#L7
      #
      # Examples:
      #
      #   sign_in :user, @user                      # sign_in(scope, resource)
      #   sign_in @user                             # sign_in(resource)
      #   sign_in @user, event: :authentication     # sign_in(resource, options)
      #   sign_in @user, store: false               # sign_in(resource, options)
      #
      def sign_in(resource_or_scope, *args)
        options  = args.extract_options!
        scope    = Devise::Mapping.find_scope!(resource_or_scope)
        resource = args.last || resource_or_scope
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
        def default_used_route(options)
      singularizer = lambda { |s| s.to_s.singularize.to_sym }
    
    module Devise
  module Models
    # Rememberable manages generating and clearing token for remembering the user
    # from a saved cookie. Rememberable also has utility methods for dealing
    # with serializing the user into the cookie and back from the cookie, trying
    # to lookup the record based on the saved information.
    # You probably wouldn't use rememberable methods directly, they are used
    # mostly internally for handling the remember token.
    #
    # == Options
    #
    # Rememberable adds the following options in devise_for:
    #
    #   * +remember_for+: the time you want the user will be remembered without
    #     asking for credentials. After this time the user will be blocked and
    #     will have to enter their credentials again. This configuration is also
    #     used to calculate the expires time for the cookie created to remember
    #     the user. By default remember_for is 2.weeks.
    #
    #   * +extend_remember_period+: if true, extends the user's remember period
    #     when remembered via cookie. False by default.
    #
    #   * +rememberable_options+: configuration options passed to the created cookie.
    #
    # == Examples
    #
    #   User.find(1).remember_me!  # regenerating the token
    #   User.find(1).forget_me!    # clearing the token
    #
    #   # generating info to put into cookies
    #   User.serialize_into_cookie(user)
    #
    #   # lookup the user based on the incoming cookie information
    #   User.serialize_from_cookie(cookie_string)
    module Rememberable
      extend ActiveSupport::Concern
    
              # Generates the acknowledgement files (markdown and plist) for the target.
          #
          # @return [void]
          #
          def create_acknowledgements
            basepath = target.acknowledgements_basepath
            Generator::Acknowledgements.generators.each do |generator_class|
              path = generator_class.path_from_basepath(basepath)
              file_accessors = target.pod_targets.map(&:file_accessors).flatten
              generator = generator_class.new(file_accessors)
              update_changed_file(generator, path)
              add_file_to_support_group(path)
            end
          end
    
              BuildType.infer_from_spec(stub('spec', :root => stub('root_spec', :static_framework => true)), :host_requires_frameworks => false).
            should == BuildType.static_library
          BuildType.infer_from_spec(stub('spec', :root => stub('root_spec', :static_framework => false)), :host_requires_frameworks => false).
            should == BuildType.static_library
          BuildType.infer_from_spec(stub('spec', :root => stub('root_spec', :static_framework => true)), :host_requires_frameworks => true).
            should == BuildType.static_framework
          BuildType.infer_from_spec(stub('spec', :root => stub('root_spec', :static_framework => false)), :host_requires_frameworks => true).
            should == BuildType.dynamic_framework
        end
      end
    
              # Delete a 'Embed Pods Frameworks' Copy Files Build Phase if present
          #
          # @param [PBXNativeTarget] native_target
          #        The native target to remove the script phase from.
          #
          def remove_embed_frameworks_script_phase_from_target(native_target)
            embed_build_phase = native_target.shell_script_build_phases.find { |bp| bp.name && bp.name.end_with?(EMBED_FRAMEWORK_PHASE_NAME) }
            return unless embed_build_phase.present?
            native_target.build_phases.delete(embed_build_phase)
          end
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
end
    
      table td.code       {width:750px}
  table td.code div   {width:750px;overflow:hidden}
</style>
</head>
<body>
  <div id='wrap'>
    <div id='header'>
      <img src='<%= env['SCRIPT_NAME'] %>/__sinatra__/500.png' alt='application error' height='161' width='313' />
      <div id='summary'>
        <h1><strong><%=h exception.class %></strong> at <strong><%=h path %>
          </strong></h1>
        <h2><%=h exception.message %></h2>
        <ul>
          <li class='first'><strong>file:</strong> <code>
            <%=h frames.first.filename.split('/').last %></code></li>
          <li><strong>location:</strong> <code><%=h frames.first.function %>
            </code></li>
          <li class='last'><strong>line:
            </strong> <%=h frames.first.lineno %></li>
        </ul>
      </div>
      <div class='clear'></div>
    </div>
    
          def referrer(env)
        ref = env['HTTP_REFERER'].to_s
        return if !options[:allow_empty_referrer] and ref.empty?
        URI.parse(ref).host || Request.new(env).host
      rescue URI::InvalidURIError
      end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
      it_behaves_like 'any rack application'
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
      it 'should not override the header if already set' do
    mock_app with_headers('Content-Security-Policy' => 'default-src: none')
    expect(get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']).to eq('default-src: none')
  end
end

    
      main
end

    
              if flag_a
            puts foo
            foo = 2
            ^^^ Useless assignment to variable - `foo`.
          elsif flag_b
            puts foo
          end
        end
      RUBY
    end
  end
    
          # Returns, for example, a bare `if` node if the given node is an `if`
      # with calls chained to the end of it.
      def first_part_of_call_chain(node)
        while node
          case node.type
          when :send
            node = node.receiver
          when :block
            node = node.send_node
          else
            break
          end
        end
        node
      end
    
        context 'with a non-negated method' do
      let(:source) { 'foo.bar' }
    
        it 'auto-correct Hash.new to {} as the only parameter to a method' do
      source = 'yadayada.map { a }.reduce Hash.new'
      new_source = autocorrect_source(source)
      expect(new_source).to eq('yadayada.map { a }.reduce({})')
    end
    
          # Checks whether the `if` node has at least one `elsif` branch. Returns
      # true if this `if` node itself is an `elsif`.
      #
      # @return [Boolean] whether the `if` node has at least one `elsif` branch
      def elsif_conditional?
        else_branch&.if_type? && else_branch&.elsif?
      end
    
          # Checks whether the method is an enumerator method.
      #
      # @return [Boolean] whether the method is an enumerator
      def enumerator_method?
        ENUMERATOR_METHODS.include?(method_name) ||
          method_name.to_s.start_with?('each_')
      end