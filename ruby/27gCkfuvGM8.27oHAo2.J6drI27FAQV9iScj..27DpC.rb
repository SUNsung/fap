
        
        end

    
          if options[:type] == :array
        options[:roles] << :completable
        class_eval <<-EOF
          def complete_#{name}
            #{options[:values]}.map { |v| {text: v, id: v} }
          end
        EOF
      end
    
        # Returns whether `string` is a valid IP address or IP address range.
    #
    # @return [true] if valid IP address or IP address range.
    # @return [false] otherwise.
    def valid_ip_or_range?(string)
      range = Rex::Socket::RangeWalker.new(string)
      range && range.ranges && range.ranges.any?
    end
    
    unless ENV['BUNDLE_GEMFILE']
  require 'pathname'
    
      fd.close
    
            # Remove it form the session objects so freeup
        sessions.delete(s[:session])
    
    meterp.core.use('Stdapi')
    
      def get_result
    @src.get_result
  end
end