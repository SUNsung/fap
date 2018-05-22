
        
            def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        # Require all .rb files if safe mode is off
    #
    # Returns nothing.
    def require_plugin_files
      unless site.safe
        plugins_path.each do |plugin_search_path|
          plugin_files = Utils.safe_glob(plugin_search_path, File.join('**', '*.rb'))
          Jekyll::External.require_with_graceful_fail(plugin_files)
        end
      end
    end
    
      def merge(*args)
    @settings.merge(*args)
    self
  end
    
      # True if a {Formula} is being built with a specific option.
  # <pre>args << '--i-want-spam' if build.with? 'spam'
  #
  # args << '--qt-gui' if build.with? 'qt' # '--with-qt' ==> build.with? 'qt'
  #
  # # If a formula presents a user with a choice, but the choice must be fulfilled:
  # if build.with? 'example2'
  #   args << '--with-example2'
  # else
  #   args << '--with-example1'
  # end</pre>
  def with?(val)
    option_names = val.respond_to?(:option_names) ? val.option_names : [val]
    
        def self.rm_DS_Store
      paths = Queue.new
      %w[Cellar Frameworks Library bin etc include lib opt sbin share var].
        map { |p| HOMEBREW_PREFIX/p }.each { |p| paths << p if p.exist? }
      workers = (0...Hardware::CPU.cores).map do
        Thread.new do
          begin
            while p = paths.pop(true)
              quiet_system 'find', p, '-name', '.DS_Store', '-delete'
            end
          rescue ThreadError # ignore empty queue error
          end
        end
      end
      workers.map(&:join)
    end
    
      def describe_java
    java_xml = Utils.popen_read('/usr/libexec/java_home', '--xml', '--failfast')
    return 'N/A' unless $?.success?
    javas = []
    REXML::XPath.each(REXML::Document.new(java_xml), '//key[text()='JVMVersion']/following-sibling::string') do |item|
      javas << item.text
    end
    javas.uniq.join(', ')
  end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
    
  class UserSearch
    include ActiveModel::Model
    include ActiveModel::Conversion
    include ActiveModel::Validations
    
          def create
        req = Rack::Request.new(request.env)
        if req['client_assertion_type'] == 'urn:ietf:params:oauth:client-assertion-type:jwt-bearer'
          handle_jwt_bearer(req)
        end
        self.status, headers, self.response_body = Api::OpenidConnect::TokenEndpoint.new.call(request.env)
        headers.each {|name, value| response.headers[name] = value }
        nil
      end
    
            def nested_variable_comparison?(node)
          return false unless nested_comparison?(node)
          variables_in_node(node).count == 1
        end
    
              def logstash_plugin_gem_spec?(spec)
            spec.metadata && spec.metadata['logstash_plugin'] == 'true'
          end
    
        puts 'Downloading #{url}'
    actual_sha1 = download(url, output)