
        
        def linkify(markdown)
  linkify_prs(markdown)
end
    
    def global_require
  JSON.pretty_generate(DATA)
end
    
    Jekyll::PluginManager.require_from_bundler
    
          #
    
    #
    
      def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
  end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
            if is_navigational_format?
          session.delete(session_key)
        else
          session[session_key]
        end
      end
    
          def headers_for(action, opts)
        headers = {
          subject: subject_for(action),
          to: resource.email,
          from: mailer_sender(devise_mapping),
          reply_to: mailer_reply_to(devise_mapping),
          template_path: template_paths,
          template_name: action
        }.merge(opts)
    
        alias :name :singular
    
            comment_tab_str ||= line_tab_str
        if try_comment(line, lines.last, tab_str * lines.last.tabs, comment_tab_str, index)
          next
        else
          comment_tab_str = nil
        end
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
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

    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update_attributes(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def show
          @inventory_unit = inventory_unit
          respond_with(@inventory_unit)
        end
    
            def index
          authorize! :read, Store
          @stores = Store.accessible_by(current_ability, :read).all
          respond_with(@stores)
        end
    
            def taxonomy_params
          if params[:taxonomy] && !params[:taxonomy].empty?
            params.require(:taxonomy).permit(permitted_taxonomy_attributes)
          else
            {}
          end
        end
      end
    end
  end
end

    
            def zone
          @zone ||= Spree::Zone.accessible_by(current_ability, :read).find(params[:id])
        end
      end
    end
  end
end
