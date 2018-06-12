
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
              @new_body.each do |line|
            if !@livereload_added && line['<head']
              line.gsub!(HEAD_TAG_REGEX) do |match|
                %(#{match}#{template.result(binding)})
              end
    
        def safe_load_file(filename)
      case File.extname(filename)
      when %r!\.toml!i
        Jekyll::External.require_with_graceful_fail('tomlrb') unless defined?(Tomlrb)
        Tomlrb.load_file(filename)
      when %r!\.ya?ml!i
        SafeYAML.load_file(filename) || {}
      else
        raise ArgumentError, 'No parser for '#{filename}' is available.
          Use a .y(a)ml or .toml file instead.'
      end
    end
    
        # Transform the contents based on the content type.
    #
    # Returns the transformed contents.
    def transform
      _renderer.convert(content)
    end
    
        find_union(segments, Group).order_id_desc
  end
    
      def failed_strategy
    request.respond_to?(:get_header) ? request.get_header('omniauth.error.strategy') : request.env['omniauth.error.strategy']
  end
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end