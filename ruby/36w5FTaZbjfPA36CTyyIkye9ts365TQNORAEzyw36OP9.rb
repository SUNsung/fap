
        
        multitask :default => [:test, :features]
    
        # Private: The list of files to be created when site is built.
    #
    # Returns a Set with the file paths
    def new_files
      @new_files ||= Set.new.tap do |files|
        site.each_site_file { |item| files << item.destination(site.dest) }
      end
    end
    
              if options.fetch('skip_initial_build', false)
            Jekyll.logger.warn 'Build Warning:', 'Skipping the initial build.' \
                               ' This may result in an out-of-date site.'
          else
            build(site, options)
          end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
          def unauthorized
        render 'spree/api/errors/unauthorized', status: 401 and return
      end
    
            private
    
            private
    
            def index
          @product_properties = @product.product_properties.accessible_by(current_ability, :read).
                                ransack(params[:q]).result.
                                page(params[:page]).per(params[:per_page])
          respond_with(@product_properties)
        end