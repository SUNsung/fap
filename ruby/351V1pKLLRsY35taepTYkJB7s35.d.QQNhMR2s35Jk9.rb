
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
    def file_content_from_hash(input_hash)
  matter_hash = input_hash.reject { |k, _v| k == 'content' }
  matter = matter_hash.map do |k, v|
    '#{k}: #{v}\n'
  end
    
            # For a description of the protocol see
        # http://feedback.livereload.com/knowledgebase/articles/86174-livereload-protocol
        def reload(pages)
          pages.each do |p|
            json_message = JSON.dump(
              :command => 'reload',
              :path    => p.url,
              :liveCSS => true
            )
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
      protected
    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          def self.required_fields(klass)
        []
      end
    
    World(VagrantHelpers)

    
          def load_built_in_scm
        require 'capistrano/scm/#{scm_name}'
        scm_class = Object.const_get(built_in_scm_plugin_class_name)
        # We use :load_immediately because we are initializing the SCM plugin
        # late in the load process and therefore can't use the standard
        # load:defaults technique.
        install_plugin(scm_class, load_immediately: true)
      end
    
          def select?(options)
        options.each do |k, v|
          callable = v.respond_to?(:call) ? v : ->(server) { server.fetch(v) }
          result = \
            case k
            when :filter, :select
              callable.call(self)
            when :exclude
              !callable.call(self)
            else
              fetch(k) == v
            end
          return false unless result
        end
    
          def fetch_primary(role)
        hosts = roles_for([role])
        hosts.find(&:primary) || hosts.first
      end