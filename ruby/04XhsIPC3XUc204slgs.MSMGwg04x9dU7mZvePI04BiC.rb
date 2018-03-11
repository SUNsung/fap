
        
        def fixture_site(overrides = {})
  Jekyll::Site.new(site_configuration(overrides))
end
    
      # If a given extension is listed multiple times, prefer the first one listed
  extensions.reject! { |extension| mimes.values.flatten.include?(extension) }
    
    Jekyll::PluginManager.require_from_bundler
    
    module Jekyll
  class EntryFilter
    attr_reader :site
    SPECIAL_LEADING_CHARACTERS = [
      '.', '_', '#', '~',
    ].freeze
    
            parsed_expr = parse_expression(expression)
        @context.stack do
          groups = input.group_by do |item|
            @context[variable] = item
            parsed_expr.render(@context)
          end
          grouped_array(groups)
        end
      end
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
      def include_admin_route?
    admin_route.present?
  end
end

    
    source 'https://rubygems.org'
    
        if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
        def redirect_url
      if warden_message == :timeout
        flash[:timedout] = true if is_flashing_format?