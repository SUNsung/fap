
        
                # Tags are declared in the server but computed in the connection. This allows us per-connection tailored tags.
        def new_tagged_logger
          TaggedLoggerProxy.new server.logger,
            tags: server.config.log_tags.map { |tag| tag.respond_to?(:call) ? tag.call(request) : tag.to_s.camelize }
        end
    
          private
        def generated_attribute_methods
          @generated_attribute_methods ||= Module.new.tap { |mod| include mod }
        end
    
    module MiddlewareTest
  class MyMiddleware
    def initialize(app)
      @app = app
    end