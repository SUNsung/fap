
        
        end

    
      def set_permission(permission_name, value)
    self.send('#{permission_name}=', value)
    save_and_refresh_staff_groups!
  end
    
      delegate :form_configurable_attributes, to: :class
  delegate :form_configurable_fields, to: :class
    
      included do
    include Oauthable
    
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

    
        @services = current_user.services.reorder(table_sort).page(params[:page])
    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
          def _devise_route_context
        @_devise_route_context ||= send(Devise.available_router_name)
      end
    end
  end
end

    
    ```
#{plugins_string}
```
#{markdown_podfile}
EOS
      end
    
            def initialize(argv)
          @name = argv.shift_argument
          @template_url = argv.option('template-url', TEMPLATE_REPO)
          super
          @additional_args = argv.remainder!
        end
    
                report.pods_by_error.each do |message, versions_by_name|
              UI.puts '-> #{message}'.red
              versions_by_name.each { |name, versions| UI.puts '  - #{name} (#{versions * ', '})' }
              UI.puts
            end