
        
            if keys.empty?
      raise ArgumentError, 'Range unspecified. Specify the :within, :maximum, :minimum, or :is option.'
    end
    
              # Depending on the attribute, multiple values may
          # be returned. We need only one for username.
          # Ex. `uid` returns only one value but `mail` may
          # return an array of multiple email addresses.
          [username].flatten.first.tap do |username|
            username.downcase! if config.lowercase_usernames
          end
        end
    
            return unless token
    
          def perform(start_id, stop_id)
        status_sql = Build
          .where('ci_builds.commit_id = ci_stages.pipeline_id')
          .where('ci_builds.stage = ci_stages.name')
          .status_sql
    
          def initialize(badge)
        @badge = badge
      end
    
            def status
          @project.pipelines
            .where(sha: @sha)
            .latest_status(@ref) || 'unknown'
        end
    
            def key_text
          @entity.to_s
        end
    
            # Called to change the hostname of the virtual machine.
        def change_host_name(name)
          raise BaseError, _key: :unsupported_host_name
        end
      end
    end
  end
end

    
            # Initialize the provider to represent the given machine.
        #
        # @param [Vagrant::Machine] machine The machine that this provider
        #   is responsible for.
        def initialize(machine)
        end
    
            def fire
          inventory_unit.send('#{@event}!') if @event
        end
    
            def line_items_attributes
          { line_items_attributes: {
              id: params[:id],
              quantity: params[:line_item][:quantity],
              options: line_item_params[:options] || {}
          } }
        end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end