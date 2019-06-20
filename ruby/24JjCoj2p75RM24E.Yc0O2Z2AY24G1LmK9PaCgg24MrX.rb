
        
              path = File.expand_path('../../fixtures/helpers_missing', __dir__)
      $:.unshift(path)
      self.helpers_path = path
    end
    
      def self.bundle(langs)
    result = File.read(HIGHLIGHTJS_DIR + 'highlight.min.js')
    langs.each do |lang|
      begin
        result << '\n' << File.read(HIGHLIGHTJS_DIR + 'languages/#{lang}.min.js')
      rescue Errno::ENOENT
        # no file, don't care
      end
    end
    
        def find_theme_extensions(theme_ids)
      extensions = []
    
        auth_token = request.cookies[TOKEN_COOKIE] unless user_api_key || api_key
    
              body = response.body
    
            MergeRequest
          .where(id: start_id..stop_id)
          .where(latest_merge_request_diff_id: nil)
          .each_batch(of: BATCH_SIZE) do |relation|
    
          def initialize(app)
        @app = app
      end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
          def headers_for(action, opts)
        headers = {
          subject: subject_for(action),
          to: resource.email,
          from: mailer_sender(devise_mapping),
          reply_to: mailer_reply_to(devise_mapping),
          template_path: template_paths,
          template_name: action
        }.merge(opts)
    
          if options.has_key?(:only)
        @used_routes = self.routes & Array(options[:only]).map(&singularizer)
      elsif options[:skip] == :all
        @used_routes = []
      else
        @used_routes = self.routes - Array(options[:skip]).map(&singularizer)
      end
    end
    
        # Recoverable takes care of resetting the user password and send reset instructions.
    #
    # ==Options
    #
    # Recoverable adds the following options to devise_for:
    #
    #   * +reset_password_keys+: the keys you want to use when recovering the password for an account
    #   * +reset_password_within+: the time period within which the password must be reset or the token expires.
    #   * +sign_in_after_reset_password+: whether or not to sign in the user automatically after a password reset.
    #
    # == Examples
    #
    #   # resets the user password and save the record, true if valid passwords are given, otherwise false
    #   User.find(1).reset_password('password123', 'password123')
    #
    #   # creates a new token and send it with instructions about how to reset the password
    #   User.find(1).send_reset_password_instructions
    #
    module Recoverable
      extend ActiveSupport::Concern
    
                  <ol start='<%= frame.lineno %>' class='context' id='<%= id %>'
                  onclick='toggle(<%= id %>);'>
                <li class='context-line' id='context-<%= id %>'><code><%=
                  h frame.context_line %></code></li>
              </ol>
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end