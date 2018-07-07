
        
          def worker_id(config = nil)
    '#{self.class.to_s}-#{id}-#{Digest::SHA1.hexdigest((config.presence || options).to_json)}'
  end
    
      module SortableTableHelper
    # :call-seq:
    #   sortable_column(attribute, default_direction = 'desc', name: attribute.humanize)
    def sortable_column(attribute, default_direction = nil, options = nil)
      if options.nil? && (options = Hash.try_convert(default_direction))
        default_direction = nil
      end
      default_direction ||= 'desc'
      options ||= {}
      name = options[:name] || attribute.humanize
      selected = @table_sort_info[:attribute].to_s == attribute
      if selected
        direction = @table_sort_info[:direction]
        new_direction = direction.to_s == 'desc' ? 'asc' : 'desc'
        classes = 'selected #{direction}'
      else
        classes = ''
        new_direction = default_direction
      end
      link_to(name, url_for(sort: '#{attribute}.#{new_direction}'), class: classes)
    end
  end
end

    
    def each_schema_load_environment
  # If we're in development, also run this for the test environment.
  # This is a somewhat hacky way to do this, so here's why:
  # 1. We have to define this before we load the schema, or we won't
  #    have a timestamp_id function when we get to it in the schema.
  # 2. db:setup calls db:schema:load_if_ruby, which calls
  #    db:schema:load, which we define above as having a prerequisite
  #    of this task.
  # 3. db:schema:load ends up running
  #    ActiveRecord::Tasks::DatabaseTasks.load_schema_current, which
  #    calls a private method `each_current_configuration`, which
  #    explicitly also does the loading for the `test` environment
  #    if the current environment is `development`, so we end up
  #    needing to do the same, and we can't even use the same method
  #    to do it.
    
      def text_url
    object.local? ? medium_url(object) : nil
  end
    
      def deliver_digest
    NotificationMailer.digest(user.account).deliver_now!
    user.touch(:last_emailed_at)
  end
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
