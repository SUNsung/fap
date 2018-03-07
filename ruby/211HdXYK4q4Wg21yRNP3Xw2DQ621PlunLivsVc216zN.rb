
        
          # If a given extension is listed multiple times, prefer the first one listed
  extensions.reject! { |extension| mimes.values.flatten.include?(extension) }
    
          #
      # Require a gem or gems. If it's not present, show a very nice error
      # message that explains everything and is much more helpful than the
      # normal LoadError.
      #
      # names - a string gem name or array of gem names
      #
      def require_with_graceful_fail(names)
        Array(names).each do |name|
          begin
            Jekyll.logger.debug 'Requiring:', name.to_s
            require name
          rescue LoadError => e
            Jekyll.logger.error 'Dependency Error:', <<-MSG
Yikes! It looks like you don't have #{name} or one of its dependencies installed.
In order to use Jekyll as currently configured, you'll need to install this gem.
    
        sh 'gem build spree.gemspec'
    mv 'spree-#{version}.gem', pkgdir
  end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
            def accepted_types_and_failures
          if @allowed_types.present?
            'Accept content types: #{@allowed_types.join(', ')}\n'.tap do |message|
              if @missing_allowed_types.present?
                message << '  #{@missing_allowed_types.join(', ')} were rejected.'
              else
                message << '  All were accepted successfully.'
              end
            end
          end
        end
        def rejected_types_and_failures
          if @rejected_types.present?
            'Reject content types: #{@rejected_types.join(', ')}\n'.tap do |message|
              if @missing_rejected_types.present?
                message << '  #{@missing_rejected_types.join(', ')} were accepted.'
              else
                message << '  All were rejected successfully.'
              end
            end
          end
        end
    
          def extract_metrics(path, *keys)
        snapshot.metric_store.extract_metrics(path, *keys)
      end
    end
  end
end
