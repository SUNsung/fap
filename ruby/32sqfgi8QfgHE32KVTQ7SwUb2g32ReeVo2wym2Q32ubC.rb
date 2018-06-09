
        
            # The directory for this Collection, relative to the site source or the directory
    # containing the collection.
    #
    # Returns a String containing the directory name where the collection
    #   is stored on the filesystem.
    def relative_directory
      @relative_directory ||= '_#{label}'
    end
    
            # Add the ability to tap file.html the same way that Nginx does on our
        # Docker images (or on GitHub Pages.) The difference is that we might end
        # up with a different preference on which comes first.
    
          # Private: Determine whether a class name is an allowed custom
      #   markdown class name.
      #
      # parser_name - the name of the parser class
      #
      # Returns true if the parser name contains only alphanumeric
      # characters and is defined within Jekyll::Converters::Markdown
      def custom_class_allowed?(parser_name)
        parser_name !~ %r![^A-Za-z0-9_]! && self.class.constants.include?(
          parser_name.to_sym
        )
      end
    end
  end
end

    
        def assets_path
      @assets_path ||= File.join gem_path, 'assets'
    end
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
      # Code is not reloaded between requests.
  config.cache_classes = true
    
    namespace :bower do
    
    def usage
  $stderr.puts '#{$0} [site list] [output-dir]'
  exit(0)
end
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
                when :user
              # When the last command was a username login
              # We might keep track on this one in future
            when :pass
              # Perfect we get an +OK after a PASS command this means right password given :-)
    
    		self.block << Array.new
		self.block[-1] << 'char #{block_name}[]='
	end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end