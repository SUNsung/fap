
        
                if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
        def process_response?(response)
      if response.error?
        raise <<~ERROR
          Error status code (#{response.code}): #{response.return_message}
          #{response.url}
          #{JSON.pretty_generate(response.headers).slice(2..-3)}
        ERROR
      elsif response.blank?
        raise 'Empty response body: #{response.url}'
      end
    
            # This contains all the hosts and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :hosts
    
            # This returns all registered provisioners.
        #
        # @return [Hash]
        def provisioners
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.provisioner)
            end
          end
        end
    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
end

    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end