
        
                  if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
      def render(source)
    template = File.read(source)
    renderer = ERB.new(template)
    context  = LogStash::PluginManager::RenderContext.new(options)
    renderer.result(context.get_binding)
  end
    
    module LogStash::Api::AppHelpers
  # This method handle both of the normal flow *happy path*
  # and the display or errors, if more custom logic is added here
  # it will make sense to separate them.
  #
  # See `#error` method in the `LogStash::Api::Module::Base`
  def respond_with(data, options={})
    as     = options.fetch(:as, :json)
    filter = options.fetch(:filter, '')
    
          # Only print require() calls that did actual work.
      # require() returns true on load, false if already loaded.
      if result
        source = caller[0]
        #p source.include?('/lib/polyglot.rb:63:in `require'') => source
        if source.include?('/lib/polyglot.rb:63:in `require'')
          source = caller[1]
        end