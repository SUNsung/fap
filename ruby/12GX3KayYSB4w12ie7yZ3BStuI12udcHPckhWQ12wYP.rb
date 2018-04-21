
        
            if registration
      u2f.authenticate!(challenges, response, Base64.decode64(registration.public_key), registration.counter)
      registration.update(counter: response.counter)
      true
    end
  rescue JSON::ParserError, NoMethodError, ArgumentError, U2F::Error
    false
  end
end

    
        respond_to do |format|
      format.html { redirect_to services_path }
      format.json { head :no_content }
    end
  end
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
        # Returns a deep copy of this query and all its children.
    #
    # @return [Query]
    def deep_copy
      Query.new(
        modifier.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.deep_copy : c},
        type.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.deep_copy : c},
        expressions.map {|e| e.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.deep_copy : c}})
    end
  end
    
    
require 'uri'
require 'cgi'
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'paths'))
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'selectors'))
    
        # Gives a Geometry representing the given height and width
    def initialize(width = nil, height = nil, modifier = nil)
      if width.is_a?(Hash)
        options = width
        @height = options[:height].to_f
        @width = options[:width].to_f
        @modifier = options[:modifier]
        @orientation = options[:orientation].to_i
      else
        @height = height.to_f
        @width  = width.to_f
        @modifier = modifier
      end
    end
    
    module Paperclip
  require 'rails'