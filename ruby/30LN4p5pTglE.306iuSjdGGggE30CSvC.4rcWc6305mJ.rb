
        
        SUITE.each do |key, text|
  Benchmark.ips do |x|
    x.report('regex-check   - #{key}') { check_with_regex(text) }
    x.report('builtin-check - #{key}') { check_with_builtin(text) }
    x.compare!
  end
end
# ------------------------------------------------------------------------
    
    def global_require
  JSON.pretty_generate(DATA)
end
    
    Gem::Specification.new do |s|
  s.specification_version = 2 if s.respond_to? :specification_version=
  s.required_rubygems_version = Gem::Requirement.new('>= 0') if s.respond_to? :required_rubygems_version=
  s.rubygems_version = '2.2.2'
  s.required_ruby_version = '>= 2.3.0'
    
        # Private: The metadata file storing dependency tree and build history
    #
    # Returns an Array with the metdata file as the only item
    def metadata_file
      [site.regenerator.metadata_file]
    end
    
            # Build your jekyll site
        # Continuously watch if `watch` is set to true in the config.
        def process(options)
          # Adjust verbosity quickly
          Jekyll.logger.adjust_verbosity(options)
    
      def destroy
    @filter.destroy
    redirect_to filters_path
  end
    
          @domain_block = DomainBlock.new(resource_params)
    
        def new
      authorize :email_domain_block, :create?
      @email_domain_block = EmailDomainBlock.new
    end
    
      def hub_topic_domain
    hub_topic_uri.host + (hub_topic_uri.port ? ':#{hub_topic_uri.port}' : '')
  end