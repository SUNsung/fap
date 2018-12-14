
        
        require 'global'
require 'build_options'
require 'cxxstdlib'
require 'keg'
require 'extend/ENV'
require 'debrew'
require 'fcntl'
require 'socket'
    
    module Homebrew
  module Cleanup
    @@disk_cleanup_size = 0
    
      def xcode
    if instance_variable_defined?(:@xcode)
      @xcode
    elsif MacOS::Xcode.installed?
      @xcode = MacOS::Xcode.version
      @xcode += ' => #{MacOS::Xcode.prefix}' unless MacOS::Xcode.default_prefix?
      @xcode
    end
  end
    
      attr_reader :tap, :initial_revision, :current_revision
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
            if is_navigational_format?
          session.delete(session_key)
        else
          session[session_key]
        end
      end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
              # Otherwise add the block to the list of hooks for this action.
          hooks << block
        end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end

    
            def void
          perform_payment_action(:void_transaction)
        end
    
            def destroy
          authorize! :destroy, zone
          zone.destroy
          respond_with(zone, status: 204)
        end