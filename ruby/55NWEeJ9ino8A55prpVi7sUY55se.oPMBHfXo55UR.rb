
        
                        on.unsubscribe do |chan, count|
                  if count == 0
                    @subscription_lock.synchronize do
                      @raw_client = nil
                    end
                  end
                end
              end
            end
          end
    
              if node.reflection.collection?
            other.target.push(model)
          else
            other.target = model
          end
    
        def call(env)
      result = @app.call(env)
      result[1]['Middleware-Test'] = 'Success'
      result[1]['Middleware-Order'] = 'First'
      result
    end
  end
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
        # An email was generated.
    def process(event)
      debug do
        mailer = event.payload[:mailer]
        action = event.payload[:action]
        '#{mailer}##{action}: processed outbound mail in #{event.duration.round(1)}ms'
      end
    end
    
      option '--type', 'TYPE', 'Type of the plugin {input, filter, codec, output}s', :required => true
  option '--name', 'PLUGIN', 'Name of the new plugin', :required => true
  option '--path', 'PATH', 'Location where the plugin skeleton will be created', :default => Dir.pwd