end

    
      protected
    
              @registered.each do |plugin|
            plugin.components.provider_capabilities.each do |provider, caps|
              results[provider].merge!(caps)
            end
          end
    
            # Unregisters a SIGINT handler.
        def unregister(sig_callback)
          @@mutex.synchronize do
            registered.delete(sig_callback)
    
          def merge(other)
        dup.merge!(other)
      end
    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
          opts.on(
        '--indent NUM',
        'How many spaces to use for each level of indentation. Defaults to 2.',
        ''t' means use hard tabs.'
      ) do |indent|
        if indent == 't'
          @options[:for_tree][:indent] = '\t'
        else
          @options[:for_tree][:indent] = ' ' * indent.to_i
        end
      end
    
          if string_or_interp1.is_a?(Literal)
        string = string_or_interp1
        interp = string_or_interp2
        before = string_literal(string.value.value + interp.before.value.value)
        return StringInterpolation.new(before, interp.mid, interp.after)
      end