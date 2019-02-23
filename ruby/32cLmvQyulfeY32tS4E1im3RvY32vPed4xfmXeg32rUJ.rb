
        
        module ActionView #:nodoc:
  # = Action View Raw Output Helper
  module Helpers #:nodoc:
    module OutputSafetyHelper
      # This method outputs without escaping a string. Since escaping tags is
      # now default, this can be used when you don't want Rails to automatically
      # escape tags. This is not recommended if the data is coming from the user's
      # input.
      #
      # For example:
      #
      #  raw @user.name
      #  # => 'Jimmy <alert>Tables</alert>'
      def raw(stringish)
        stringish.to_s.html_safe
      end
    
              def serialize_resource(resource)
            resource_serializer.new(
              resource,
              include: resource_includes,
              sparse_fields: sparse_fields
            ).serializable_hash
          end
    
          before_action :set_content_type
      before_action :load_user
      before_action :authorize_for_order, if: proc { order_token.present? }
      before_action :authenticate_user
      before_action :load_user_roles
    
              if @product_property.update_attributes(product_property_params)
            respond_with(@product_property, status: 200, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end
    
    # Add our files (should be in the current directory):
package.input('my-executable=/usr/bin/')
package.input('my-library.so=/usr/lib/')
    
      option '--package-name-prefix', 'PREFIX', 'Name to prefix the package ' \
    'name with.', :default => 'node'
    
          if !attributes[:pacman_group].nil?
        if attributes[:pacman_group] == 'root'
          data_tar_flags += [ '--numeric-owner', '--group', '0' ]
        else
          data_tar_flags += [ '--group', attributes[:deb_group] ]
        end
      end
    end
    return data_tar_flags
  end # def data_tar_flags
    
          base = staging_path(File.join(attributes[:prefix], '#{platform.platform}/#{platform.target_version || 'default'}'))
      target = File.join(base, 'files')
      actions_script = File.join(base, 'install_actions.sh')
      ::PleaseRun::Installer.install_files(platform, target, false)
      ::PleaseRun::Installer.write_actions(platform, actions_script)
    end
    
          if !attributes[:python_install_data].nil?
        flags += [ '--install-data', File.join(prefix, attributes[:python_install_data]) ]
      elsif !attributes[:prefix].nil?
        # prefix given, but not python_install_data, assume PREFIX/data
        flags += [ '--install-data', File.join(prefix, 'data') ]
      end
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]