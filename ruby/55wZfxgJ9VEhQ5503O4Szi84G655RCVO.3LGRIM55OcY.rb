
        
        describe 'CommonMark' do
  it 'passes spec' do
    
        Logster.add_to_env(request.env, 'CSP Report', report)
    Rails.logger.warn('CSP Violation: '#{report['blocked-uri']}'')
    
        it 'rejects invalid directives and ones that are not allowed to be extended' do
      builder << {
        invalid_src: ['invalid'],
      }
    
        # if you need to test this and are having ssl issues see:
    #  http://stackoverflow.com/questions/6756460/openssl-error-using-omniauth-specified-ssl-path-but-didnt-work
    # OpenSSL::SSL::VERIFY_PEER = OpenSSL::SSL::VERIFY_NONE if Rails.env.development?
    @omniauth = OmniAuth::Builder.new(app) do
      Discourse.authenticators.each do |authenticator|
        authenticator.register_middleware(self)
      end
    end
    
      def self.languages
    langs = Dir.glob(HIGHLIGHTJS_DIR + 'languages/*.js').map do |path|
      File.basename(path)[0..-8]
    end
    
        def base_url
      @base_url || Discourse.base_url
    end
    attr_writer :base_url
  end
    
          Theme.where(id: Theme.transform_ids(theme_ids)).find_each do |theme|
        theme.cached_settings.each do |setting, value|
          extensions << build_theme_extension(value) if setting.to_s == THEME_SETTING
        end
      end
    
                  subscriber = Lograge::LogSubscribers::ActionController.new
              payload = ActiveSupport::HashWithIndifferentAccess.new(
                controller: self.class.name,
                action: action_name,
                params: request.filtered_parameters,
                headers: request.headers,
                format: request.format.ref,
                method: request.request_method,
                path: request.fullpath,
                view_runtime: view_runtime * 1000.0,
                db_runtime: db_runtime * 1000.0,
                timings: timings,
                status: response.status
              )
    
          # Returns the keyword of the `case` statement as a string.
      #
      # @return [String] the keyword of the `case` statement
      def keyword
        'case'
      end
    
          # The receiver of the method definition, if any.
      #
      # @return [Node, nil] the receiver of the method definition, or `nil`.
      def receiver
        node_parts[3]
      end
    
          # Returns the value of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the value of the hash element
      def value
        node_parts[1]
      end
    
            def swap_range(corrector, range1, range2)
          src1 = range1.source
          src2 = range2.source
          corrector.replace(range1, src2)
          corrector.replace(range2, src1)
        end
      end
    end
  end
end
