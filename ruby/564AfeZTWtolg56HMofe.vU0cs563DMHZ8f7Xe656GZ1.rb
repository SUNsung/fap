
        
              private
    
            include ::EachBatch
      end
    
            def representation_class
          Representation::DiffNote
        end
    
            def importer_class
          IssueAndLabelLinksImporter
        end
    
              issue.label_names.each do |label_name|
            # Although unlikely it's technically possible for an issue to be
            # given a label that was created and assigned after we imported all
            # the project's labels.
            next unless (label_id = label_finder.id_for(label_name))
    
            def representation_class
          Representation::Note
        end
    
          # The class used for converting API responses to Hashes when performing
      # the import.
      def representation_class
        raise NotImplementedError
      end
    
          def field_container(model, method, options = {}, &block)
        css_classes = options[:class].to_a
        css_classes << 'field'
        css_classes << 'withError' if error_message_on(model, method).present?
        content_tag(
          :div, capture(&block),
          options.merge(class: css_classes.join(' '), id: '#{model}_#{method}_field')
        )
      end
    
              def render_order(result)
            if result.success?
              render_serialized_payload { serialized_current_order }
            else
              render_error_payload(result.error)
            end
          end
    
              if @order.update_from_params(params, permitted_checkout_attributes, request.headers.env)
            if current_api_user.has_spree_role?('admin') && user_id.present?
              @order.associate_user!(Spree.user_class.find(user_id))
            end
    
            def create
          authorize! :create, Product
          params[:product][:available_on] ||= Time.current
          set_up_shipping_category