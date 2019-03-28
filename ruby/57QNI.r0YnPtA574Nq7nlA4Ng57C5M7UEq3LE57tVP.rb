
        
            # Returns the standard exception backtrace,
    # including the Sass backtrace.
    #
    # @return [Array<String>]
    def backtrace
      return nil if super.nil?
      return super if sass_backtrace.all? {|h| h.empty?}
      sass_backtrace.map do |h|
        '#{h[:filename] || '(sass)'}:#{h[:line]}' +
          (h[:mixin] ? ':in `#{h[:mixin]}'' : '')
      end + super
    end
    
              def show
            render_serialized_payload { serialize_resource(resource) }
          end